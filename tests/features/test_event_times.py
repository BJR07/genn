import numpy as np
import pytest
from pygenn import types

from pygenn import (create_neuron_model,
                    create_sparse_connect_init_snippet,
                    create_var_init_snippet,
                    create_weight_update_model,
                    init_postsynaptic,
                    init_sparse_connectivity, 
                    init_toeplitz_connectivity,
                    init_weight_update, init_var)

# Neuron model which fires every timestep
# **NOTE** this is just so sim_code fires every timestep
always_spike_neuron_model = create_neuron_model(
    "always_spike_neuron",
    threshold_condition_code="true")

def _gen_st_syn(t, float_min):
    # **NOTE** we delay by 22 timesteps because:
    # 1) delay = 20
    # 2) spike times are read in postsynaptic kernel one timestep AFTER being emitted
    # 3) t is incremented one timestep at the end of step_time
    delayed_time = np.arange(10) + 11.0 + (10.0 * np.floor((t - 22.0 - np.arange(10)) / 10.0))
    delayed_time[delayed_time < 21.0] = float_min
    return delayed_time

def _gen_prev_st_syn(t, float_min):
    # **NOTE** we delay by 22 timesteps because:
    # 1) delay = 20
    # 2) spike times are read in postsynaptic kernel one timestep AFTER being emitted
    # 3) t is incremented one timestep at the end of step_time
    delayed_time = np.arange(10) + 21.0 + (10.0 * np.floor((t - 22.0 - np.arange(10)) / 10.0))
    delayed_time[delayed_time < 21.0] = float_min
    return delayed_time

def _gen_st_neuron(t, float_min):
    delayed_time = np.arange(10) + (10.0 * np.floor((t - 2.0 - np.arange(10)) / 10.0))
    delayed_time[delayed_time < 0.0] = float_min
    return delayed_time
    
def _gen_st_neuron_event(t, float_min):
    # **NOTE** we delay by 21 timesteps because:
    # 1) delay = 20
    # 2) t is incremented one timestep at the end of step_time
    delayed_time = np.arange(10) + 10.0 + (10.0 * np.floor((t - 21.0 - np.arange(10)) / 10.0))
    delayed_time[delayed_time < 0.0] = float_min
    return delayed_time

@pytest.mark.parametrize("precision", [types.Double, types.Float])
def test_spike_times(make_model, backend, precision):
    # Neuron model which fires at t = id ms and every 10 ms after that
    pattern_spike_neuron_model = create_neuron_model(
        "pattern_spike_neuron",
        vars=[("a", "scalar")],
        sim_code=
        """
        a = st;
        """,
        threshold_condition_code=
        """
        t >= (scalar)id && fmod(t - (scalar)id, 10.0) < 1e-4
        """)

    pre_weight_update_model = create_weight_update_model(
        "pre_weight_update",
        vars=[("a", "scalar"), ("b", "scalar")],
        pre_vars=[("c", "scalar")],
        sim_code=
        """
        a = prev_st_pre;
        """,
        post_spike_syn_code=
        """
        b = st_pre;
        """,
        pre_spike_code=
        """
        c = st_pre;
        """)

    post_weight_update_model = create_weight_update_model(
        "post_weight_update",
        vars=[("a", "scalar"), ("b", "scalar")],
        pre_spike_syn_code=
        """
        a = st_post;
        """,
        post_spike_syn_code=
        """
        b = prev_st_post;
        """)

    model = make_model(precision, "test_spike_times", backend=backend)
    model.dt = 1.0

    # Create pre and postsynaptic neuron populations
    np_scalar = np.float32 if precision == types.Float else np.float64
    float_min = np.finfo(np_scalar).min
    pre_n_pop = model.add_neuron_population("PreNeurons", 10, pattern_spike_neuron_model, 
                                            {}, {"a": float_min})

    post_n_pop = model.add_neuron_population("PostNeurons", 10, always_spike_neuron_model, 
                                             {}, {})

    # Add synapse models testing various ways of reading presynaptic WU vars
    s_pre_pop = model.add_synapse_population(
        "PreSynapses", "SPARSE",
        pre_n_pop, post_n_pop,
        init_weight_update(pre_weight_update_model, {}, {"a": float_min, "b": float_min}, 
                           {"c": float_min}),
        init_postsynaptic("DeltaCurr"),
        init_sparse_connectivity("OneToOne"))
    s_pre_pop.axonal_delay_steps = 20

    s_post_pop = model.add_synapse_population(
        "PostSynapses", "SPARSE",
        post_n_pop, pre_n_pop,
        init_weight_update(post_weight_update_model, {}, {"a": float_min, "b": float_min}),
        init_postsynaptic("DeltaCurr"),
        init_sparse_connectivity("OneToOne"))
    s_post_pop.back_prop_delay_steps = 20

    # Build model and load
    model.build()
    model.load()

    s_pre_pop.pull_connectivity_from_device()
    s_post_pop.pull_connectivity_from_device()

    samples = [(s_pre_pop.vars["a"], _gen_st_syn),
               (s_pre_pop.vars["b"], _gen_prev_st_syn),
               (s_post_pop.vars["a"], _gen_prev_st_syn),
               (s_post_pop.vars["b"], _gen_st_syn),
               (pre_n_pop.vars["a"], _gen_st_neuron),
               (s_pre_pop.pre_vars["c"], _gen_st_neuron_event)]
    while model.timestep < 100:
        model.step_time()
        
        # Loop through synapse groups and compare value of w with delayed time
        for var, gen_fn in samples:
            # Calculate time of spikes we SHOULD be reading
            delayed_time = gen_fn(model.t, float_min)

            var.pull_from_device()
            var_value = var.current_values
            if not np.allclose(delayed_time, var_value):
                assert False, f"{var.group.name} var '{var.name}' has wrong value ({var_value} rather than {delayed_time})"



@pytest.mark.parametrize("precision", [types.Double, types.Float])
def test_spike_event_times(make_model, backend, precision):
    # Empty neuron model
    empty_neuron_model = create_neuron_model(
        "empty_neuron")


    pre_weight_update_model = create_weight_update_model(
        "pre_weight_update",
        vars=[("a", "scalar"), ("b", "scalar")],
        pre_event_syn_code=
        """
        a = prev_set_pre;
        """,
        pre_event_threshold_condition_code=
        """
        t >= (scalar)id && fmod(t - (scalar)id, 10.0) < 1e-4
        """,
        post_spike_syn_code=
        """
        b = set_pre;
        """)

    post_weight_update_model = create_weight_update_model(
        "post_weight_update",
        vars=[("a", "scalar"), ("b", "scalar")],
        pre_spike_syn_code=
        """
        a = set_post;
        """,
        post_event_syn_code=
        """
        b = prev_set_post;
        """,
        post_event_threshold_condition_code=
        """
        t >= (scalar)id && fmod(t - (scalar)id, 10.0) < 1e-4
        """,)

    model = make_model(precision, "test_spike_event_times", backend=backend)
    model.dt = 1.0

    # Create pre and postsynaptic neuron populations
    pre_n_pop = model.add_neuron_population("PreNeurons", 10, empty_neuron_model, 
                                            {}, {})

    post_n_pop = model.add_neuron_population("PostNeurons", 10, always_spike_neuron_model, 
                                             {}, {})

    # Add synapse models testing various ways of reading presynaptic WU vars
    np_scalar = np.float32 if precision == types.Float else np.float64
    float_min = np.finfo(np_scalar).min
    s_pre_pop = model.add_synapse_population(
        "PreSynapses", "SPARSE",
        pre_n_pop, post_n_pop,
        init_weight_update(pre_weight_update_model, {}, {"a": float_min, "b": float_min}),
        init_postsynaptic("DeltaCurr"),
        init_sparse_connectivity("OneToOne"))
    s_pre_pop.axonal_delay_steps = 20

    s_post_pop = model.add_synapse_population(
        "PostSynapses", "SPARSE",
        post_n_pop, pre_n_pop,
        init_weight_update(post_weight_update_model, {}, {"a": float_min, "b": float_min}),
        init_postsynaptic("DeltaCurr"),
        init_sparse_connectivity("OneToOne"))
    s_post_pop.back_prop_delay_steps = 20

    # Build model and load
    model.build()
    model.load()

    s_pre_pop.pull_connectivity_from_device()
    s_post_pop.pull_connectivity_from_device()

    samples = [(s_pre_pop.vars["a"], _gen_st_syn),
               (s_pre_pop.vars["b"], _gen_prev_st_syn),
               (s_post_pop.vars["a"], _gen_prev_st_syn),
               (s_post_pop.vars["b"], _gen_st_syn)]
    while model.timestep < 100:
        model.step_time()

        # Loop through synapse groups and compare value of w with delayed time
        for var, gen_fn in samples:
            # Calculate time of spikes we SHOULD be reading
            delayed_time = gen_fn(model.t, float_min)
            
            var.pull_from_device()
            var_value = var.values
            if not np.allclose(delayed_time, var_value):
                assert False, f"{var.group.name} var '{var.name}' has wrong value ({var_value} rather than {delayed_time})"
