#pragma once

// Standard includes
#include <string>
#include <vector>

// GeNN includes
#include "gennExport.h"
#include "gennUtils.h"
#include "customConnectivityUpdateModels.h"
#include "varLocation.h"

//------------------------------------------------------------------------
// GeNN::CustomConnectivityUpdate
//------------------------------------------------------------------------
namespace GeNN
{
class GENN_EXPORT CustomConnectivityUpdate
{
public:
    CustomConnectivityUpdate(const CustomConnectivityUpdate &) = delete;
    CustomConnectivityUpdate() = delete;

    //------------------------------------------------------------------------
    // Public methods
    //------------------------------------------------------------------------
    //! Set location of synaptic state variable
    /*! This is ignored for simulations on hardware with a single memory space */
    void setVarLocation(const std::string &varName, VarLocation loc);

    //! Set location of presynaptic state variable
    /*! This is ignored for simulations on hardware with a single memory space */
    void setPreVarLocation(const std::string &varName, VarLocation loc);

    //! Set location of postsynaptic state variable
    /*! This is ignored for simulations on hardware with a single memory space */
    void setPostVarLocation(const std::string &varName, VarLocation loc);

    //! Set location of extra global parameter
    /*! This is ignored for simulations on hardware with a single memory space. */
    void setExtraGlobalParamLocation(const std::string &paramName, VarLocation loc);

    //! Set whether parameter is dynamic or not i.e. it can be changed at runtime
    void setParamDynamic(const std::string &paramName, bool dynamic = true);

    //------------------------------------------------------------------------
    // Public const methods
    //------------------------------------------------------------------------
    const std::string &getName() const { return m_Name; }
    const std::string &getUpdateGroupName() const { return m_UpdateGroupName; }

    //! Gets the custom connectivity update model used by this group
    const CustomConnectivityUpdateModels::Base *getModel() const { return m_Model; }

    const std::unordered_map<std::string, Type::NumericValue> &getParams() const { return m_Params; }
    const std::unordered_map<std::string, InitVarSnippet::Init> &getVarInitialisers() const { return m_VarInitialisers; }
    const std::unordered_map<std::string, InitVarSnippet::Init> &getPreVarInitialisers() const { return m_PreVarInitialisers; }
    const std::unordered_map<std::string, InitVarSnippet::Init> &getPostVarInitialisers() const { return m_PostVarInitialisers; }

    const std::unordered_map<std::string, Models::WUVarReference> &getVarReferences() const{ return m_VarReferences;  }
    const std::unordered_map<std::string, Models::VarReference> &getPreVarReferences() const{ return m_PreVarReferences;  }
    const std::unordered_map<std::string, Models::VarReference> &getPostVarReferences() const{ return m_PostVarReferences;  }

    const std::unordered_map<std::string, Models::EGPReference> &getEGPReferences() const{ return m_EGPReferences;  }

    //! Get variable location for synaptic state variable
    VarLocation getVarLocation(const std::string &varName) const{ return m_VarLocation.get(varName); }

    //! Get variable location for presynaptic state variable
    VarLocation getPreVarLocation(const std::string &varName) const{ return m_PreVarLocation.get(varName); }
    
    //! Get variable location for postsynaptic state variable
    VarLocation getPostVarLocation(const std::string &varName) const{ return m_PostVarLocation.get(varName); }

    //! Get location of neuron model extra global parameter by name
    VarLocation getExtraGlobalParamLocation(const std::string &paramName) const{ return m_ExtraGlobalParamLocation.get(paramName); }

    //! Is parameter dynamic i.e. it can be changed at runtime
    bool isParamDynamic(const std::string &paramName) const{ return m_DynamicParams.get(paramName); }

    //! Is var init code required for any synaptic variables in this custom connectivity update group?
    bool isVarInitRequired() const;

    //! Is var init code required for any presynaptic variables in this custom connectivity update group?
    bool isPreVarInitRequired() const;

    //! Is var init code required for any postsynaptic variables in this custom connectivity update group?
    bool isPostVarInitRequired() const;

protected:
    CustomConnectivityUpdate(const std::string &name, const std::string &updateGroupName, SynapseGroupInternal *synapseGroup,
                             const CustomConnectivityUpdateModels::Base *customConnectivityUpdateModel,
                             const std::unordered_map<std::string, Type::NumericValue> &params, const std::unordered_map<std::string, InitVarSnippet::Init> &varInitialisers,
                             const std::unordered_map<std::string, InitVarSnippet::Init> &preVarInitialisers, const std::unordered_map<std::string, InitVarSnippet::Init> &postVarInitialisers,
                             const std::unordered_map<std::string, Models::WUVarReference> &varReferences, const std::unordered_map<std::string, Models::VarReference> &preVarReferences,
                             const std::unordered_map<std::string, Models::VarReference> &postVarReferences, const std::unordered_map<std::string, Models::EGPReference> &egpReferences,
                             VarLocation defaultVarLocation, VarLocation defaultExtraGlobalParamLocation);

    //------------------------------------------------------------------------
    // Protected methods
    //------------------------------------------------------------------------
    void finalise(double dt, unsigned int batchSize);

    //------------------------------------------------------------------------
    // Protected const methods
    //------------------------------------------------------------------------
    const std::unordered_map<std::string, Type::NumericValue> &getDerivedParams() const { return m_DerivedParams; }

    bool isZeroCopyEnabled() const;

    SynapseGroupInternal *getSynapseGroup() const { return m_SynapseGroup; }

    //! Get vector of group names and variables in synapse groups, custom updates and other 
    //! custom connectivity updates which are attached to the same sparse connectivity this 
    //! custom connectivty update will update and thus will need modifying when we add and remove synapses
    std::vector<Models::WUVarReference> getDependentVariables() const;

    //! Updates hash with custom update
    /*! NOTE: this can only be called after model is finalized */
    boost::uuids::detail::sha1::digest_type getHashDigest() const;

    //! Updates hash with custom update
    /*! NOTE: this can only be called after model is finalized */
    boost::uuids::detail::sha1::digest_type getInitHashDigest() const;

    boost::uuids::detail::sha1::digest_type getVarLocationHashDigest() const;

    const std::vector<Transpiler::Token> getRowUpdateCodeTokens() const{ return m_RowUpdateCodeTokens; }

    const std::vector<Transpiler::Token> getHostUpdateCodeTokens() const{ return m_HostUpdateCodeTokens; }

    const NeuronGroup *getPreDelayNeuronGroup() const { return m_PreDelayNeuronGroup; }
    
    const NeuronGroup *getPostDelayNeuronGroup() const { return m_PostDelayNeuronGroup; }

private:
    //------------------------------------------------------------------------
    // Private methods
    //------------------------------------------------------------------------
    NeuronGroup *getVarRefDelayGroup(const std::unordered_map<std::string, Models::VarReference> &varRefs, 
                                     const std::string &errorContext) const;
    
    //------------------------------------------------------------------------
    // Members
    //------------------------------------------------------------------------
    const std::string m_Name;
    const std::string m_UpdateGroupName;
    SynapseGroupInternal *m_SynapseGroup;

    const CustomConnectivityUpdateModels::Base *m_Model;
    const std::unordered_map<std::string, Type::NumericValue> m_Params;
    std::unordered_map<std::string, Type::NumericValue> m_DerivedParams;
    std::unordered_map<std::string, InitVarSnippet::Init> m_VarInitialisers;
    std::unordered_map<std::string, InitVarSnippet::Init> m_PreVarInitialisers;
    std::unordered_map<std::string, InitVarSnippet::Init> m_PostVarInitialisers;

    //! Location of individual state variables
    LocationContainer m_VarLocation;
    LocationContainer m_PreVarLocation;
    LocationContainer m_PostVarLocation;

    //! Location of extra global parameters
    LocationContainer m_ExtraGlobalParamLocation;

    //! Data structure tracking whether parameters are dynamic or not
    Snippet::DynamicParameterContainer m_DynamicParams;

    const std::unordered_map<std::string, Models::WUVarReference> m_VarReferences;
    const std::unordered_map<std::string, Models::VarReference> m_PreVarReferences;
    const std::unordered_map<std::string, Models::VarReference> m_PostVarReferences;
    
    std::unordered_map<std::string, Models::EGPReference> m_EGPReferences;

    const NeuronGroup *m_PreDelayNeuronGroup;
    const NeuronGroup *m_PostDelayNeuronGroup;

    //! Tokens produced by scanner from row update code
    std::vector<Transpiler::Token> m_RowUpdateCodeTokens;

    //! Tokens produced by scanner from host update code
    std::vector<Transpiler::Token> m_HostUpdateCodeTokens;
};
}   // namespace GeNN