#pragma once

// Standard includes
#include <map>
#include <set>
#include <string>
#include <vector>

// GeNN includes
#include "gennExport.h"
#include "neuronModels.h"
#include "varLocation.h"

// Forward declarations
namespace GeNN
{
class CurrentSourceInternal;
class SynapseGroupInternal;
}

//------------------------------------------------------------------------
// GeNN::NeuronGroup
//------------------------------------------------------------------------
namespace GeNN
{
class GENN_EXPORT NeuronGroup
{
public:
    NeuronGroup(const NeuronGroup&) = delete;
    NeuronGroup() = delete;

    //------------------------------------------------------------------------
    // Public methods
    //------------------------------------------------------------------------
    //! Set whether zero-copy memory (if available) should be   
    //! used for spike and spike-like event recording.
    /*! This is ignored for simulations on hardware with a single memory space */
    void setRecordingZeroCopyEnabled(bool enabled) { m_RecordingZeroCopyEnabled = enabled; }

    //! Set location of this neuron group's output spikes.
    /*! This is ignored for simulations on hardware with a single memory space */
    void setSpikeLocation(VarLocation loc) { m_SpikeLocation = loc; }

     //! Set location of this neuron group's output spike events.
     /*! This is ignored for simulations on hardware with a single memory space */
    void setSpikeEventLocation(VarLocation loc) { m_SpikeEventLocation = loc; }

    //! Set location of this neuron group's output spike times.
    /*! This is ignored for simulations on hardware with a single memory space */
    void setSpikeTimeLocation(VarLocation loc) { m_SpikeTimeLocation = loc; }
    
    //! Set location of this neuron group's previous output spike times.
    /*! This is ignored for simulations on hardware with a single memory space */
    void setPrevSpikeTimeLocation(VarLocation loc) { m_PrevSpikeTimeLocation = loc; }
    
    //! Set location of this neuron group's output spike-like-event times.
    /*! This is ignored for simulations on hardware with a single memory space */
    void setSpikeEventTimeLocation(VarLocation loc) { m_SpikeEventTimeLocation = loc; }
    
    //! Set location of this neuron group's previous output spike-like-event times.
    /*! This is ignored for simulations on hardware with a single memory space */
    void setPrevSpikeEventTimeLocation(VarLocation loc) { m_PrevSpikeEventTimeLocation = loc; }

    //! Set variable location of neuron model state variable.
    /*! This is ignored for simulations on hardware with a single memory space */
    void setVarLocation(const std::string &varName, VarLocation loc);

    //! Set location of neuron model extra global parameter.
    /*! This is ignored for simulations on hardware with a single memory space. */
    void setExtraGlobalParamLocation(const std::string &paramName, VarLocation loc);

    //! Set whether parameter is dynamic or not i.e. it can be changed at runtime
    void setParamDynamic(const std::string &paramName, bool dynamic = true);

    //! Enables and disable spike recording for this population
    void setSpikeRecordingEnabled(bool enabled) { m_SpikeRecordingEnabled = enabled; }
    
    //! Enables and disable spike event recording for this population
    void setSpikeEventRecordingEnabled(bool enabled) { m_SpikeEventRecordingEnabled = enabled; }

    //------------------------------------------------------------------------
    // Public const methods
    //------------------------------------------------------------------------
    const std::string &getName() const{ return m_Name; }

    //! Gets number of neurons in group
    unsigned int getNumNeurons() const{ return m_NumNeurons; }

    //! Gets the neuron model used by this group
    const NeuronModels::Base *getModel() const{ return m_Model; }

    const auto &getParams() const{ return m_Params; }
    const auto &getVarInitialisers() const{ return m_VarInitialisers; }

    bool isSpikeTimeRequired() const;
    bool isPrevSpikeTimeRequired() const;
    bool isSpikeEventTimeRequired() const;
    bool isPrevSpikeEventTimeRequired() const;
    bool isTrueSpikeRequired() const;
    bool isSpikeEventRequired() const;

    unsigned int getNumDelaySlots() const{ return m_NumDelaySlots; }
    bool isDelayRequired() const{ return (m_NumDelaySlots > 1); }
    bool isZeroCopyEnabled() const;
    
    //! Get whether zero-copy memory (if available) should 
    //! be used for spike and spike-like event recording
    bool isRecordingZeroCopyEnabled() const { return m_RecordingZeroCopyEnabled; }
    
    //! Get location of this neuron group's output spikes
    VarLocation getSpikeLocation() const{ return m_SpikeLocation; }

    //! Get location of this neuron group's output spike events
    VarLocation getSpikeEventLocation() const{ return m_SpikeEventLocation; }

    //! Get location of this neuron group's output spike times
    VarLocation getSpikeTimeLocation() const{ return m_SpikeTimeLocation; }

    //! Get location of this neuron group's previous output spike times
    VarLocation getPrevSpikeTimeLocation() const { return m_PrevSpikeTimeLocation; }

    //! Get location of this neuron group's output spike-like-event times
    VarLocation getSpikeEventTimeLocation() const { return m_SpikeEventTimeLocation;  }

    //! Get location of this neuron group's previous output spike-like-event times
    VarLocation getPrevSpikeEventTimeLocation() const { return m_PrevSpikeEventTimeLocation; }

    //! Get location of neuron model state variable by name
    VarLocation getVarLocation(const std::string &varName) const { return m_VarLocation.get(varName); }

    //! Get location of neuron model extra global parameter by name
    VarLocation getExtraGlobalParamLocation(const std::string &paramName) const { return m_ExtraGlobalParamLocation.get(paramName); }

    //! Is parameter dynamic i.e. it can be changed at runtime
    bool isParamDynamic(const std::string &paramName) const{ return m_DynamicParams.get(paramName); }

    //! Is spike recording enabled for this population?
    bool isSpikeRecordingEnabled() const { return m_SpikeRecordingEnabled; }

    //! Is spike event recording enabled for this population?
    bool isSpikeEventRecordingEnabled() const { return m_SpikeEventRecordingEnabled; }

protected:
    NeuronGroup(const std::string &name, int numNeurons, const NeuronModels::Base *neuronModel,
                const std::map<std::string, Type::NumericValue> &params, const std::map<std::string, InitVarSnippet::Init> &varInitialisers,
                VarLocation defaultVarLocation, VarLocation defaultExtraGlobalParamLocation);

    //------------------------------------------------------------------------
    // Protected methods
    //------------------------------------------------------------------------
    //! Checks delay slots currently provided by the neuron group against a required delay and extends if required
    void checkNumDelaySlots(unsigned int requiredDelay);
    
    // Set a variable as requiring queueing
    void setVarQueueRequired(const std::string &varName){ m_VarQueueRequired.insert(varName); }

    void setSpikeQueueRequired(){ m_SpikeQueueRequired = true; }
    void setSpikeEventQueueRequired(){ m_SpikeEventQueueRequired = true; }

    void addInSyn(SynapseGroupInternal *synapseGroup){ m_InSyn.push_back(synapseGroup); }
    void addOutSyn(SynapseGroupInternal *synapseGroup){ m_OutSyn.push_back(synapseGroup); }

    void finalise(double dt);

    //! Fuse incoming postsynaptic models
    void fusePrePostSynapses(bool fusePSM, bool fusePrePostWUM);

    //! add input current source
    void injectCurrent(CurrentSourceInternal *source);

    //------------------------------------------------------------------------
    // Protected const methods
    //------------------------------------------------------------------------
    //! Gets pointers to all synapse groups which provide input to this neuron group
    const auto &getInSyn() const{ return m_InSyn; }
    const auto &getFusedPSMInSyn() const{ return m_FusedPSMInSyn; }
    const auto &getFusedWUPostInSyn() const { return m_FusedWUPostInSyn; }

    //! Gets pointers to all synapse groups emanating from this neuron group
    const auto &getOutSyn() const{ return m_OutSyn; }
    const auto &getFusedWUPreOutSyn() const { return m_FusedWUPreOutSyn; }
    const auto &getFusedPreOutputOutSyn() const { return m_FusedPreOutputOutSyn; }

    const auto &getFusedSpike() const{ return m_FusedSpike; }
    const auto &getFusedSpikeEvent() const{ return m_FusedSpikeEvent; }
    
    //! Does this neuron group require an RNG to simulate?
    bool isSimRNGRequired() const;

    //! Does this neuron group require an RNG for it's init code?
    bool isInitRNGRequired() const;

    //! Does this neuron group require any sort of recording?
    bool isRecordingEnabled() const;

    //! Does this neuron group require any variables initializing?
    /*! Because it occurs in the same kernel, this includes current source variables;
        postsynaptic model variables and postsynaptic weight update variables 
        from incoming synapse groups; and presynaptic weight update variables from outgoing synapse groups */
    bool isVarInitRequired() const;

    //! Gets pointers to all current sources which provide input to this neuron group
    const auto &getCurrentSources() const { return m_CurrentSourceGroups; }

    const auto &getDerivedParams() const{ return m_DerivedParams; }

    //! Helper to get vector of incoming synapse groups which have postsynaptic update code
    std::vector<SynapseGroupInternal*> getFusedInSynWithPostCode() const;

    //! Helper to get vector of outgoing synapse groups which have presynaptic update code
    std::vector<SynapseGroupInternal*> getFusedOutSynWithPreCode() const;

    //! Helper to get vector of incoming synapse groups which have postsynaptic variables
    std::vector<SynapseGroupInternal *> getFusedInSynWithPostVars() const;

    //! Helper to get vector of outgoing synapse groups which have presynaptic variables
    std::vector<SynapseGroupInternal *> getFusedOutSynWithPreVars() const;

    //! Tokens produced by scanner from simc ode
    const auto &getSimCodeTokens() const { return m_SimCodeTokens; }

    //! Tokens produced by scanner from threshold condition code
    const auto &getThresholdConditionCodeTokens() const { return m_ThresholdConditionCodeTokens; }
    
    //! Tokens produced by scanner from reset code
    const auto &getResetCodeTokens() const { return m_ResetCodeTokens; }

    bool isVarQueueRequired(const std::string &var) const{ return (m_VarQueueRequired.count(var) == 0) ? false : true; }

    bool isSpikeQueueRequired() const{ return m_SpikeQueueRequired; }

    bool isSpikeEventQueueRequired() const{ return m_SpikeEventQueueRequired; }

    bool isSpikeDelayRequired() const{ return isDelayRequired() && isSpikeQueueRequired(); }
    bool isSpikeEventDelayRequired() const{ return isDelayRequired() && isSpikeEventQueueRequired(); }

    //! Updates hash with neuron group
    /*! \note this can only be called after model is finalized */
    boost::uuids::detail::sha1::digest_type getHashDigest() const;

    //! Updates hash with neuron group initialisation
    /*! \note this can only be called after model is finalized */
    boost::uuids::detail::sha1::digest_type getInitHashDigest() const;

    boost::uuids::detail::sha1::digest_type getSpikeQueueUpdateHashDigest() const;

    boost::uuids::detail::sha1::digest_type getPrevSpikeTimeUpdateHashDigest() const;

    boost::uuids::detail::sha1::digest_type getVarLocationHashDigest() const;

private:
    //------------------------------------------------------------------------
    // Members
    //------------------------------------------------------------------------
    //! Unique name of neuron group
    std::string m_Name;

    //! Number of neurons in group
    unsigned int m_NumNeurons;

    //! Neuron model used for this group
    const NeuronModels::Base *m_Model;

    //! Values of neuron parameters
    std::map<std::string, Type::NumericValue> m_Params;
    std::map<std::string, Type::NumericValue> m_DerivedParams;
    std::map<std::string, InitVarSnippet::Init> m_VarInitialisers;
    std::vector<SynapseGroupInternal*> m_InSyn;
    std::vector<SynapseGroupInternal*> m_OutSyn;
    std::vector<SynapseGroupInternal*> m_FusedPSMInSyn;
    std::vector<SynapseGroupInternal*> m_FusedSpike;
    std::vector<SynapseGroupInternal*> m_FusedSpikeEvent;
    std::vector<SynapseGroupInternal*> m_FusedWUPostInSyn;
    std::vector<SynapseGroupInternal*> m_FusedWUPreOutSyn;
    std::vector<SynapseGroupInternal*> m_FusedPreOutputOutSyn;

    //! Number of delay slots this group required.
    /*! This is the maximum required by any incoming or outgoing synapse group */
    unsigned int m_NumDelaySlots;

    std::vector<CurrentSourceInternal*> m_CurrentSourceGroups;

    //! Set of names of variable requiring queueing
    std::set<std::string> m_VarQueueRequired;

    //! Is queueing required for spikes?
    bool m_SpikeQueueRequired;

    //! Is queueing required for spike-like events?
    bool m_SpikeEventQueueRequired;
    
    //! Should zero-copy memory (if available) be used 
    //! for spike and spike-like event recording?
    bool m_RecordingZeroCopyEnabled;
    
    //! Location of spikes from neuron group.
    /*! This is ignored for simulations on hardware with a single memory space */
    VarLocation m_SpikeLocation;

    //! Location of spike-like events from neuron group.
    /*! This is ignored for simulations on hardware with a single memory space */
    VarLocation m_SpikeEventLocation;

    //! Location of spike times from neuron group.
    /*! This is ignored for simulations on hardware with a single memory space */
    VarLocation m_SpikeTimeLocation;

    //! Location of previous spike times.
    /*! This is ignored for simulations on hardware with a single memory space */
    VarLocation m_PrevSpikeTimeLocation;

    //! Location of spike-like-event times.
    /*! This is ignored for simulations on hardware with a single memory space */
    VarLocation m_SpikeEventTimeLocation;

    //! Location of previous spike-like-event times.
    /*! This is ignored for simulations on hardware with a single memory space */
    VarLocation m_PrevSpikeEventTimeLocation;
    
    //! Location of individual state variables.
    /*! This is ignored for simulations on hardware with a single memory space */
    LocationContainer m_VarLocation;

    //! Location of extra global parameters.
    /*! This is ignored for simulations on hardware with a single memory space */
    LocationContainer m_ExtraGlobalParamLocation;

    //! Data structure tracking whether parameters are dynamic or not
    Snippet::DynamicParameterContainer m_DynamicParams;

    //! Tokens produced by scanner from simc ode
    std::vector<Transpiler::Token> m_SimCodeTokens;

    //! Tokens produced by scanner from threshold condition code
    std::vector<Transpiler::Token> m_ThresholdConditionCodeTokens;
    
    //! Tokens produced by scanner from reset code
    std::vector<Transpiler::Token> m_ResetCodeTokens;
    
    //! Is spike recording enabled for this population?
    bool m_SpikeRecordingEnabled;

    //! Is spike event recording enabled?
    bool m_SpikeEventRecordingEnabled;
};
}   // namespace GeNN
