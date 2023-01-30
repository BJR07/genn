#pragma once

// Standard C++ includes
#include <functional>
#include <unordered_map>
#include <variant>

// GeNN code generator includes
#include "code_generator/codeStream.h"

// GeNN transpiler includes
#include "transpiler/prettyPrinter.h"
#include "transpiler/token.h"
#include "transpiler/transpilerUtils.h"

//----------------------------------------------------------------------------
// GeNN::CodeGenerator::EnvironmentExternal
//----------------------------------------------------------------------------
namespace GeNN::CodeGenerator
{
class EnvironmentExternal : public Transpiler::PrettyPrinter::EnvironmentBase
{
    using EnvironmentBase = Transpiler::PrettyPrinter::EnvironmentBase;
public:
    EnvironmentExternal(EnvironmentBase &enclosing)
    :   m_Context(enclosing)
    {
    }
    
    EnvironmentExternal(CodeStream &os)
    :   m_Context(os)
    {
    }
    
    //------------------------------------------------------------------------
    // PrettyPrinter::EnvironmentBase virtuals
    //------------------------------------------------------------------------
    virtual std::string define(const Transpiler::Token&);
    
protected:
    //------------------------------------------------------------------------
    // Protected API
    //------------------------------------------------------------------------
    auto &getContext() const{ return m_Context; }
    
    CodeStream &getContextStream() const;
    
    std::string getContextName(const Transpiler::Token &name) const;

private:
    //------------------------------------------------------------------------
    // Members
    //------------------------------------------------------------------------
    std::variant<std::reference_wrapper<EnvironmentBase>, std::reference_wrapper<CodeStream>> m_Context;
};

//----------------------------------------------------------------------------
// GeNN::CodeGenerator::EnvironmentSubstitute
//----------------------------------------------------------------------------
//! Standard pretty printing environment simply allowing substitutions to be implemented
class EnvironmentSubstitute : public EnvironmentExternal
{
    using EnvironmentBase = Transpiler::PrettyPrinter::EnvironmentBase;
public:
    EnvironmentSubstitute(EnvironmentBase &enclosing) : EnvironmentExternal(enclosing){}
    EnvironmentSubstitute(CodeStream &os) : EnvironmentExternal(os){}
    
    //------------------------------------------------------------------------
    // PrettyPrinter::EnvironmentBase virtuals
    //------------------------------------------------------------------------
    virtual std::string getName(const Transpiler::Token &name) final;
    
    virtual CodeStream &getStream() final
    {
        return getContextStream();
    }
    
    //------------------------------------------------------------------------
    // Public API
    //------------------------------------------------------------------------
    void addSubstitution(const std::string &source, const std::string &destination);
    
private:
    //------------------------------------------------------------------------
    // Members
    //------------------------------------------------------------------------
    std::unordered_map<std::string, std::string> m_VarSubstitutions;
};

//----------------------------------------------------------------------------
// GeNN::CodeGenerator::EnvironmentLocalVarCache
//----------------------------------------------------------------------------
//! Pretty printing environment which caches used variables in local variables
template<typename A, typename G>
class EnvironmentLocalVarCache : public EnvironmentExternal
{
    //! Type of a single definition
    typedef typename std::invoke_result_t<decltype(&A::getDefs), A>::value_type DefType;
    
    //! Type of a single initialiser
    typedef typename std::remove_reference_t<std::invoke_result_t<decltype(&A::getInitialisers), A>>::mapped_type InitialiserType;
    
    //! Function used to provide index strings based on initialiser and access type
    typedef std::function<std::string(InitialiserType, decltype(DefType::access))> GetIndexFn;    

public:
    EnvironmentLocalVarCache(const G &group, Transpiler::PrettyPrinter::EnvironmentBase &enclosing, GetIndexFn getIndex, const std::string &localPrefix = "l")
    :   EnvironmentExternal(enclosing), m_Group(group), m_Contents(m_ContentsStream), m_LocalPrefix(localPrefix), m_GetIndex(getIndex)
    {
        // Add name of each definition to map, initially with value set to value
        const auto defs = A(m_Group).getDefs();
        std::transform(defs.cbegin(), defs.cend(), std::inserter(m_VariablesReferenced, m_VariablesReferenced.end()),
                       [](const auto &v){ return std::make_pair(v.name, false); });
    }
    
    EnvironmentLocalVarCache(const G &group, CodeStream &os, GetIndexFn getIndex, const std::string &localPrefix = "l")
    :   EnvironmentExternal(os), m_Group(group), m_Contents(m_ContentsStream), m_LocalPrefix(localPrefix), m_GetIndex(getIndex)
    {
        // Add name of each definition to map, initially with value set to value
        const auto defs = A(m_Group).getDefs();
        std::transform(defs.cbegin(), defs.cend(), std::inserter(m_VariablesReferenced, m_VariablesReferenced.end()),
                       [](const auto &v){ return std::make_pair(v.name, false); });
    }
    
    ~EnvironmentLocalVarCache()
    {
        A adapter(m_Group);
        
        // Copy definitions which have been referenced into new vector
        const auto defs = adapter.getDefs();
        std::remove_const_t<decltype(defs)> referencedVars;
        std::copy_if(defs.cbegin(), defs.cend(), std::back_inserter(referencedVars),
                     [this](const auto &v){ return m_VariablesReferenced.at(v.name); });
        
        // Loop through referenced variables
        const auto &initialisers = adapter.getInitialisers();
        for(const auto &v : referencedVars) {
            if(v.access & VarAccessMode::READ_ONLY) {
                getContextStream() << "const ";
            }
            getContextStream() << v.type->getName() << " " << m_LocalPrefix << v.name;
            
            // If this isn't a reduction, read value from memory
            // **NOTE** by not initialising these variables for reductions, 
            // compilers SHOULD emit a warning if user code doesn't set it to something
            if(!(v.access & VarAccessModeAttribute::REDUCE)) {
                getContextStream() << " = group->" << v.name << "[" << m_GetIndex(initialisers.at(v.name), v.access) << "]";
            }
            getContextStream() << ";" << std::endl;
        }
        
        // Write contents to context stream
        getContextStream() << m_ContentsStream.str();
        
        // Loop through referenced variables again
        for(const auto &v : referencedVars) {
            // If variables are read-write
            if(v.access & VarAccessMode::READ_WRITE) {
                getContextStream() << "group->" << v.name << "[" << m_GetIndex(initialisers.at(v.name), v.access) << "]";
                getContextStream() << " = " << m_LocalPrefix << v.name << ";" << std::endl;
            }
        }
    }

    //------------------------------------------------------------------------
    // PrettyPrinter::EnvironmentBase virtuals
    //------------------------------------------------------------------------
    virtual std::string getName(const Transpiler::Token &name) final
    {
        // If variable with this name isn't found, try and get name from context
        auto var = m_VariablesReferenced.find(name.lexeme);
        if(var == m_VariablesReferenced.end()) {
            return getContextName(name);
        }
        // Otherwise
        else {
            // Set flag to indicate that variable has been referenced
            var->second = true;
            
            // Add local prefix to variable name
            return m_LocalPrefix + name.lexeme;
        }
    }
    
    virtual CodeStream &getStream() final
    {
        return m_Contents;
    }
    
private:
    //------------------------------------------------------------------------
    // Members
    //------------------------------------------------------------------------
    const G &m_Group;
    std::ostringstream m_ContentsStream;
    CodeStream m_Contents;
    const std::string m_LocalPrefix;
    const GetIndexFn m_GetIndex;
    std::unordered_map<std::string, bool> m_VariablesReferenced;
};
}   // namespace GeNN::CodeGenerator
