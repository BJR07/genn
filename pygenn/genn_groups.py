""" @namespace pygenn.genn_groups
This module provides classes which automate model checks and parameter
conversions for GeNN Groups
"""
try:
    xrange
except NameError:  # Python 3
    xrange = range

from deprecated import deprecated
from six import iteritems, iterkeys, itervalues
from warnings import warn
from weakref import proxy
import numpy as np

from . import neuron_models, types
from .genn import (CustomUpdateWU, SynapseMatrixConnectivity,
                   SynapseMatrixWeight, VarAccessDim, VarLocation)
from .genn import get_var_access_dim
from .model_preprocessor import (prepare_model, Array, 
                                 ExtraGlobalParameter, Variable)

def _get_num_var_copies(var_dims, batch_size):
    if (var_dims & VarAccessDim.BATCH):
        return () if batch_size == 1 else (batch_size,)
    else:
        return ()

def _get_num_neuron_var_elements(var_dims, num_elements):
    if (var_dims & VarAccessDim.ELEMENT):
        return (num_elements,)
    else:
        return (1,)

def _get_neuron_var_shape(var_dims, num_elements, batch_size, 
                          num_delay_slots=1):
    num_delay_slots = () if num_delay_slots == 1 else (num_delay_slots,)
    return (_get_num_var_copies(var_dims, batch_size)
            + num_delay_slots
            + _get_num_neuron_var_elements(var_dims, num_elements))

def _get_synapse_var_shape(var_dims, sg, batch_size):
    num_copies = _get_num_var_copies(var_dims, batch_size)
    if (var_dims & VarAccessDim.ELEMENT):
        if sg.matrix_type & SynapseMatrixWeight.KERNEL:
            return num_copies + (np.product(sg.kernel_size),)
        else:
            # **YUCK** this isn't correct - only backend knows correct stride
            return num_copies + (sg.src.size * sg.max_connections,)
    else:
        return num_copies + (1,)

class GroupMixin(object):

    """Parent class of NeuronGroupMixin, 
    SynapseGroupMixin and CurrentSourceMixin"""

    def _init_group(self, model):
        """Init Group

        Args:
        model   -- pygenn.genn_model.GeNNModel this group is part of
        """
        self._model = proxy(model)
        self.vars = {}
        self.extra_global_params = {}

    @deprecated("Please call pull_from_device directly on variable")
    def pull_var_from_device(self, var_name):
        """Pull variable from the device for a given population

        Args:
        var_name    --  string with the name of the variable
        """
        self.vars[var_name].pull_from_device()

    @deprecated("Please call pull_from_device directly on extra global parameter")
    def pull_extra_global_param_from_device(self, egp_name):
        """Pull extra global parameter from device

        Args:
        egp_name    --  string with the name of the variable
        """
        self.extra_global_params[egp_name].pull_from_device()

    @deprecated("Please call push_to_device directly on variable")
    def push_var_to_device(self, var_name):
        """Push population state variable to the device

        Args:
        var_name    --  string with the name of the variable
        """
        self.vars[var_name].push_to_device()

    @deprecated("Please call push_to_device directly on extra global parameter")
    def push_extra_global_param_to_device(self, egp_name):
        """Push extra global parameter to device

        Args:
        egp_name    --  string with the name of the variable
        """
        self.extra_global_params[egp_name].push_to_device()

    def _get_array(self, array_name, array_type, shape=None):
        """Assign a variable to an external numpy array

        Args:
        var_name    --  string a fully qualified name of the variable to assign
        var_type    --  ResolvedType object

        Returns numpy array of type var_type

        Raises ValueError if variable type is not supported
        """
        
        array = Array(array_type, self)
        array.set_array(self._model._runtime.get_array(self, array_name),
                        shape)
        return array

    def _load_vars(self, vars, get_shape_fn, var_dict=None,
                   get_location_fn=None):
        # If no variable dictionary is specified, use standard one
        if var_dict is None:
            var_dict = self.vars

        # If no location getter function is specified, use standard one
        if get_location_fn is None:
            get_location_fn = self.get_var_location

        # Loop through variables
        for v in vars:
            # Get corresponding data from dictionary
            var_data = var_dict[v.name]

            # If variable is located on host
            var_loc = get_location_fn(v.name) 
            if var_loc & VarLocation.HOST:
                # Determine shape of this variable
                var_shape = get_shape_fn(v)
                
                # Set array from runtime
                var_data.set_array(
                    self._model._runtime.get_array(self, v.name),
                    var_shape)

                # If manual initialisation is required, copy over variables
                if var_data.init_required:
                    var_data.view[:] = var_data.values
            else:
                assert not var_data.init_required
                var_data._view = None

    def _load_egp(self, egp_dict=None, egp_suffix=""):
        # If no EGP dictionary is specified, use standard one
        if egp_dict is None:
            egp_dict = self.extra_global_params

        # Loop through extra global params
        for egp_name, egp_data in iteritems(egp_dict):
            if egp_data.values is not None:
                # Allocate memory
                self._model._runtime.allocate_array(
                    self, egp_name + egp_suffix, len(egp_data.values))

                # Set array from runtime
                egp_data.set_array(
                    self._model._runtime.get_array(self, egp_name + egp_suffix))

                # Copy values
                egp_data.view[:] = egp_data.values

                # Push egp_data
                egp_data.push_to_device()

    def _load_var_init_egps(self, var_dict=None):
        # If no variable dictionary is specified, use standard one
        if var_dict is None:
            var_dict = self.vars

        # Loop through variables and load any associated initialisation egps
        for var_name, var_data in iteritems(var_dict):
            self._load_egp(var_data.extra_global_params, var_name)

    def _unload_vars(self, var_dict=None):
        # If no variable dictionary is specified, use standard one
        if var_dict is None:
            var_dict = self.vars

        # Loop through variables and clear views
        for v in itervalues(var_dict):
            v._unload()

    def _unload_egps(self, egp_dict=None):
        # If no EGP dictionary is specified, use standard one
        if egp_dict is None:
            egp_dict = self.extra_global_params

        # Loop through extra global params and clear views
        for e in itervalues(egp_dict):
            e._unload()

class NeuronGroupMixin(GroupMixin):

    """Class representing a group of neurons"""

    def _init_group(self, model, var_space):
        """Init NeuronGroupMixin

        Args:
        model   -- pygenn.genn_model.GeNNModel this neuron group is part of
        """
        super(NeuronGroupMixin, self)._init_group(model)

        self.vars, self.extra_global_params = prepare_model(
            self.neuron_model, self, var_space)

    @property
    def spike_recording_data(self):
        return self._model._runtime.get_recorded_spikes(self)

    @property
    def spike_event_recording_data(self):
        return self._model._runtime.get_recorded_spike_events(self)

    @property
    def size(self):
        return self.num_neurons

    def load(self, num_recording_timesteps):
        """Loads neuron group"""
        # If spike data is present on the host
        batch_size = self._model.batch_size

        # Load neuron state variables
        # **TODO** delay slots
        self._load_vars(
            self.neuron_model.get_vars(),
            lambda v: _get_neuron_var_shape(get_var_access_dim(v.access),
                                            self.size,
                                            self._model.batch_size))

        # Load neuron extra global params
        self._load_egp()

    def unload(self):
        self._unload_vars()
        self._unload_egps()

    def load_init_egps(self):
        # Load any egps used for variable initialisation
        self._load_var_init_egps()

class SynapseGroupMixin(GroupMixin):

    """Class representing synaptic connection between two groups of neurons"""
    
    def _init_group(self, model, ps_var_space, wu_var_space, wu_pre_var_space,
                    wu_post_var_space, source, target):
        """Init SynapseGroupMixin

        Args:
        model   -- pygenn.GeNNModel this neuron group is part of
        """
        super(SynapseGroupMixin, self)._init_group(model)
        
        self.src = source
        self.trg = target
        self.in_syn = None
        self.connections_set = False
        
        self.vars, self.extra_global_params = prepare_model(
            self.wu_model, self, wu_var_space)
        self.psm_vars, self.psm_extra_global_params = prepare_model(
            self.ps_model, self, ps_var_space)
        
        self.pre_vars = {vnt.name: Variable(vnt.name, vnt.type, 
                                            wu_pre_var_space[vnt.name], self)
                         for vnt in self.wu_model.get_pre_vars()}
        self.post_vars = {vnt.name: Variable(vnt.name, vnt.type, 
                                             wu_post_var_space[vnt.name], self)
                          for vnt in self.wu_model.get_post_vars()}
        
        if self.matrix_type & SynapseMatrixConnectivity.TOEPLITZ:
            connect_init = self.toeplitz_connectivity_initialiser
        else:
            connect_init = self.sparse_connectivity_initialiser
        self.connectivity_extra_global_params =\
            {egp.name: ExtraGlobalParameter(egp.name, egp.type, self)
            for egp in connect_init.snippet.get_extra_global_params()}

    @property
    def weight_update_var_size(self):
        """Size of each weight update variable"""
        if self.matrix_type & SynapseMatrixConnectivity.DENSE:
            return self.trg.size * self.src.size
        elif self.matrix_type & SynapseMatrixConnectivity.SPARSE:
            return self.max_connections * self.src.size
        elif self.matrix_type & SynapseMatrixWeight.KERNEL:
            return int(np.product(self.kernel_size))
        else:
            raise Exception("Matrix format not supported")

    def get_var_values(self, var_name):
        return self._get_view_values(self.vars[var_name].view)

    def set_sparse_connections(self, pre_indices, post_indices):
        """Set ragged format connections between two groups of neurons

        Args:
        pre_indices     --  ndarray of presynaptic indices
        post_indices    --  ndarray of postsynaptic indices
        """
        if self.matrix_type & SynapseMatrixConnectivity.SPARSE:
            # Lexically sort indices
            self.synapse_order = np.lexsort((post_indices, pre_indices))

            # Count the number of synapses in each row
            row_lengths = np.bincount(pre_indices, minlength=self.src.size)
            row_lengths = row_lengths.astype(np.uint32)

            # Use maximum for max connections
            max_row_length = int(np.amax(row_lengths))
            self.max_connections = max_row_length

            # Set ind to sorted postsynaptic indices
            self.ind = post_indices[self.synapse_order]

            # Cache the row lengths
            self.row_lengths = row_lengths

            assert len(self.row_lengths) == self.src.size
        else:
            raise Exception("set_sparse_connections only supports"
                            "ragged format sparse connectivity")

        self.connections_set = True

    def get_sparse_pre_inds(self):
        """Get presynaptic indices of synapse group connections

        Returns:
        ndarray of presynaptic indices
        """
        if self.matrix_type & SynapseMatrixConnectivity.SPARSE:
            rl = (self._row_lengths.view if self._connectivity_initialiser_provided
                  else self.row_lengths)

            if rl is None:
                raise Exception("problem accessing connectivity ")

            # Expand row lengths into full array
            # of presynaptic indices and return
            return np.hstack([np.repeat(i, l) for i, l in enumerate(rl)])

        else:
            raise Exception("get_sparse_pre_inds only supports"
                            "ragged format sparse connectivity")

    def get_sparse_post_inds(self):
        """Get postsynaptic indices of synapse group connections

        Returns:
        ndarrays of postsynaptic indices
        """
        if (self.matrix_type & SynapseMatrixConnectivity.SPARSE):
            if not self._connectivity_initialiser_provided:
                if self.ind is None or self.row_lengths is None:
                    raise Exception("problem accessing manually initialised connectivity ")
                # Return cached indices
                return self.ind

            else:
                if self._ind is None or self._row_lengths is None:
                    raise Exception("problem accessing on-device initialised connectivity ")

                # the _ind array view still has some non-valid data so we remove them
                # with the row_lengths
                return np.hstack([
                    self._ind.view[i * self.max_connections: (i * self.max_connections) + r]
                        for i, r in enumerate(self._row_lengths.view)])

        else:
            raise Exception("get_sparse_post_inds only supports"
                            "ragged format sparse connectivity")

    def pull_connectivity_from_device(self):
        """Pull extra variables associated with connectivity from device"""
        if (self.matrix_type & SynapseMatrixConnectivity.SPARSE):
            self._ind.pull_from_device()
            self._row_lengths.pull_from_device()

    def push_connectivity_to_device(self):
        """Push extra variables associated with connectivity to device"""
        if (self.matrix_type & SynapseMatrixConnectivity.SPARSE):
            self._ind.push_to_device()
            self._row_lengths.push_to_device()
    
    @deprecated("Please call pull_from_device directly on out_post")
    def pull_in_syn_from_device(self):
        """Pull synaptic input current from device"""
        self.out_post.pull_from_device()
    
    @deprecated("Please call push_to_device directly on out_post")
    def push_in_syn_to_device(self):
        """Push synaptic input current to device"""
        self.out_post.push_to_device()

    @deprecated("Please call pull_from_device directly on extra global parameter")
    def pull_psm_extra_global_param_from_device(self, egp_name):
        """Wrapper around GeNNModel.pull_extra_global_param_from_device

        Args:
        egp_name    --  string with the name of the variable
        """
        self.psm_extra_global_params[egp_name].pull_from_device()

    @deprecated("Please call push_to_device directly on extra global parameter")
    def push_psm_extra_global_param_to_device(self, egp_name):
        """Wrapper around GeNNModel.push_extra_global_param_to_device

        Args:
        egp_name    --  string with the name of the variable
        """
        self.psm_extra_global_params[egp_name].push_to_device()

    def load(self):
        # If synapse population has non-dense connectivity
        # which requires initialising manually
        if not (self.matrix_type & SynapseMatrixConnectivity.DENSE):
            if (self.matrix_type & SynapseMatrixConnectivity.SPARSE):
                # If connectivity is located on host
                conn_loc = self.sparse_connectivity_location
                if conn_loc & VarLocation.HOST:
                    # Get pointers to ragged data structure members
                    self._ind = self._get_array("ind", self._sparse_ind_type)
                    self._row_lengths = self._get_array("rowLength",
                                                        types.Uint32)

                    # If data is available
                    if self.connections_set:
                        # Copy in row length
                        self._row_lengths.view[:] = self.row_lengths

                        # Create (x)range containing the index where each row starts in ind
                        row_start_idx = xrange(0, self.weight_update_var_size,
                                               self.max_connections)

                        # Loop through ragged matrix rows
                        syn = 0
                        for i, r in zip(row_start_idx, self.row_lengths):
                            # Copy row from non-padded indices into correct location
                            self._ind.view[i:i + r] = self.ind[syn:syn + r]
                            syn += r
                    elif not self._connectivity_initialiser_provided:
                        raise Exception("For sparse projections, the connections"
                                        "must be set before loading a model")
                # Otherwise, if connectivity isn't located on host, 
                # give error if user tries to manually configure it
                elif self.connections_set:
                    raise Exception("If sparse connectivity is only located "
                                    "on device, it cannot be set with "
                                    "set_sparse_connections")
            elif self.connections_set:
                raise Exception("Matrix format not supported")

        # Loop through weight update model state variables
        for v in self.wu_model.get_vars():
            # Get corresponding data from dictionary
            var_data = self.vars[v.name]

            # If population has individual synapse variables
            if ((self.matrix_type & SynapseMatrixWeight.INDIVIDUAL) or 
                    (self.matrix_type & SynapseMatrixWeight.KERNEL)):
                # If variable is located on host
                var_loc = self.get_wu_var_location(v.name) 
                if var_loc & VarLocation.HOST:
                    # Determine shape of this variable
                    var_shape = _get_synapse_var_shape(
                        get_var_access_dim(v.access), 
                        self, self._model.batch_size)

                    # Set array from runtime
                    var_data.set_array(
                        self._model._runtime.get_array(self, v.name),
                        var_shape)

                    # Initialise variable if necessary
                    self._init_wum_var(var_data)
                else:
                    assert not var_data.init_required
                    var_data._view = None

            # Load any var initialisation egps associated with this variable
            self._load_egp(var_data.extra_global_params, v.name)

        # If population's presynaptic weight update hasn't been 
        # fused, load weight update model presynaptic variables
        # **TODO** delay
        if not self._wu_pre_model_fused:
            self._load_vars(
                self.wu_model.get_pre_vars(),
                lambda v: _get_neuron_var_shape(get_var_access_dim(v.access),
                                                self.src.size,
                                                self._model.batch_size),
                self.pre_vars, self.get_wu_pre_var_location)

        # If population's postsynaptic weight update hasn't been 
        # fused, load weight update model postsynaptic variables
        # **TODO** delay
        if not self._wu_post_model_fused:
            self._load_vars(
                self.wu_model.get_post_vars(),
                lambda v: _get_neuron_var_shape(get_var_access_dim(v.access),
                                                self.trg.size,
                                                self._model.batch_size),
                self.post_vars, self.get_wu_post_var_location)
        
        # If this synapse group's postsynaptic model hasn't been fused
        if not self._ps_model_fused:
            # Load postsynaptic update model variables
            self._load_vars(
                self.ps_model.get_vars(),
                lambda v: _get_neuron_var_shape(get_var_access_dim(v.access),
                                                self.trg.size,
                                                self._model.batch_size),
                self.psm_vars, self.get_ps_var_location)
                
            # If it's inSyn is accessible on the host
            if self.in_syn_location & VarLocation.HOST:
                # Get array
                self.out_post = self._get_array(
                    "outPost", self._model.precision,
                    (self._model.batch_size, self.trg.size))

        # Load extra global parameters
        self._load_egp()
        self._load_egp(self.psm_extra_global_params)

    def load_init_egps(self):
        # Load any egps used for connectivity initialisation
        self._load_egp(self.connectivity_extra_global_params)

        # Load any egps used for variable initialisation
        self._load_var_init_egps()

        # Load any egps used for postsynaptic model variable initialisation
        self._load_var_init_egps(self.psm_vars)

        # Load any egps used for pre and postsynaptic variable initialisation
        self._load_var_init_egps(self.pre_vars)
        self._load_var_init_egps(self.post_vars)

    @property
    def _connectivity_initialiser_provided(self):
        assert self.matrix_type & SynapseMatrixConnectivity.SPARSE
        
        snippet = self.sparse_connectivity_initialiser.snippet
        return (len(snippet.get_row_build_code()) > 0 
                or len(snippet.get_col_build_code()) > 0)

    def unload(self):
        self._ind = None
        self._row_lengths = None
        self.in_syn = None

        self._unload_vars()
        self._unload_vars(self.pre_vars)
        self._unload_vars(self.post_vars)
        self._unload_vars(self.psm_vars)
        self._unload_egps()
        self._unload_egps(self.psm_extra_global_params)
        self._unload_egps(self.connectivity_extra_global_params)
    
    def _get_view_values(self, var_view):
        if self.matrix_type & SynapseMatrixConnectivity.DENSE:
            return np.copy(var_view)
        elif self.matrix_type & SynapseMatrixWeight.KERNEL:
            return np.copy(var_view)
        elif self.matrix_type & SynapseMatrixConnectivity.SPARSE:
            max_rl = self.max_connections
            row_ls = (self._row_lengths.view if self._connectivity_initialiser_provided 
                      else self.row_lengths)

            # Create range containing the index where each row starts in ind
            row_start_idx = xrange(0, self.weight_update_var_size, max_rl)

            # Build list of subviews representing each row
            if len(var_view.shape) == 1:
                rows = [var_view[i:i + r] 
                        for i, r in zip(row_start_idx, row_ls)]
            else:
                rows = [var_view[:,i:i + r] 
                        for i, r in zip(row_start_idx, row_ls)]
            
            # Stack all rows together into single array
            return np.hstack(rows)
        else:
            raise Exception("Matrix format not supported")
            
    def _init_wum_var(self, var_data):
        # If initialisation is required
        if var_data.init_required:
            # If connectivity is dense,
            # copy variables  directly into view
            # **NOTE** we assume order is row-major
            if ((self.matrix_type & SynapseMatrixConnectivity.DENSE) or
                (self.matrix_type & SynapseMatrixWeight.KERNEL)):
                var_data.view[:] = var_data.values
            elif (self.matrix_type & SynapseMatrixConnectivity.SPARSE):
                # Sort variable to match GeNN order
                if len(var_data.view.shape) == 1:
                    sorted_var = var_data.values[self.synapse_order]
                else:
                    sorted_var = var_data.values[:,self.synapse_order]

                # Create (x)range containing the index
                # where each row starts in ind
                row_start_idx = xrange(0, self.weight_update_var_size,
                                       self.max_connections)

                # Loop through ragged matrix rows
                syn = 0
                for i, r in zip(row_start_idx, self.row_lengths):
                    # Copy row from non-padded indices into correct location
                    if len(var_data.view.shape) == 1:
                        var_data.view[i:i + r] = sorted_var[syn:syn + r]
                    else:
                        var_data.view[:,i:i + r] = sorted_var[:,syn:syn + r]
                    syn += r
            else:
                raise Exception("Matrix format not supported")

class CurrentSourceMixin(GroupMixin):

    """Class representing a current injection into a group of neurons"""

    def _init_group(self, model, var_space, target_pop):
        """Init NeuronGroup

        Args:
        name    -- string name of the group
        model   -- pygenn.genn_model.GeNNModel this neuron group is part of
        """
        super(CurrentSourceMixin, self)._init_group(model)
        self.target_pop = target_pop
        self.vars, self.extra_global_params = prepare_model(
            self.current_source_model, self, var_space)
        
    @property
    def size(self):
        """Number of neuron in the injected population"""
        return self.target_pop.size


    def load(self):
        # Load current source variables
        self._load_vars(
            self.current_source_model.get_vars(),
            lambda v: _get_neuron_var_shape(get_var_access_dim(v.access),
                                            self.size,
                                            self._model.batch_size))

        # Load current source extra global parameters
        self._load_egp()

    def load_init_egps(self):
        # Load any egps used for variable initialisation
        self._load_var_init_egps()

    def unload(self):
        self._unload_vars()
        self._unload_egps()


class CustomUpdateMixin(GroupMixin):
    """Class representing a custom update"""
    def _init_group(self, model, var_space):
        """Init CustomUpdate

        Args:
        name    -- string name of the group
        model   -- pygenn.genn_model.GeNNModel this neuron group is part of
        """
        super(CustomUpdateMixin, self)._init_group(model)
        self.vars, self.extra_global_params = prepare_model(
            self.custom_update_model, self, var_space)
 
    def load(self):
        batch_size = (self._model.batch_size
                      if self._dims & VarAccessDim.BATCH
                      else 1)
        self._load_vars(
            self.custom_update_model.get_vars(),
            lambda v: _get_neuron_var_shape(get_var_access_dim(v.access, self._dims),
                                            self.size, batch_size))
        self._load_egp()
 
    def load_init_egps(self):
        # Load any egps used for variable initialisation
        self._load_var_init_egps()

    def unload(self):
        self._unload_vars()
        self._unload_egps()


class CustomUpdateWUMixin(GroupMixin):
    """Class representing a custom weight update"""
    def _init_group(self, model, var_space):
        """Init CustomUpdateWUMixin

        Args:
        name    -- string name of the group
        model   -- pygenn.genn_model.GeNNModel this neuron group is part of
        """
        super(CustomUpdateWUMixin, self)._init_group(model)
        self.vars, self.extra_global_params = prepare_model(
            self.custom_update_model, self, var_space)

    def load(self):
        # Assert that population doesn't have procedural connectivity
        assert not (self.synapse_group.matrix_type 
                    & SynapseMatrixConnectivity.PROCEDURAL)

        # Loop through state variables
        batch_size = (self._model.batch_size
                      if self._dims & VarAccessDim.BATCH
                      else 1)
        for v in self.custom_update_model.get_vars():
            # Get corresponding data from dictionary
            var_data = self.vars[v.name]

            # If variable is located on host
            var_loc = self.get_var_location(v.name) 
            if var_loc & VarLocation.HOST:
                 # Determine shape of this variable
                var_shape = _get_synapse_var_shape(
                    get_var_access_dim(v.access, self._dims), 
                    self.synapse_group, batch_size)
                
                # Set array from runtime
                var_data.set_array(
                    self._model._runtime.get_array(self, v.name),
                    var_shape)

                # Initialise variable if necessary
                self.synapse_group._init_wum_var(var_data)

            # Load any var initialisation egps associated with this variable
            self._load_egp(var_data.extra_global_params, v.name)

        # Load custom update extra global parameters
        self._load_egp()
    
    def get_var_values(self, var_name):
        return self.synapse_group._get_view_values(self.vars[var_name].view)

    def load_init_egps(self):
        # Load any egps used for variable initialisation
        self._load_var_init_egps()

    def unload(self):
        self._unload_vars()
        self._unload_egps()

    @property
    def synapse_group(self):
        """Get SynapseGroup associated with custom weight update"""
        # Return Python synapse group reference from 
        # first (arbitrarily) variable reference
        return next(itervalues(self.var_references)).synapse_group


class CustomConnectivityUpdateMixin(GroupMixin):
    """Class representing a custom connectivity update"""
    def _init_group(self, model, var_space, pre_var_space, 
                    post_var_space, synapse_group):
        """Init CustomConnectivityUpdateGroup

        Args:
        name    -- string name of the group
        model   -- pygenn.genn_model.GeNNModel this neuron group is part of
        """
        super(CustomConnectivityUpdateMixin, self)._init_group(model)
        self.synapse_group = synapse_group
        self.vars, self.extra_global_params = prepare_model(
            self.model, self, var_space)
        self.pre_vars = {vnt.name: Variable(vnt.name, vnt.type, 
                                            pre_var_space[vnt.name], self)
                         for vnt in self.model.get_pre_vars()}
        self.post_vars = {vnt.name: Variable(vnt.name, vnt.type, 
                                             post_var_space[vnt.name], self)
                          for vnt in self.model.get_post_vars()}
    
    def get_var_values(self, var_name):
        return self.synapse_group._get_view_values(self.vars[var_name].view)

    def load(self):
        # Loop through state variables
        for v in self.model.get_vars():
            # Get corresponding data from dictionary
            var_data = self.vars[v.name]

            # If variable is located on host
            var_loc = self.get_var_location(v.name) 
            if var_loc & VarLocation.HOST:
                # Determine shape of this variable
                var_shape = _get_synapse_var_shape(
                    get_var_access_dim(v.access), 
                    self.synapse_group, 1)

                # Set array from runtime
                var_data.set_array(
                    self._model._runtime.get_array(self, v.name),
                    var_shape)

                # Initialise variable if necessary
                self.synapse_group._init_wum_var(var_data)

            # Load any var initialisation egps associated with this variable
            self._load_egp(var_data.extra_global_params, v.name)
  
        # Load pre and postsynaptic variables
        self._load_vars(
            self.model.get_pre_vars(),
            lambda v: _get_neuron_var_shape(get_var_access_dim(v.access),
                                            self.synapse_group.src.size, 1),
            self.pre_vars, self.get_pre_var_location)
        self._load_vars(
            self.model.get_post_vars(), 
            lambda v: _get_neuron_var_shape(get_var_access_dim(v.access),
                                            self.synapse_group.trg.size, 1),
            self.post_vars, self.get_post_var_location)

        # Load custom update extra global parameters
        self._load_egp()

    def load_init_egps(self):
        # Load any egps used for variable initialisation
        self._load_var_init_egps()
        
        # Load any egps used for pre and postsynaptic variable initialisation
        self._load_var_init_egps(self.pre_vars)
        self._load_var_init_egps(self.post_vars)

    def unload(self):
        self._unload_vars()
        self._unload_vars(self.pre_vars)
        self._unload_vars(self.post_vars)
        self._unload_egps()
