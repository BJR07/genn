/*
  This file contains docstrings for use in the Python bindings.
  Do not edit! They were automatically extracted by pybind11_mkdoc.
 */

#define __EXPAND(x)                                      x
#define __COUNT(_1, _2, _3, _4, _5, _6, _7, COUNT, ...)  COUNT
#define __VA_SIZE(...)                                   __EXPAND(__COUNT(__VA_ARGS__, 7, 6, 5, 4, 3, 2, 1))
#define __CAT1(a, b)                                     a ## b
#define __CAT2(a, b)                                     __CAT1(a, b)
#define __DOC1(n1)                                       __doc_##n1
#define __DOC2(n1, n2)                                   __doc_##n1##_##n2
#define __DOC3(n1, n2, n3)                               __doc_##n1##_##n2##_##n3
#define __DOC4(n1, n2, n3, n4)                           __doc_##n1##_##n2##_##n3##_##n4
#define __DOC5(n1, n2, n3, n4, n5)                       __doc_##n1##_##n2##_##n3##_##n4##_##n5
#define __DOC6(n1, n2, n3, n4, n5, n6)                   __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6
#define __DOC7(n1, n2, n3, n4, n5, n6, n7)               __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6##_##n7
#define DOC(...)                                         __EXPAND(__EXPAND(__CAT2(__DOC, __VA_SIZE(__VA_ARGS__)))(__VA_ARGS__))

#if defined(__GNUG__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif


static const char *__doc_CodeGenerator_BackendBase = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_AtomicOperation = R"doc(What atomic operation is required)doc";

static const char *__doc_CodeGenerator_BackendBase_AtomicOperation_ADD = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_AtomicOperation_OR = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_BackendBase = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_ReductionTarget = R"doc(Simple struct to hold reduction targets)doc";

static const char *__doc_CodeGenerator_BackendBase_ReductionTarget_access = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_ReductionTarget_index = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_ReductionTarget_name = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_ReductionTarget_type = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildSizeEnvironment = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildSizeEnvironment_2 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildSizeEnvironment_3 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildSizeEnvironment_4 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildSizeEnvironment_5 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_2 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_3 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_4 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_5 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_6 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_7 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_8 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_9 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_10 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_11 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_12 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_13 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_14 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_15 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_16 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_17 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_18 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_19 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_20 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_21 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_buildStandardEnvironment_22 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_createArray =
R"doc(Create backend-specific array object


$Parameter ``type``:

         data type of array


$Parameter ``count``:

        number of elements in array, if non-zero will allocate


$Parameter ``location``:

     location of array e.g. device-only)doc";

static const char *__doc_CodeGenerator_BackendBase_createPopulationRNG =
R"doc(Create array of backend-specific population RNGs (if they are initialised on host this will occur here)


$Parameter ``count``:

        number of RNGs required)doc";

static const char *__doc_CodeGenerator_BackendBase_createState =
R"doc(Create backend-specific runtime state object


$Parameter ``runtime``:

  runtime object)doc";

static const char *__doc_CodeGenerator_BackendBase_genAllocateMemPreamble =
R"doc(Allocate memory is the first function in GeNN generated code called by usercode and it should only ever be called once.
Therefore it's a good place for any global initialisation. This function generates a 'preamble' to this function.)doc";

static const char *__doc_CodeGenerator_BackendBase_genAssert = R"doc(On backends which support it, generate a runtime assert)doc";

static const char *__doc_CodeGenerator_BackendBase_genCustomUpdate =
R"doc(Generate platform-specific functions to perform custom updates


$Parameter ``os``:

                           CodeStream to write function to


$Parameter ``modelMerged``:

                  merged model to generate code for


$Parameter ``preambleHandler``:

              callback to write functions for pushing extra-global parameters)doc";

static const char *__doc_CodeGenerator_BackendBase_genDefinitionsPreamble =
R"doc(Definitions is the usercode-facing header file for the generated code. This function generates a 'preamble' to this header file.
This will be included from a standard C++ compiler so shouldn't include any platform-specific types or headers)doc";

static const char *__doc_CodeGenerator_BackendBase_genDenseSynapseVariableRowInit = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_genFreeMemPreamble =
R"doc(Free memory is called by usercode to free all memory allocatd by GeNN and should only ever be called once.
This function generates a 'preamble' to this function, for example to free backend-specific objects)doc";

static const char *__doc_CodeGenerator_BackendBase_genGlobalDeviceRNG =
R"doc(Generate a single RNG instance
On single-threaded platforms this can be a standard RNG like M.T. but, on parallel platforms, it is likely to be a counter-based RNG)doc";

static const char *__doc_CodeGenerator_BackendBase_genInit =
R"doc(Generate platform-specific function to initialise model


$Parameter ``os``:

                           CodeStream to write function to


$Parameter ``modelMerged``:

                  merged model to generate code for


$Parameter ``preambleHandler``:

              callback to write functions for pushing extra-global parameters)doc";

static const char *__doc_CodeGenerator_BackendBase_genInitReductionTargets =
R"doc(Helper function to generate initialisation code for any reduction operations carried out be custom update group.
Returns vector of ReductionTarget structs, providing all information to write back reduction results to memory)doc";

static const char *__doc_CodeGenerator_BackendBase_genInitReductionTargets_2 =
R"doc(Helper function to generate initialisation code for any reduction operations carried out be custom weight update group.
//! Returns vector of ReductionTarget structs, providing all information to write back reduction results to memory)doc";

static const char *__doc_CodeGenerator_BackendBase_genInitReductionTargets_3 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_genKernelCustomUpdateVariableInit = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_genKernelSynapseVariableInit = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_genLazyVariableDynamicAllocation = R"doc(Generate code to allocate variable with a size known at runtime)doc";

static const char *__doc_CodeGenerator_BackendBase_genLazyVariableDynamicPull = R"doc(Generate code for pulling a variable with a size known at runtime from the 'device')doc";

static const char *__doc_CodeGenerator_BackendBase_genLazyVariableDynamicPush = R"doc(Generate code for pushing a variable with a size known at runtime to the 'device')doc";

static const char *__doc_CodeGenerator_BackendBase_genMSBuildCompileModule = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_genMSBuildConfigProperties =
R"doc(In MSBuild, 'properties' are used to configure global project settings e.g. whether the MSBuild project builds a static or dynamic library
This function can be used to add additional XML properties to this section.
see https://docs.microsoft.com/en-us/visualstudio/msbuild/msbuild-properties for more information.)doc";

static const char *__doc_CodeGenerator_BackendBase_genMSBuildImportProps = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_genMSBuildImportTarget = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_genMSBuildItemDefinitions =
R"doc(In MSBuild, the 'item definitions' are used to override the default properties of 'items' such as ``<ClCompile>`` or ``<Link>``.
This function should generate XML to correctly configure the 'items' required to build the generated code, taking into account ``$(Configuration)`` etc.
see https://docs.microsoft.com/en-us/visualstudio/msbuild/msbuild-items#item-definitions for more information.)doc";

static const char *__doc_CodeGenerator_BackendBase_genMakefileCompileRule =
R"doc(The GNU make build system uses 'pattern rules' (https://www.gnu.org/software/make/manual/html_node/Pattern-Intro.html) to build backend modules into objects.
This function should generate a GNU make pattern rule capable of building each module (i.e. compiling .cc file $< into .o file $@).)doc";

static const char *__doc_CodeGenerator_BackendBase_genMakefileLinkRule =
R"doc(The GNU make build system will populate a variable called ``$(OBJECTS)`` with a list of objects to link.
This function should generate a GNU make rule to build these objects into a shared library.)doc";

static const char *__doc_CodeGenerator_BackendBase_genMakefilePreamble = R"doc(This function can be used to generate a preamble for the GNU makefile used to build)doc";

static const char *__doc_CodeGenerator_BackendBase_genMergedDynamicVariablePush = R"doc(Generate code for pushing a new pointer to a dynamic variable into the merged group structure on 'device')doc";

static const char *__doc_CodeGenerator_BackendBase_genNeuronUpdate =
R"doc(Generate platform-specific function to update the state of all neurons


$Parameter ``os``:

                       CodeStream to write function to


$Parameter ``modelMerged``:

              merged model to generate code for


$Parameter ``preambleHandler``:

          callback to write functions for pushing extra-global parameters)doc";

static const char *__doc_CodeGenerator_BackendBase_genPopVariableInit = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_genReturnFreeDeviceMemoryBytes = R"doc(Generate code to return amount of free 'device' memory in bytes)doc";

static const char *__doc_CodeGenerator_BackendBase_genRunnerPreamble = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_genSparseSynapseVariableRowInit = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_genStepTimeFinalisePreamble = R"doc(After all timestep logic is complete)doc";

static const char *__doc_CodeGenerator_BackendBase_genSynapseUpdate =
R"doc(Generate platform-specific function to update the state of all synapses


$Parameter ``os``:

                           CodeStream to write function to


$Parameter ``modelMerged``:

                  merged model to generate code for


$Parameter ``preambleHandler``:

              callback to write functions for pushing extra-global parameters)doc";

static const char *__doc_CodeGenerator_BackendBase_genTimer = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_genVariableInit = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_getAtomicOperation = R"doc(Get suitable atomic *lhsPointer += rhsValue or *lhsPointer |= rhsValue style operation)doc";

static const char *__doc_CodeGenerator_BackendBase_getDeviceMemoryBytes = R"doc(How many bytes of memory does 'device' have)doc";

static const char *__doc_CodeGenerator_BackendBase_getFilesToCopy =
R"doc(Get list of files to copy into generated code
Paths should be relative to share/genn/backends/)doc";

static const char *__doc_CodeGenerator_BackendBase_getHashDigest = R"doc(Get hash digest of this backends identification and the preferences it has been configured with)doc";

static const char *__doc_CodeGenerator_BackendBase_getMergedGroupFieldHostTypeName = R"doc(When generating function calls to push to merged groups, backend without equivalent of Unified Virtual Addressing e.g. OpenCL 1.2 may use different types on host)doc";

static const char *__doc_CodeGenerator_BackendBase_getMergedGroupMemorySpaces =
R"doc(Some backends will have additional small, fast, memory spaces for read-only data which might
Be well-suited to storing merged group structs. This method returns the prefix required to
Place arrays in these and their size in preferential order)doc";

static const char *__doc_CodeGenerator_BackendBase_getPointerBytes = R"doc(Get backend-specific pointer size in bytes)doc";

static const char *__doc_CodeGenerator_BackendBase_getPointerPrefix = R"doc(Different backends may have different or no pointer prefix (e.g. __global for OpenCL))doc";

static const char *__doc_CodeGenerator_BackendBase_getPreferences = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_getPreferences_2 = R"doc()doc";

static const char *__doc_CodeGenerator_BackendBase_getReductionInitialValue = R"doc(Get the initial value to start reduction operations from)doc";

static const char *__doc_CodeGenerator_BackendBase_getReductionOperation = R"doc(Generate a reduction operation to reduce value into reduction)doc";

static const char *__doc_CodeGenerator_BackendBase_getSynapseIndexType = R"doc(Get the type to use for synaptic indices within a merged synapse group)doc";

static const char *__doc_CodeGenerator_BackendBase_getSynapseIndexType_2 = R"doc(Get the type to use for synaptic indices within a merged custom weight update group)doc";

static const char *__doc_CodeGenerator_BackendBase_getSynapseIndexType_3 = R"doc(Get the type to use for synaptic indices within a merged custom connectivity update group)doc";

static const char *__doc_CodeGenerator_BackendBase_getSynapticMatrixRowStride = R"doc(Gets the stride used to access synaptic matrix rows, taking into account sparse data structure, padding etc)doc";

static const char *__doc_CodeGenerator_BackendBase_isArrayDeviceObjectRequired = R"doc(As well as host pointers, are device objects required?)doc";

static const char *__doc_CodeGenerator_BackendBase_isArrayHostObjectRequired = R"doc(As well as host pointers, are additional host objects required e.g. for buffers in OpenCL?)doc";

static const char *__doc_CodeGenerator_BackendBase_isGlobalDeviceRNGRequired = R"doc(Different backends use different RNGs for different things. Does this one require a global device RNG for the specified model?)doc";

static const char *__doc_CodeGenerator_BackendBase_isGlobalHostRNGRequired = R"doc(Different backends use different RNGs for different things. Does this one require a global host RNG for the specified model?)doc";

static const char *__doc_CodeGenerator_BackendBase_isHostReductionRequired = R"doc(Backends which support batch-parallelism might require an additional host reduction phase after reduction kernels)doc";

static const char *__doc_CodeGenerator_BackendBase_isPopulationRNGInitialisedOnDevice = R"doc(Different backends seed RNGs in different ways. Does this one initialise population RNGS on device?)doc";

static const char *__doc_CodeGenerator_BackendBase_isPostsynapticRemapRequired = R"doc(Different backends may implement synaptic plasticity differently. Does this one require a postsynaptic remapping data structure?)doc";

static const char *__doc_CodeGenerator_BackendBase_m_PointerBytes = R"doc(How large is a device pointer? E.g. on some AMD devices this != sizeof(char*))doc";

static const char *__doc_CodeGenerator_BackendBase_m_Preferences = R"doc(Preferences)doc";

static const char *__doc_CodeGenerator_BackendBase_setPointerBytes = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_BackendCUDAHIP = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genAllocateMemPreamble = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genAssert = R"doc(On backends which support it, generate a runtime assert)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genCustomUpdate = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genDefinitionsPreamble = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genDefinitionsPreambleInternal = R"doc(Generate HIP/CUDA specific bits of definitions preamble)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genFreeMemPreamble = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genGlobalDeviceRNG =
R"doc(Generate a single RNG instance
On single-threaded platforms this can be a standard RNG like M.T. but, on parallel platforms, it is likely to be a counter-based RNG)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genGlobalRNGSkipAhead = R"doc(Generate code to skip ahead local copy of global RNG)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genInit = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genKernelDimensions = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genLazyVariableDynamicPull = R"doc(Generate code for pulling a variable with a size known at runtime from the 'device')doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genLazyVariableDynamicPush = R"doc(Generate code for pushing a variable with a size known at runtime to the 'device')doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genMergedDynamicVariablePush = R"doc(Generate code for pushing a new pointer to a dynamic variable into the merged group structure on 'device')doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genMergedStructArrayPush = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genNCCLReduction = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genNeuronUpdate = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genPopulationRNGInit = R"doc(For SIMT backends which initialize RNGs on device, initialize population RNG with specified seed and sequence)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genPopulationRNGPostamble =
R"doc(If required, generate a postamble for population RNG
For example, in OpenCL, this is used to write local RNG state back to global memory)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genPopulationRNGPreamble = R"doc(Generate a preamble to add substitution name for population RNG)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genReturnFreeDeviceMemoryBytes = R"doc(Generate code to return amount of free 'device' memory in bytes)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genRunnerPreamble = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genSharedMemBarrier = R"doc(Generate a shared memory barrier)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genStepTimeFinalisePreamble = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genSynapseUpdate = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genTimer = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_genWarpReduction = R"doc(Generate a warp reduction across getNumLanes lanes into lane 0)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getBlockID = R"doc(Get the ID of the current thread block)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getCCLPrefix = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getCLZ = R"doc(Get the name of the count-leading-zeros function)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getChosenDeviceSafeConstMemBytes = R"doc(Get the safe amount of constant cache we can use)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getMergedGroupFieldHostTypeName = R"doc(When generating function calls to push to merged groups, backend without equivalent of Unified Virtual Addressing e.g. OpenCL 1.2 may use different types on host)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getMergedGroupMemorySpaces =
R"doc(Some backends will have additional small, fast, memory spaces for read-only data which might
Be well-suited to storing merged group structs. This method returns the prefix required to
Place arrays in these and their size in preferential order)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getNCCLReductionType = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getNCCLType = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getRNGFunctions = R"doc(Get library of RNG functions to use)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getRandPrefix = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getRuntimePrefix = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getSharedPrefix = R"doc(Get the prefix to use for shared memory variables)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_getThreadID = R"doc(Get the ID of the current thread within the threadblock)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_isArrayDeviceObjectRequired = R"doc(As well as host pointers, are device objects required?)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_isArrayHostObjectRequired = R"doc(As well as host pointers, are additional host objects required e.g. for buffers in OpenCL?)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_isHostReductionRequired = R"doc(Backends which support batch-parallelism might require an additional host reduction phase after reduction kernels)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_isPopulationRNGInitialisedOnDevice = R"doc(Different backends seed RNGs in different ways. Does this one initialise population RNGS on device?)doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_m_CCLPrefix = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_m_RandPrefix = R"doc()doc";

static const char *__doc_CodeGenerator_BackendCUDAHIP_m_RuntimePrefix = R"doc()doc";

static const char *__doc_CodeGenerator_CustomConnectivityRemapUpdateGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomConnectivityUpdateGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomConnectivityUpdatePostInitGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomConnectivityUpdatePreInitGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomConnectivityUpdateSparseInitGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomUpdateGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomUpdateHostReductionGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomUpdateInitGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomUpdateTransposeWUGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomUpdateWUGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomWUUpdateHostReductionGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomWUUpdateInitGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_CustomWUUpdateSparseInitGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_EnvironmentExternalBase = R"doc()doc";

static const char *__doc_CodeGenerator_EnvironmentGroupMergedField = R"doc()doc";

static const char *__doc_CodeGenerator_GroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_ModelSpecMerged = R"doc()doc";

static const char *__doc_CodeGenerator_NeuronInitGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_NeuronPrevSpikeTimeUpdateGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_NeuronSpikeQueueUpdateGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_NeuronUpdateGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_PostsynapticUpdateGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_PreferencesBase = R"doc(Base class for backend preferences - can be accessed via a global in 'classic' C++ code generator)doc";

static const char *__doc_CodeGenerator_PreferencesBase_backendLogLevel = R"doc(Logging level to use for backend)doc";

static const char *__doc_CodeGenerator_PreferencesBase_codeGeneratorLogLevel = R"doc(Logging level to use for code generation)doc";

static const char *__doc_CodeGenerator_PreferencesBase_debugCode = R"doc(Generate code with debug symbols)doc";

static const char *__doc_CodeGenerator_PreferencesBase_gennLogLevel = R"doc(Logging level to use for model description)doc";

static const char *__doc_CodeGenerator_PreferencesBase_optimizeCode = R"doc(Generate speed-optimized code, potentially at the expense of floating-point accuracy)doc";

static const char *__doc_CodeGenerator_PreferencesBase_runtimeLogLevel = R"doc(Logging level to use for runtime)doc";

static const char *__doc_CodeGenerator_PreferencesBase_transpilerLogLevel = R"doc(Logging level to use for transpiler)doc";

static const char *__doc_CodeGenerator_PreferencesBase_updateHash = R"doc()doc";

static const char *__doc_CodeGenerator_PreferencesBase_userCxxFlagsGNU = R"doc(C++ compiler options to be used for building all host side code (used for unix based platforms))doc";

static const char *__doc_CodeGenerator_PreferencesBase_userNvccFlagsGNU = R"doc(NVCC compiler options they may want to use for all GPU code (used for unix based platforms))doc";

static const char *__doc_CodeGenerator_PreferencesCUDAHIP = R"doc()doc";

static const char *__doc_CodeGenerator_PreferencesCUDAHIP_enableNCCLReductions = R"doc(Generate corresponding NCCL batch reductions)doc";

static const char *__doc_CodeGenerator_PreferencesCUDAHIP_updateHash = R"doc()doc";

static const char *__doc_CodeGenerator_PresynapticUpdateGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_SynapseConnectivityInitGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_SynapseDendriticDelayUpdateGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_SynapseDynamicsGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_SynapseInitGroupMerged = R"doc()doc";

static const char *__doc_CodeGenerator_SynapseSparseInitGroupMerged = R"doc()doc";

static const char *__doc_CurrentSource = R"doc()doc";

static const char *__doc_CurrentSource_2 = R"doc()doc";

static const char *__doc_CurrentSourceEGPAdapter = R"doc()doc";

static const char *__doc_CurrentSourceEGPAdapter_CurrentSourceEGPAdapter = R"doc()doc";

static const char *__doc_CurrentSourceEGPAdapter_getDefs = R"doc()doc";

static const char *__doc_CurrentSourceEGPAdapter_getLoc = R"doc()doc";

static const char *__doc_CurrentSourceEGPAdapter_m_CS = R"doc()doc";

static const char *__doc_CurrentSourceInternal = R"doc()doc";

static const char *__doc_CurrentSourceInternal_2 = R"doc()doc";

static const char *__doc_CurrentSourceInternal_3 = R"doc()doc";

static const char *__doc_CurrentSourceInternal_CurrentSourceInternal = R"doc()doc";

static const char *__doc_CurrentSourceModels_Base = R"doc(Base class for all current source models)doc";

static const char *__doc_CurrentSourceModels_Base_getHashDigest = R"doc(Update hash from model)doc";

static const char *__doc_CurrentSourceModels_Base_getInjectionCode = R"doc(Gets the code that defines current injected each timestep)doc";

static const char *__doc_CurrentSourceModels_Base_getNeuronVarRefs = R"doc(Gets names and types of model variable references)doc";

static const char *__doc_CurrentSourceModels_Base_getVar = R"doc(Find the named variable)doc";

static const char *__doc_CurrentSourceModels_Base_getVars = R"doc(Gets model variables)doc";

static const char *__doc_CurrentSourceModels_Base_validate = R"doc(Validate names of parameters etc)doc";

static const char *__doc_CurrentSourceModels_DC =
R"doc(DC source
It has a single parameter:

- ``amp``    - amplitude of the current [nA])doc";

static const char *__doc_CurrentSourceModels_DC_getInjectionCode = R"doc()doc";

static const char *__doc_CurrentSourceModels_DC_getInstance = R"doc()doc";

static const char *__doc_CurrentSourceModels_DC_getParams = R"doc()doc";

static const char *__doc_CurrentSourceModels_GaussianNoise =
R"doc(Noisy current source with noise drawn from normal distribution
It has 2 parameters:

- ``mean``   - mean of the normal distribution [nA]
- ``sd``     - standard deviation of the normal distribution [nA])doc";

static const char *__doc_CurrentSourceModels_GaussianNoise_getInjectionCode = R"doc()doc";

static const char *__doc_CurrentSourceModels_GaussianNoise_getInstance = R"doc()doc";

static const char *__doc_CurrentSourceModels_GaussianNoise_getParams = R"doc()doc";

static const char *__doc_CurrentSourceModels_PoissonExp =
R"doc(Current source for injecting a current equivalent to a population of
Poisson spike sources, one-to-one connected with exponential synapses
It has 3 parameters:

- ``weight`` - synaptic weight of the Poisson spikes [nA]
- ``tauSyn`` - decay time constant [ms]
- ``rate``   - mean firing rate [Hz])doc";

static const char *__doc_CurrentSourceModels_PoissonExp_getDerivedParams = R"doc()doc";

static const char *__doc_CurrentSourceModels_PoissonExp_getInjectionCode = R"doc()doc";

static const char *__doc_CurrentSourceModels_PoissonExp_getInstance = R"doc()doc";

static const char *__doc_CurrentSourceModels_PoissonExp_getParams = R"doc()doc";

static const char *__doc_CurrentSourceModels_PoissonExp_getVars = R"doc()doc";

static const char *__doc_CurrentSourceNeuronVarRefAdapter = R"doc()doc";

static const char *__doc_CurrentSourceNeuronVarRefAdapter_CurrentSourceNeuronVarRefAdapter = R"doc()doc";

static const char *__doc_CurrentSourceNeuronVarRefAdapter_getDefs = R"doc()doc";

static const char *__doc_CurrentSourceNeuronVarRefAdapter_getInitialisers = R"doc()doc";

static const char *__doc_CurrentSourceNeuronVarRefAdapter_m_CS = R"doc()doc";

static const char *__doc_CurrentSourceVarAdapter = R"doc()doc";

static const char *__doc_CurrentSourceVarAdapter_CurrentSourceVarAdapter = R"doc()doc";

static const char *__doc_CurrentSourceVarAdapter_getDefs = R"doc()doc";

static const char *__doc_CurrentSourceVarAdapter_getInitialisers = R"doc()doc";

static const char *__doc_CurrentSourceVarAdapter_getLoc = R"doc()doc";

static const char *__doc_CurrentSourceVarAdapter_getNumVarDelaySlots = R"doc()doc";

static const char *__doc_CurrentSourceVarAdapter_getTarget = R"doc()doc";

static const char *__doc_CurrentSourceVarAdapter_getVarDims = R"doc()doc";

static const char *__doc_CurrentSourceVarAdapter_m_CS = R"doc()doc";

static const char *__doc_CurrentSource_CurrentSource = R"doc()doc";

static const char *__doc_CurrentSource_CurrentSource_2 = R"doc()doc";

static const char *__doc_CurrentSource_CurrentSource_3 = R"doc()doc";

static const char *__doc_CurrentSource_finalise = R"doc()doc";

static const char *__doc_CurrentSource_getDerivedParams = R"doc()doc";

static const char *__doc_CurrentSource_getExtraGlobalParamLocation = R"doc(Get location of neuron model extra global parameter by name)doc";

static const char *__doc_CurrentSource_getHashDigest =
R"doc(Updates hash with current source.

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_CurrentSource_getInitHashDigest =
R"doc(Updates hash with current source initialisation.

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_CurrentSource_getInjectionCodeTokens = R"doc()doc";

static const char *__doc_CurrentSource_getModel = R"doc(Gets the current source model used by this group)doc";

static const char *__doc_CurrentSource_getName = R"doc()doc";

static const char *__doc_CurrentSource_getNeuronVarReferences = R"doc()doc";

static const char *__doc_CurrentSource_getParams = R"doc()doc";

static const char *__doc_CurrentSource_getTargetVar =
R"doc(Get name of neuron input variable current source model will inject into.
This will either be 'Isyn' or the name of one of the target neuron's additional input variables.)doc";

static const char *__doc_CurrentSource_getTrgNeuronGroup = R"doc()doc";

static const char *__doc_CurrentSource_getVarInitialisers = R"doc()doc";

static const char *__doc_CurrentSource_getVarLocation = R"doc(Get variable location for current source model state variable)doc";

static const char *__doc_CurrentSource_getVarLocationHashDigest = R"doc()doc";

static const char *__doc_CurrentSource_isParamDynamic = R"doc(Is parameter dynamic i.e. it can be changed at runtime)doc";

static const char *__doc_CurrentSource_isVarInitRequired = R"doc(Is var init code required for any variables in this current source?)doc";

static const char *__doc_CurrentSource_isZeroCopyEnabled = R"doc()doc";

static const char *__doc_CurrentSource_m_DerivedParams = R"doc()doc";

static const char *__doc_CurrentSource_m_DynamicParams = R"doc(Data structure tracking whether parameters are dynamic or not)doc";

static const char *__doc_CurrentSource_m_ExtraGlobalParamLocation = R"doc(Location of extra global parameters)doc";

static const char *__doc_CurrentSource_m_InjectionCodeTokens = R"doc(Tokens produced by scanner from injection code)doc";

static const char *__doc_CurrentSource_m_Model = R"doc(Current source model used for this source)doc";

static const char *__doc_CurrentSource_m_Name = R"doc(Unique name of current source)doc";

static const char *__doc_CurrentSource_m_NeuronVarReferences = R"doc()doc";

static const char *__doc_CurrentSource_m_Params = R"doc(Values of current source parameters)doc";

static const char *__doc_CurrentSource_m_TargetVar =
R"doc(Name of neuron input variable current source will inject into.
This should either be 'Isyn' or the name of one of the target neuron's additional input variables.)doc";

static const char *__doc_CurrentSource_m_TrgNeuronGroup = R"doc()doc";

static const char *__doc_CurrentSource_m_VarInitialisers = R"doc(Initialisers for current source variables)doc";

static const char *__doc_CurrentSource_m_VarLocation =
R"doc(Location of individual state variables.
This is ignored for simulations on hardware with a single memory space.)doc";

static const char *__doc_CurrentSource_setExtraGlobalParamLocation =
R"doc(Set location of extra global parameter.
This is ignored for simulations on hardware with a single memory space.)doc";

static const char *__doc_CurrentSource_setParamDynamic = R"doc(Set whether parameter is dynamic or not i.e. it can be changed at runtime)doc";

static const char *__doc_CurrentSource_setTargetVar =
R"doc(Set name of neuron input variable current source model will inject into.
This should either be 'Isyn' or the name of one of the target neuron's additional input variables.)doc";

static const char *__doc_CurrentSource_setVarLocation =
R"doc(Set location of current source state variable.
This is ignored for simulations on hardware with a single memory space.)doc";

static const char *__doc_CustomConnectivityUpdate = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_2 = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateEGPAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateEGPAdapter_CustomConnectivityUpdateEGPAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateEGPAdapter_getDefs = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateEGPAdapter_getLoc = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateEGPAdapter_m_CU = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateInternal = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateInternal_2 = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateInternal_3 = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateInternal_4 = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateInternal_CustomConnectivityUpdateInternal = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateModels_Base = R"doc(Base class for all current source models)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getExtraGlobalParamRefs = R"doc(Gets names and types of model extra global parameter references)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getHashDigest = R"doc(Update hash from model)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getHostUpdateCode = R"doc(Gets the code that performs host update)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getPostVar = R"doc(Find the named postsynaptic variable)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getPostVarRefs = R"doc(Gets names and types (as strings) of postsynaptic variable references)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getPostVars =
R"doc(Gets names and types (as strings) of state variables that are common
across all synapses going to the same postsynaptic neuron)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getPreVar = R"doc(Find the named presynaptic variable)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getPreVarRefs = R"doc(Gets names and types (as strings) of presynaptic variable references)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getPreVars =
R"doc(Gets names and types (as strings) of state variables that are common
across all synapses coming from the same presynaptic neuron)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getRowUpdateCode = R"doc(Gets the code that performs a row-wise update)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getVar = R"doc(Find the named variable)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getVarRefs = R"doc(Gets names and types (as strings) of synapse variable references)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_getVars = R"doc(Gets model variables)doc";

static const char *__doc_CustomConnectivityUpdateModels_Base_validate = R"doc(Validate names of parameters etc)doc";

static const char *__doc_CustomConnectivityUpdatePostVarAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarAdapter_CustomConnectivityUpdatePostVarAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarAdapter_getDefs = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarAdapter_getInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarAdapter_getLoc = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarAdapter_getNumVarDelaySlots = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarAdapter_getTarget = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarAdapter_getVarDims = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarAdapter_m_CU = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarRefAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarRefAdapter_CustomConnectivityUpdatePostVarRefAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarRefAdapter_getDefs = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarRefAdapter_getInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePostVarRefAdapter_m_CU = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarAdapter_CustomConnectivityUpdatePreVarAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarAdapter_getDefs = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarAdapter_getInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarAdapter_getLoc = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarAdapter_getNumVarDelaySlots = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarAdapter_getTarget = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarAdapter_getVarDims = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarAdapter_m_CU = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarRefAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarRefAdapter_CustomConnectivityUpdatePreVarRefAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarRefAdapter_getDefs = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarRefAdapter_getInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdatePreVarRefAdapter_m_CU = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarAdapter_CustomConnectivityUpdateVarAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarAdapter_getDefs = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarAdapter_getInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarAdapter_getLoc = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarAdapter_getTarget = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarAdapter_getVarDims = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarAdapter_m_CU = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarRefAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarRefAdapter_CustomConnectivityUpdateVarRefAdapter = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarRefAdapter_getDefs = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarRefAdapter_getInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdateVarRefAdapter_m_CU = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_CustomConnectivityUpdate = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_CustomConnectivityUpdate_2 = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_CustomConnectivityUpdate_3 = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_canModifyConnectivity = R"doc(Can this custom connectivty update actually modify connectivity)doc";

static const char *__doc_CustomConnectivityUpdate_finalise = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getDependentVariables =
R"doc(Get vector of group names and variables in synapse groups, custom updates and other
custom connectivity updates which are attached to the same sparse connectivity this
custom connectivty update will update and thus will need modifying when we add and remove synapses)doc";

static const char *__doc_CustomConnectivityUpdate_getDerivedParams = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getEGPReferences = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getExtraGlobalParamLocation = R"doc(Get location of neuron model extra global parameter by name)doc";

static const char *__doc_CustomConnectivityUpdate_getHashDigest =
R"doc(Updates hash with custom update.

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_CustomConnectivityUpdate_getHostUpdateCodeTokens = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getInitHashDigest =
R"doc(Updates hash with custom update.

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_CustomConnectivityUpdate_getModel = R"doc(Gets the custom connectivity update model used by this group)doc";

static const char *__doc_CustomConnectivityUpdate_getName = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getParams = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getPostDelayNeuronGroup = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getPostVarInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getPostVarLocation = R"doc(Get variable location for postsynaptic state variable)doc";

static const char *__doc_CustomConnectivityUpdate_getPostVarReferences = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getPreDelayNeuronGroup = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getPreVarInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getPreVarLocation = R"doc(Get variable location for presynaptic state variable)doc";

static const char *__doc_CustomConnectivityUpdate_getPreVarReferences = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getRemapHashDigest =
R"doc(Updates hash with custom update.

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_CustomConnectivityUpdate_getRowUpdateCodeTokens = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getSynapseGroup = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getUpdateGroupName = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getVarInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getVarLocation = R"doc(Get variable location for synaptic state variable)doc";

static const char *__doc_CustomConnectivityUpdate_getVarLocationHashDigest = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getVarRefDelayGroup = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_getVarReferences = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_isParamDynamic = R"doc(Is parameter dynamic i.e. it can be changed at runtime)doc";

static const char *__doc_CustomConnectivityUpdate_isPostVarInitRequired = R"doc(Is var init code required for any postsynaptic variables in this custom connectivity update group?)doc";

static const char *__doc_CustomConnectivityUpdate_isPreVarInitRequired = R"doc(Is var init code required for any presynaptic variables in this custom connectivity update group?)doc";

static const char *__doc_CustomConnectivityUpdate_isVarInitRequired = R"doc(Is var init code required for any synaptic variables in this custom connectivity update group?)doc";

static const char *__doc_CustomConnectivityUpdate_isZeroCopyEnabled = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_DerivedParams = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_DynamicParams = R"doc(Data structure tracking whether parameters are dynamic or not)doc";

static const char *__doc_CustomConnectivityUpdate_m_EGPReferences = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_ExtraGlobalParamLocation = R"doc(Location of extra global parameters)doc";

static const char *__doc_CustomConnectivityUpdate_m_HostUpdateCodeTokens = R"doc(Tokens produced by scanner from host update code)doc";

static const char *__doc_CustomConnectivityUpdate_m_Model = R"doc(Custom connectivity update model used for this update)doc";

static const char *__doc_CustomConnectivityUpdate_m_Name = R"doc(Unique name of custom connectivity update)doc";

static const char *__doc_CustomConnectivityUpdate_m_Params = R"doc(Values of custom connectivity update parameters)doc";

static const char *__doc_CustomConnectivityUpdate_m_PostDelayNeuronGroup = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_PostVarInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_PostVarLocation = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_PostVarReferences = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_PreDelayNeuronGroup = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_PreVarInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_PreVarLocation = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_PreVarReferences = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_RowUpdateCodeTokens = R"doc(Tokens produced by scanner from row update code)doc";

static const char *__doc_CustomConnectivityUpdate_m_SynapseGroup = R"doc(Synapse group this custom connectivity update is associated with)doc";

static const char *__doc_CustomConnectivityUpdate_m_UpdateGroupName = R"doc(Name of the update group this custom connectivity update is part of)doc";

static const char *__doc_CustomConnectivityUpdate_m_VarInitialisers = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_m_VarLocation = R"doc(Location of individual state variables)doc";

static const char *__doc_CustomConnectivityUpdate_m_VarReferences = R"doc()doc";

static const char *__doc_CustomConnectivityUpdate_setExtraGlobalParamLocation =
R"doc(Set location of extra global parameter.
This is ignored for simulations on hardware with a single memory space.)doc";

static const char *__doc_CustomConnectivityUpdate_setParamDynamic = R"doc(Set whether parameter is dynamic or not i.e. it can be changed at runtime)doc";

static const char *__doc_CustomConnectivityUpdate_setPostVarLocation =
R"doc(Set location of postsynaptic state variable.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_CustomConnectivityUpdate_setPreVarLocation =
R"doc(Set location of presynaptic state variable.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_CustomConnectivityUpdate_setVarLocation =
R"doc(Set location of synaptic state variable.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_CustomUpdate = R"doc()doc";

static const char *__doc_CustomUpdate_2 = R"doc()doc";

static const char *__doc_CustomUpdateBase = R"doc()doc";

static const char *__doc_CustomUpdateBase_CustomUpdateBase = R"doc()doc";

static const char *__doc_CustomUpdateBase_CustomUpdateBase_2 = R"doc()doc";

static const char *__doc_CustomUpdateBase_CustomUpdateBase_3 = R"doc()doc";

static const char *__doc_CustomUpdateBase_checkVarReferenceDims = R"doc(Helper function to check if variable reference types match those specified in model)doc";

static const char *__doc_CustomUpdateBase_finalise = R"doc()doc";

static const char *__doc_CustomUpdateBase_getDerivedParams = R"doc()doc";

static const char *__doc_CustomUpdateBase_getDims = R"doc(Get dimensions of this custom update)doc";

static const char *__doc_CustomUpdateBase_getEGPReferences = R"doc()doc";

static const char *__doc_CustomUpdateBase_getExtraGlobalParamLocation = R"doc(Get location of neuron model extra global parameter by name)doc";

static const char *__doc_CustomUpdateBase_getModel = R"doc(Gets the custom update model used by this group)doc";

static const char *__doc_CustomUpdateBase_getName = R"doc()doc";

static const char *__doc_CustomUpdateBase_getParams = R"doc()doc";

static const char *__doc_CustomUpdateBase_getReferencedCustomUpdates = R"doc()doc";

static const char *__doc_CustomUpdateBase_getUpdateCodeTokens = R"doc()doc";

static const char *__doc_CustomUpdateBase_getUpdateGroupName = R"doc()doc";

static const char *__doc_CustomUpdateBase_getVarInitialisers = R"doc()doc";

static const char *__doc_CustomUpdateBase_getVarLocation = R"doc(Get variable location for custom update model state variable)doc";

static const char *__doc_CustomUpdateBase_getVarLocationHashDigest = R"doc()doc";

static const char *__doc_CustomUpdateBase_isInitRNGRequired = R"doc(Does this current source group require an RNG for it's init code)doc";

static const char *__doc_CustomUpdateBase_isModelReduction = R"doc()doc";

static const char *__doc_CustomUpdateBase_isParamDynamic = R"doc(Is parameter dynamic i.e. it can be changed at runtime)doc";

static const char *__doc_CustomUpdateBase_isReduction = R"doc()doc";

static const char *__doc_CustomUpdateBase_isVarInitRequired = R"doc(Is var init code required for any variables in this custom update group's custom update model?)doc";

static const char *__doc_CustomUpdateBase_isZeroCopyEnabled = R"doc()doc";

static const char *__doc_CustomUpdateBase_m_DerivedParams = R"doc()doc";

static const char *__doc_CustomUpdateBase_m_Dims = R"doc(Dimensions of this custom update)doc";

static const char *__doc_CustomUpdateBase_m_DynamicParams = R"doc(Data structure tracking whether parameters are dynamic or not)doc";

static const char *__doc_CustomUpdateBase_m_EGPReferences = R"doc()doc";

static const char *__doc_CustomUpdateBase_m_ExtraGlobalParamLocation = R"doc(Location of extra global parameters)doc";

static const char *__doc_CustomUpdateBase_m_Model = R"doc(Custom update model used for this update)doc";

static const char *__doc_CustomUpdateBase_m_Name = R"doc(Unique name of custom update)doc";

static const char *__doc_CustomUpdateBase_m_Params = R"doc(Values of custom connectivity update parameters)doc";

static const char *__doc_CustomUpdateBase_m_UpdateCodeTokens = R"doc(Tokens produced by scanner from update code)doc";

static const char *__doc_CustomUpdateBase_m_UpdateGroupName = R"doc(Name of the update group this custom connectivity update is part of)doc";

static const char *__doc_CustomUpdateBase_m_VarInitialisers = R"doc()doc";

static const char *__doc_CustomUpdateBase_m_VarLocation = R"doc(Location of individual state variables)doc";

static const char *__doc_CustomUpdateBase_setExtraGlobalParamLocation =
R"doc(Set location of extra global parameter.
This is ignored for simulations on hardware with a single memory space.)doc";

static const char *__doc_CustomUpdateBase_setParamDynamic = R"doc(Set whether parameter is dynamic or not i.e. it can be changed at runtime)doc";

static const char *__doc_CustomUpdateBase_setVarLocation =
R"doc(Set location of state variable.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_CustomUpdateBase_updateHash =
R"doc(Updates hash with custom update

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_CustomUpdateBase_updateInitHash =
R"doc(Updates hash with custom update

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_CustomUpdateEGPAdapter = R"doc()doc";

static const char *__doc_CustomUpdateEGPAdapter_CustomUpdateEGPAdapter = R"doc()doc";

static const char *__doc_CustomUpdateEGPAdapter_getDefs = R"doc()doc";

static const char *__doc_CustomUpdateEGPAdapter_getLoc = R"doc()doc";

static const char *__doc_CustomUpdateEGPAdapter_m_CU = R"doc()doc";

static const char *__doc_CustomUpdateInternal = R"doc()doc";

static const char *__doc_CustomUpdateInternal_2 = R"doc()doc";

static const char *__doc_CustomUpdateInternal_3 = R"doc()doc";

static const char *__doc_CustomUpdateInternal_CustomUpdateInternal = R"doc()doc";

static const char *__doc_CustomUpdateModels_Base = R"doc(Base class for all current source models)doc";

static const char *__doc_CustomUpdateModels_Base_getExtraGlobalParamRefs = R"doc(Gets names and types of model extra global parameter references)doc";

static const char *__doc_CustomUpdateModels_Base_getHashDigest = R"doc(Update hash from model)doc";

static const char *__doc_CustomUpdateModels_Base_getUpdateCode = R"doc(Gets the code that performs the custom update)doc";

static const char *__doc_CustomUpdateModels_Base_getVar = R"doc(Find the named variable)doc";

static const char *__doc_CustomUpdateModels_Base_getVarRefs = R"doc(Gets names and typesn of model variable references)doc";

static const char *__doc_CustomUpdateModels_Base_getVars = R"doc(Gets model variables)doc";

static const char *__doc_CustomUpdateModels_Base_validate = R"doc(Validate names of parameters etc)doc";

static const char *__doc_CustomUpdateModels_Base_validate_2 = R"doc()doc";

static const char *__doc_CustomUpdateModels_Transpose = R"doc(Minimal custom update model for calculating tranpose)doc";

static const char *__doc_CustomUpdateModels_Transpose_getInstance = R"doc()doc";

static const char *__doc_CustomUpdateModels_Transpose_getVarRefs = R"doc()doc";

static const char *__doc_CustomUpdateVarAccess =
R"doc(Supported combinations of access mode and dimension for custom update variables.
The axes are defined 'subtractively', i.e. VarAccessDim::BATCH indicates that this axis should be removed.)doc";

static const char *__doc_CustomUpdateVarAccess_BROADCAST_DELAY = R"doc(This variable has the same dimensions as whatever the custom update is attached to and writes to it get broadcast across delay slots)doc";

static const char *__doc_CustomUpdateVarAccess_READ_ONLY = R"doc(This variable can only be read from and has the same dimensions as whatever the custom update is attached to)doc";

static const char *__doc_CustomUpdateVarAccess_READ_ONLY_SHARED =
R"doc(This variable can only be read from and has the same dimensions as whatever
the custom update is attached to aside from being shared across batches)doc";

static const char *__doc_CustomUpdateVarAccess_READ_ONLY_SHARED_NEURON =
R"doc(This variable can only be read from and has the same dimensions as whatever
the custom update is attached to aside from being shared across neurons)doc";

static const char *__doc_CustomUpdateVarAccess_READ_WRITE = R"doc(This variable can be read from and written to and has the same dimensions as whatever the custom update is attached to)doc";

static const char *__doc_CustomUpdateVarAccess_REDUCE_BATCH_MAX = R"doc(This variable is a target for a reduction across batches using a max operation)doc";

static const char *__doc_CustomUpdateVarAccess_REDUCE_BATCH_SUM = R"doc(This variable is a target for a reduction across batches using a sum operation)doc";

static const char *__doc_CustomUpdateVarAccess_REDUCE_NEURON_MAX = R"doc(This variable is a target for a reduction across neurons using a max operation)doc";

static const char *__doc_CustomUpdateVarAccess_REDUCE_NEURON_SUM = R"doc(This variable is a target for a reduction across neurons using a sum operation)doc";

static const char *__doc_CustomUpdateVarAdapter = R"doc()doc";

static const char *__doc_CustomUpdateVarAdapter_CustomUpdateVarAdapter = R"doc()doc";

static const char *__doc_CustomUpdateVarAdapter_getDefs = R"doc()doc";

static const char *__doc_CustomUpdateVarAdapter_getInitialisers = R"doc()doc";

static const char *__doc_CustomUpdateVarAdapter_getLoc = R"doc()doc";

static const char *__doc_CustomUpdateVarAdapter_getNumVarDelaySlots = R"doc()doc";

static const char *__doc_CustomUpdateVarAdapter_getTarget = R"doc()doc";

static const char *__doc_CustomUpdateVarAdapter_getVarDims = R"doc()doc";

static const char *__doc_CustomUpdateVarAdapter_m_CU = R"doc()doc";

static const char *__doc_CustomUpdateVarRefAdapter = R"doc()doc";

static const char *__doc_CustomUpdateVarRefAdapter_CustomUpdateVarRefAdapter = R"doc()doc";

static const char *__doc_CustomUpdateVarRefAdapter_getDefs = R"doc()doc";

static const char *__doc_CustomUpdateVarRefAdapter_getInitialisers = R"doc()doc";

static const char *__doc_CustomUpdateVarRefAdapter_getNumVarDelaySlots = R"doc()doc";

static const char *__doc_CustomUpdateVarRefAdapter_m_CU = R"doc()doc";

static const char *__doc_CustomUpdateWU = R"doc()doc";

static const char *__doc_CustomUpdateWU_2 = R"doc()doc";

static const char *__doc_CustomUpdateWUInternal = R"doc()doc";

static const char *__doc_CustomUpdateWUInternal_2 = R"doc()doc";

static const char *__doc_CustomUpdateWUInternal_3 = R"doc()doc";

static const char *__doc_CustomUpdateWUInternal_4 = R"doc()doc";

static const char *__doc_CustomUpdateWUInternal_CustomUpdateWUInternal = R"doc()doc";

static const char *__doc_CustomUpdateWUVarRefAdapter = R"doc()doc";

static const char *__doc_CustomUpdateWUVarRefAdapter_CustomUpdateWUVarRefAdapter = R"doc()doc";

static const char *__doc_CustomUpdateWUVarRefAdapter_getDefs = R"doc()doc";

static const char *__doc_CustomUpdateWUVarRefAdapter_getInitialisers = R"doc()doc";

static const char *__doc_CustomUpdateWUVarRefAdapter_getNumVarDelaySlots = R"doc()doc";

static const char *__doc_CustomUpdateWUVarRefAdapter_m_CU = R"doc()doc";

static const char *__doc_CustomUpdateWU_CustomUpdateWU = R"doc()doc";

static const char *__doc_CustomUpdateWU_finalise = R"doc()doc";

static const char *__doc_CustomUpdateWU_getHashDigest =
R"doc(Updates hash with custom update

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_CustomUpdateWU_getInitHashDigest =
R"doc(Updates hash with custom update

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_CustomUpdateWU_getKernelSize = R"doc()doc";

static const char *__doc_CustomUpdateWU_getReferencedCustomUpdates = R"doc(Get vector of other custom updates referenced by this custom update)doc";

static const char *__doc_CustomUpdateWU_getSynapseGroup = R"doc()doc";

static const char *__doc_CustomUpdateWU_getVarReferences = R"doc()doc";

static const char *__doc_CustomUpdateWU_isBatchReduction = R"doc()doc";

static const char *__doc_CustomUpdateWU_isTransposeOperation = R"doc()doc";

static const char *__doc_CustomUpdateWU_m_SynapseGroup = R"doc(Synapse group all variables referenced by custom update are associated with)doc";

static const char *__doc_CustomUpdateWU_m_VarReferences = R"doc()doc";

static const char *__doc_CustomUpdate_CustomUpdate = R"doc()doc";

static const char *__doc_CustomUpdate_finalise = R"doc()doc";

static const char *__doc_CustomUpdate_getDelayNeuronGroup = R"doc()doc";

static const char *__doc_CustomUpdate_getDenDelaySynapseGroup = R"doc()doc";

static const char *__doc_CustomUpdate_getHashDigest =
R"doc(Updates hash with custom update

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_CustomUpdate_getInitHashDigest =
R"doc(Updates hash with custom update

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_CustomUpdate_getNumNeurons =
R"doc(Get number of neurons custom update operates over
This must be the same for all groups whose variables are referenced)doc";

static const char *__doc_CustomUpdate_getReferencedCustomUpdates = R"doc(Get vector of other custom updates referenced by this custom update)doc";

static const char *__doc_CustomUpdate_getVarReferences = R"doc()doc";

static const char *__doc_CustomUpdate_isBatchReduction = R"doc()doc";

static const char *__doc_CustomUpdate_isNeuronReduction = R"doc()doc";

static const char *__doc_CustomUpdate_m_DelayNeuronGroup = R"doc()doc";

static const char *__doc_CustomUpdate_m_DenDelaySynapseGroup = R"doc()doc";

static const char *__doc_CustomUpdate_m_NumNeurons =
R"doc(Number of neurons custom update operates over.
This must be the same for all groups whose variables are referenced)doc";

static const char *__doc_CustomUpdate_m_VarReferences = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Base = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Base_getCalcKernelSizeFunc = R"doc(Get function to calculate kernel size required for this conenctor based on its parameters)doc";

static const char *__doc_InitSparseConnectivitySnippet_Base_getCalcMaxColLengthFunc = R"doc(Get function to calculate the maximum column length of this connector based on the parameters and the size of the pre and postsynaptic population)doc";

static const char *__doc_InitSparseConnectivitySnippet_Base_getCalcMaxRowLengthFunc = R"doc(Get function to calculate the maximum row length of this connector based on the parameters and the size of the pre and postsynaptic population)doc";

static const char *__doc_InitSparseConnectivitySnippet_Base_getColBuildCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Base_getHashDigest = R"doc(Update hash from snippet)doc";

static const char *__doc_InitSparseConnectivitySnippet_Base_getHostInitCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Base_getRowBuildCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Base_validate = R"doc(Validate names of parameters etc)doc";

static const char *__doc_InitSparseConnectivitySnippet_Conv2D =
R"doc(Initialises 2D convolutional connectivity
Row build state variables are used to convert presynaptic neuron index to rows, columns and channels and,
from these, to calculate the range of postsynaptic rows, columns and channels connections will be made within.
This sparse connectivity snippet does not support multiple threads per neuron
This snippet takes 12 parameter:

- ``conv_kh`` - height of 2D convolution kernel.
- ``conv_kw`` - width of 2D convolution kernel.
- ``conv_sh`` - height of convolution stride
- ``conv_sw`` - width of convolution stride
- ``conv_padh`` - width of padding around input
- ``conv_padw`` - height of padding around input
- ``conv_ih`` - width of input to this convolution
- ``conv_iw`` - height of input to this convolution
- ``conv_ic`` - number of input channels to this convolution
- ``conv_oh`` - width of output from this convolution
- ``conv_ow`` - height of output from this convolution
- ``conv_oc`` - number of output channels from this convolution


.. note::

    ``conv_ih * conv_iw * conv_ic`` should equal the number of neurons in the presynaptic
    neuron population and ``conv_oh * conv_ow * conv_oc`` should equal the number of
    neurons in the postsynaptic neuron population.)doc";

static const char *__doc_InitSparseConnectivitySnippet_Conv2D_getCalcKernelSizeFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Conv2D_getCalcMaxRowLengthFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Conv2D_getInstance = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Conv2D_getParams = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Conv2D_getRowBuildCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPostWithReplacement =
R"doc(Initialises connectivity with a fixed number of random synapses per row.
The postsynaptic targets of the synapses can be initialised in parallel by sampling from the discrete
uniform distribution. However, to sample connections in ascending order, we sample from the 1st order statistic
of the uniform distribution -- Beta[1, Npost] -- essentially the next smallest value. In this special case
this is equivalent to the exponential distribution which can be sampled in constant time using the inversion method.
This snippet takes 1 parameter:

- ``num`` - number of postsynaptic neurons to connect each presynaptic neuron to.)doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPostWithReplacement_getCalcMaxColLengthFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPostWithReplacement_getCalcMaxRowLengthFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPostWithReplacement_getInstance = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPostWithReplacement_getParams = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPostWithReplacement_getRowBuildCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPreWithReplacement =
R"doc(Initialises connectivity with a fixed number of random synapses per column.
No need for ordering here so fine to sample directly from uniform distribution
This snippet takes 1 parameter:

- ``num`` - number of presynaptic neurons to connect each postsynaptic neuron to.)doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPreWithReplacement_getCalcMaxColLengthFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPreWithReplacement_getCalcMaxRowLengthFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPreWithReplacement_getColBuildCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPreWithReplacement_getInstance = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberPreWithReplacement_getParams = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberTotalWithReplacement =
R"doc(Initialises connectivity with a total number of random synapses.
The first stage in using this connectivity is to determine how many of the total synapses end up in each row.
This can be determined by sampling from the multinomial distribution. However, this operation cannot be
efficiently parallelised so must be performed on the host and the result passed as an extra global parameter array.
Once the length of each row is determined, the postsynaptic targets of the synapses can be initialised in parallel
by sampling from the discrete uniform distribution. However, to sample connections in ascending order, we sample
from the 1st order statistic of the uniform distribution -- Beta[1, Npost] -- essentially the next smallest value.
In this special case this is equivalent to the exponential distribution which can be sampled in constant time using the inversion method.
This snippet takes 1 parameter:

- ``num`` - total number of synapses to distribute throughout synaptic matrix.)doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberTotalWithReplacement_getCalcMaxColLengthFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberTotalWithReplacement_getCalcMaxRowLengthFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberTotalWithReplacement_getExtraGlobalParams = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberTotalWithReplacement_getHostInitCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberTotalWithReplacement_getInstance = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberTotalWithReplacement_getParams = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedNumberTotalWithReplacement_getRowBuildCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbability =
R"doc(Initialises connectivity with a fixed probability of a synapse existing
between a pair of pre and postsynaptic neurons.
Whether a synapse exists between a pair of pre and a postsynaptic
neurons can be modelled using a Bernoulli distribution. While this COULD
be sampled directly by repeatedly drawing from the uniform distribution,
this is inefficient. Instead we sample from the geometric distribution
which describes "the probability distribution of the number of Bernoulli
trials needed to get one success" -- essentially the distribution of the
'gaps' between synapses. We do this using the "inversion method"
described by Devroye (1986) -- essentially inverting the CDF of the
equivalent continuous distribution (in this case the exponential distribution)
This snippet takes 1 parameter:

- ``prob`` - probability of connection in [0, 1])doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbabilityBase =
R"doc(Base class for snippets which initialise connectivity with a fixed probability
of a synapse existing between a pair of pre and postsynaptic neurons.)doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbabilityBase_getCalcMaxColLengthFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbabilityBase_getCalcMaxRowLengthFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbabilityBase_getDerivedParams = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbabilityBase_getParams = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbabilityBase_getRowBuildCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbabilityNoAutapse =
R"doc(Initialises connectivity with a fixed probability of a synapse existing
between a pair of pre and postsynaptic neurons. This version ensures there
are no autapses - connections between neurons with the same id
so should be used for recurrent connections.
Whether a synapse exists between a pair of pre and a postsynaptic
neurons can be modelled using a Bernoulli distribution. While this COULD
br sampling directly by repeatedly drawing from the uniform distribution,
this is innefficient. Instead we sample from the gemetric distribution
which describes "the probability distribution of the number of Bernoulli
trials needed to get one success" -- essentially the distribution of the
'gaps' between synapses. We do this using the "inversion method"
described by Devroye (1986) -- essentially inverting the CDF of the
equivalent continuous distribution (in this case the exponential distribution)
This snippet takes 1 parameter:

- ``prob`` - probability of connection in [0, 1])doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbabilityNoAutapse_getInstance = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbabilityNoAutapse_getRowBuildCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbability_getInstance = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_FixedProbability_getRowBuildCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Init = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Init_Init = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Init_getColBuildCodeTokens = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Init_getHostInitCodeTokens = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Init_getRowBuildCodeTokens = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Init_isHostRNGRequired = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Init_isRNGRequired = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Init_m_ColBuildCodeTokens = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Init_m_HostInitCodeTokens = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Init_m_RowBuildCodeTokens = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_OneToOne =
R"doc(Initialises connectivity to a 'one-to-one' diagonal matrix
This snippet has no parameters)doc";

static const char *__doc_InitSparseConnectivitySnippet_OneToOne_getCalcMaxColLengthFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_OneToOne_getCalcMaxRowLengthFunc = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_OneToOne_getInstance = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_OneToOne_getRowBuildCode = R"doc()doc";

static const char *__doc_InitSparseConnectivitySnippet_Uninitialised = R"doc(Used to mark connectivity as uninitialised - no initialisation code will be run)doc";

static const char *__doc_InitSparseConnectivitySnippet_Uninitialised_getInstance = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_AvgPoolConv2D =
R"doc(Initialises 2D convolutional connectivity preceded by averaging pooling
Row build state variables are used to convert presynaptic neuron index to rows, columns and channels and,
from these, to calculate the range of postsynaptic rows, columns and channels connections will be made within.
This snippet takes 12 parameter:

- ``conv_kh`` - height of 2D convolution kernel.
- ``conv_kw`` - width of 2D convolution kernel.
- ``pool_kh`` - height of 2D average pooling kernel.
- ``pool_kw`` - width of 2D average pooling kernel.
- ``pool_sh`` - height of average pooling stride
- ``pool_sw`` - width of average pooling stride
- ``pool_ih`` - width of input to the average pooling
- ``pool_iw`` - height of input to the average pooling
- ``pool_ic`` - number of input channels to the average pooling
- ``conv_oh`` - width of output from the convolution
- ``conv_ow`` - height of output from the convolution
- ``conv_oc`` - number of output channels the this convolution)doc";

static const char *__doc_InitToeplitzConnectivitySnippet_AvgPoolConv2D_getCalcKernelSizeFunc = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_AvgPoolConv2D_getCalcMaxRowLengthFunc = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_AvgPoolConv2D_getDerivedParams = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_AvgPoolConv2D_getDiagonalBuildCode = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_AvgPoolConv2D_getInstance = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_AvgPoolConv2D_getParams = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Base = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Base_getCalcKernelSizeFunc = R"doc(Get function to calculate kernel size required for this conenctor based on its parameters)doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Base_getCalcMaxRowLengthFunc = R"doc(Get function to calculate the maximum row length of this connector based on the parameters and the size of the pre and postsynaptic population)doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Base_getDiagonalBuildCode = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Base_getHashDigest = R"doc(Update hash from snippet)doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Base_validate = R"doc(Validate names of parameters etc)doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Conv2D =
R"doc(Initialises 2D convolutional connectivity
Row build state variables are used to convert presynaptic neuron index to rows, columns and channels and,
from these, to calculate the range of postsynaptic rows, columns and channels connections will be made within.
This snippet takes 8 parameter:

- ``conv_kh`` - height of 2D convolution kernel.
- ``conv_kw`` - width of 2D convolution kernel.
- ``conv_ih`` - width of input to this convolution
- ``conv_iw`` - height of input to this convolution
- ``conv_ic`` - number of input channels to this convolution
- ``conv_oh`` - width of output from this convolution
- ``conv_ow`` - height of output from this convolution
- ``conv_oc`` - number of output channels from this convolution)doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Conv2D_getCalcKernelSizeFunc = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Conv2D_getCalcMaxRowLengthFunc = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Conv2D_getDerivedParams = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Conv2D_getDiagonalBuildCode = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Conv2D_getInstance = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Conv2D_getParams = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Init = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Init_Init = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Init_getDiagonalBuildCodeTokens = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Init_isRNGRequired = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Init_m_DiagonalBuildCodeTokens = R"doc()doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Uninitialised = R"doc(Used to mark connectivity as uninitialised - no initialisation code will be run)doc";

static const char *__doc_InitToeplitzConnectivitySnippet_Uninitialised_getInstance = R"doc()doc";

static const char *__doc_InitVarSnippet_Base = R"doc()doc";

static const char *__doc_InitVarSnippet_Base_getCode = R"doc()doc";

static const char *__doc_InitVarSnippet_Base_getHashDigest = R"doc(Update hash from snippet)doc";

static const char *__doc_InitVarSnippet_Base_validate = R"doc(Validate names of parameters etc)doc";

static const char *__doc_InitVarSnippet_Binomial =
R"doc(Initialises variable by sampling from the binomial distribution
This snippet takes 2 parameters:

- ``n`` - number of trials
- ``p`` - success probability for each trial)doc";

static const char *__doc_InitVarSnippet_Binomial_getCode = R"doc()doc";

static const char *__doc_InitVarSnippet_Binomial_getInstance = R"doc()doc";

static const char *__doc_InitVarSnippet_Binomial_getParams = R"doc()doc";

static const char *__doc_InitVarSnippet_Constant =
R"doc(Initialises variable to a constant value
This snippet takes 1 parameter:

- ``value`` - The value to intialise the variable to


.. note::

    This snippet type is seldom used directly - InitVarSnippet::Init
    has an implicit constructor that, internally, creates one of these snippets)doc";

static const char *__doc_InitVarSnippet_Constant_getCode = R"doc()doc";

static const char *__doc_InitVarSnippet_Constant_getInstance = R"doc()doc";

static const char *__doc_InitVarSnippet_Constant_getParams = R"doc()doc";

static const char *__doc_InitVarSnippet_Exponential =
R"doc(Initialises variable by sampling from the exponential distribution
This snippet takes 1 parameter:

- ``lambda`` - mean event rate (events per unit time/distance))doc";

static const char *__doc_InitVarSnippet_Exponential_getCode = R"doc()doc";

static const char *__doc_InitVarSnippet_Exponential_getInstance = R"doc()doc";

static const char *__doc_InitVarSnippet_Exponential_getParams = R"doc()doc";

static const char *__doc_InitVarSnippet_Gamma =
R"doc(Initialises variable by sampling from the gamma distribution
This snippet takes 2 parameters:

- ``a`` - distribution shape
- ``b`` - distribution scale)doc";

static const char *__doc_InitVarSnippet_Gamma_getCode = R"doc()doc";

static const char *__doc_InitVarSnippet_Gamma_getInstance = R"doc()doc";

static const char *__doc_InitVarSnippet_Gamma_getParams = R"doc()doc";

static const char *__doc_InitVarSnippet_Init =
R"doc(Class used to bind together everything required to initialise a variable:
1. A pointer to a variable initialisation snippet
2. The parameters required to control the variable initialisation snippet)doc";

static const char *__doc_InitVarSnippet_Init_Init = R"doc()doc";

static const char *__doc_InitVarSnippet_Init_Init_2 = R"doc()doc";

static const char *__doc_InitVarSnippet_Init_getCodeTokens = R"doc()doc";

static const char *__doc_InitVarSnippet_Init_isKernelRequired = R"doc()doc";

static const char *__doc_InitVarSnippet_Init_isRNGRequired = R"doc()doc";

static const char *__doc_InitVarSnippet_Init_m_CodeTokens = R"doc()doc";

static const char *__doc_InitVarSnippet_Kernel =
R"doc(Used to initialise synapse variables from a kernel. This snippet type is used
if you wish to initialise sparse connectivity using a sparse connectivity
initialisation snippet with a kernel such as InitSparseConnectivitySnippet::Conv2D.)doc";

static const char *__doc_InitVarSnippet_Kernel_getCode = R"doc()doc";

static const char *__doc_InitVarSnippet_Kernel_getExtraGlobalParams = R"doc()doc";

static const char *__doc_InitVarSnippet_Kernel_getInstance = R"doc()doc";

static const char *__doc_InitVarSnippet_Normal =
R"doc(Initialises variable by sampling from the normal distribution
This snippet takes 2 parameters:

- ``mean`` - The mean
- ``sd`` - The standard deviation)doc";

static const char *__doc_InitVarSnippet_NormalClipped =
R"doc(Initialises variable by sampling from the normal distribution,
Resamples value if out of range specified my min and max
This snippet takes 2 parameters:

- ``mean`` - The mean
- ``sd`` - ThGeNN::e standard deviation
- ``min`` - The minimum value
- ``max`` - The maximum value)doc";

static const char *__doc_InitVarSnippet_NormalClippedDelay =
R"doc(Initialises variable by sampling from the normal distribution,
Resamples value of out of range specified my min and max.
This snippet is intended for initializing (dendritic) delay parameters
where parameters are specified in ms but converted to timesteps.
This snippet takes 2 parameters:

- ``mean`` - The mean [ms]
- ``sd`` - The standard deviation [ms]
- ``min`` - The minimum value [ms]
- ``max`` - The maximum value [ms])doc";

static const char *__doc_InitVarSnippet_NormalClippedDelay_getCode = R"doc()doc";

static const char *__doc_InitVarSnippet_NormalClippedDelay_getDerivedParams = R"doc()doc";

static const char *__doc_InitVarSnippet_NormalClippedDelay_getInstance = R"doc()doc";

static const char *__doc_InitVarSnippet_NormalClippedDelay_getParams = R"doc()doc";

static const char *__doc_InitVarSnippet_NormalClipped_getCode = R"doc()doc";

static const char *__doc_InitVarSnippet_NormalClipped_getInstance = R"doc()doc";

static const char *__doc_InitVarSnippet_NormalClipped_getParams = R"doc()doc";

static const char *__doc_InitVarSnippet_Normal_getCode = R"doc()doc";

static const char *__doc_InitVarSnippet_Normal_getInstance = R"doc()doc";

static const char *__doc_InitVarSnippet_Normal_getParams = R"doc()doc";

static const char *__doc_InitVarSnippet_Uniform =
R"doc(Initialises variable by sampling from the uniform distribution
This snippet takes 2 parameters:

- ``min`` - The minimum value
- ``max`` - The maximum value)doc";

static const char *__doc_InitVarSnippet_Uniform_getCode = R"doc()doc";

static const char *__doc_InitVarSnippet_Uniform_getInstance = R"doc()doc";

static const char *__doc_InitVarSnippet_Uniform_getParams = R"doc()doc";

static const char *__doc_InitVarSnippet_Uninitialised = R"doc(Used to mark variables as uninitialised - no initialisation code will be run)doc";

static const char *__doc_InitVarSnippet_Uninitialised_getInstance = R"doc()doc";

static const char *__doc_LocationContainer = R"doc()doc";

static const char *__doc_LocationContainer_LocationContainer = R"doc()doc";

static const char *__doc_LocationContainer_anyZeroCopy = R"doc()doc";

static const char *__doc_LocationContainer_get = R"doc()doc";

static const char *__doc_LocationContainer_m_DefaultLocation = R"doc()doc";

static const char *__doc_LocationContainer_m_Locations = R"doc()doc";

static const char *__doc_LocationContainer_set = R"doc()doc";

static const char *__doc_LocationContainer_updateHash = R"doc()doc";

static const char *__doc_Logging_Channel = R"doc()doc";

static const char *__doc_Logging_Channel_CHANNEL_BACKEND = R"doc()doc";

static const char *__doc_Logging_Channel_CHANNEL_CODE_GEN = R"doc()doc";

static const char *__doc_Logging_Channel_CHANNEL_GENN = R"doc()doc";

static const char *__doc_Logging_Channel_CHANNEL_MAX = R"doc()doc";

static const char *__doc_Logging_Channel_CHANNEL_RUNTIME = R"doc()doc";

static const char *__doc_Logging_Channel_CHANNEL_TRANSPILER = R"doc()doc";

static const char *__doc_Logging_init = R"doc()doc";

static const char *__doc_ModelSpec = R"doc(Object used for specifying a neuronal network model)doc";

static const char *__doc_ModelSpecInternal = R"doc()doc";

static const char *__doc_ModelSpecInternal_2 = R"doc()doc";

static const char *__doc_ModelSpec_ModelSpec = R"doc()doc";

static const char *__doc_ModelSpec_ModelSpec_2 = R"doc()doc";

static const char *__doc_ModelSpec_addCurrentSource =
R"doc(Adds a new current source to the model using a current source model managed by the user


$Parameter ``currentSourceName``:

 string containing unique name of current source.


$Parameter ``model``:

 current source model to use for current source.


$Parameter ``neuronGroup``:

 pointer to target neuron group


$Parameter ``paramValues``:

 parameters for model wrapped in ParamValues object.


$Parameter ``varInitialisers``:

 state variable initialiser snippets and parameters wrapped in VarValues object.


$Returns:

pointer to newly created CurrentSource)doc";

static const char *__doc_ModelSpec_addCurrentSource_2 =
R"doc(Adds a new current source to the model using a singleton current source model created using standard DECLARE_MODEL and IMPLEMENT_MODEL macros


$Template parameter ``CurrentSourceModel``:

 type of neuron model (derived from CurrentSourceModel::Base).


$Parameter ``currentSourceName``:

 string containing unique name of current source.


$Parameter ``neuronGroup``:

 pointer to target neuron group


$Parameter ``paramValues``:

 parameters for model wrapped in ParamValues object.


$Parameter ``varInitialisers``:

 state variable initialiser snippets and parameters wrapped in VarValues object.


$Returns:

pointer to newly created CurrentSource)doc";

static const char *__doc_ModelSpec_addCustomConnectivityUpdate =
R"doc(Adds a new custom connectivity update attached to synapse group and potentially with synaptic, presynaptic and
postsynaptic state variables and variable references using a custom connectivity update model managed by the user


$Template parameter ``CustomConnectivityUpdateModel``:

 type of custom connectivity update model (derived from CustomConnectivityUpdateModels::Base).


$Parameter ``name``:

 string containing unique name of custom update


$Parameter ``updateGroupName``:

 string containing name of group to add this custom update to


$Parameter ``synapseGroup``:

 pointer to the synapse group whose connectivity this group will update


$Parameter ``model``:

 custom update model to use for custom update.


$Parameter ``paramValues``:

 parameters for model wrapped in ParamValues object.


$Parameter ``varInitialisers``:

 synaptic state variable initialiser snippets and parameters wrapped in VarValues object.


$Parameter ``preVarInitialisers``:

 presynaptic state variable initialiser snippets and parameters wrapped in VarValues object.


$Parameter ``postVarInitialisers``:

 postsynaptic state variable initialiser snippets and parameters wrapped in VarValues object.


$Parameter ``varReferences``:

 variable references wrapped in WUVarReferences object.


$Parameter ``varReferences``:

 variable references wrapped in VarReferences object.


$Parameter ``varReferences``:

 variable references wrapped in VarReferences object.


$Returns:

pointer to newly created CustomConnectivityUpdate)doc";

static const char *__doc_ModelSpec_addCustomConnectivityUpdate_2 =
R"doc(Adds a new custom connectivity update attached to synapse group and potentially with synaptic, presynaptic and
postsynaptic state variables and variable references using a singleton custom connectivity update model created
using standard DECLARE_CUSTOM_CONNECTIVITY_UPDATE_MODEL and IMPLEMENT_MODEL macros


$Template parameter ``CustomConnectivityUpdateModel``:

 type of custom connectivity update model (derived from CustomConnectivityUpdateModels::Base).


$Parameter ``name``:

 string containing unique name of custom update


$Parameter ``updateGroupName``:

 string containing name of group to add this custom update to


$Parameter ``synapseGroup``:

 pointer to the synapse group whose connectivity this group will update


$Parameter ``model``:

 custom update model to use for custom update.


$Parameter ``paramValues``:

 parameters for model wrapped in ParamValues object.


$Parameter ``varInitialisers``:

 synaptic state variable initialiser snippets and parameters wrapped in VarValues object.


$Parameter ``preVarInitialisers``:

 presynaptic state variable initialiser snippets and parameters wrapped in VarValues object.


$Parameter ``postVarInitialisers``:

 postsynaptic state variable initialiser snippets and parameters wrapped in VarValues object.


$Parameter ``varReferences``:

 variable references wrapped in WUVarReferences object.


$Parameter ``varReferences``:

 variable references wrapped in VarReferences object.


$Parameter ``varReferences``:

 variable references wrapped in VarReferences object.


$Returns:

pointer to newly created CustomConnectivityUpdate)doc";

static const char *__doc_ModelSpec_addCustomUpdate =
R"doc(Adds a new custom update with references to the model using a custom update model managed by the user


$Parameter ``name``:

 string containing unique name of custom update


$Parameter ``updateGroupName``:

 string containing name of group to add this custom update to


$Parameter ``model``:

 custom update model to use for custom update.


$Parameter ``paramValues``:

 parameters for model wrapped in ParamValues object.


$Parameter ``varInitialisers``:

 state variable initialiser snippets and parameters wrapped in VarValues object.


$Parameter ``varReferences``:

 variable references wrapped in VarReferences object.


$Returns:

pointer to newly created CustomUpdateBase)doc";

static const char *__doc_ModelSpec_addCustomUpdate_2 =
R"doc(Adds a new custom update with references to weight update model variable to the
model using a custom update model managed by the user


$Parameter ``name``:

 string containing unique name of custom update


$Parameter ``updateGroupName``:

 string containing name of group to add this custom update to


$Parameter ``model``:

 custom update model to use for custom update.


$Parameter ``paramValues``:

 parameters for model wrapped in ParamValues object.


$Parameter ``varInitialisers``:

 state variable initialiser snippets and parameters wrapped in VarValues object.


$Parameter ``varReferences``:

 variable references wrapped in VarReferences object.


$Returns:

pointer to newly created CustomUpdateBase)doc";

static const char *__doc_ModelSpec_addCustomUpdate_3 =
R"doc(Adds a new custom update to the model using a singleton custom update model
created using standard DECLARE_CUSTOM_UPDATE_MODEL and IMPLEMENT_MODEL macros


$Template parameter ``CustomUpdateModel``:

 type of custom update model (derived from CustomUpdateModels::Base).


$Parameter ``name``:

 string containing unique name of custom update


$Parameter ``updateGroupName``:

 string containing name of group to add this custom update to


$Parameter ``paramValues``:

 parameters for model wrapped in ParamValues object.


$Parameter ``varInitialisers``:

 state variable initialiser snippets and parameters wrapped in VarValues object.


$Parameter ``varInitialisers``:

 variable references wrapped in VarReferences object.


$Returns:

pointer to newly created CustomUpdateBase)doc";

static const char *__doc_ModelSpec_addCustomUpdate_4 =
R"doc(Adds a new custom update with references to weight update model variables to the model using a singleton
custom update model created using standard DECLARE_CUSTOM_UPDATE_MODEL and IMPLEMENT_MODEL macros


$Template parameter ``CustomUpdateModel``:

 type of neuron model (derived from CustomUpdateModels::Base).


$Parameter ``name``:

 string containing unique name of custom update


$Parameter ``updateGroupName``:

 string containing name of group to add this custom update to


$Parameter ``paramValues``:

 parameters for model wrapped in ParamValues object.


$Parameter ``varInitialisers``:

 state variable initialiser snippets and parameters wrapped in VarValues object.


$Parameter ``varInitialisers``:

 variable references wrapped in WUVarReferences object.


$Returns:

pointer to newly created CustomUpdateBase)doc";

static const char *__doc_ModelSpec_addNeuronPopulation =
R"doc(Adds a new neuron group to the model using a neuron model managed by the user


$Parameter ``name``:

 string containing unique name of neuron population.


$Parameter ``size``:

 integer specifying how many neurons are in the population.


$Parameter ``model``:

 neuron model to use for neuron group.


$Parameter ``paramValues``:

 parameters for model wrapped in ParamValues object.


$Parameter ``varInitialisers``:

 state variable initialiser snippets and parameters wrapped in VarValues object.


$Returns:

pointer to newly created NeuronGroup)doc";

static const char *__doc_ModelSpec_addNeuronPopulation_2 =
R"doc(Adds a new neuron group to the model using a singleton neuron model created using standard DECLARE_MODEL and IMPLEMENT_MODEL macros


$Template parameter ``NeuronModel``:

 type of neuron model (derived from NeuronModels::Base).


$Parameter ``name``:

 string containing unique name of neuron population.


$Parameter ``size``:

 integer specifying how many neurons are in the population.


$Parameter ``paramValues``:

 parameters for model wrapped in ParamValues object.


$Parameter ``varInitialisers``:

 state variable initialiser snippets and parameters wrapped in VarValues object.


$Returns:

pointer to newly created NeuronGroup)doc";

static const char *__doc_ModelSpec_addSynapsePopulation =
R"doc(Adds a synapse population to the model using weight update and postsynaptic models managed by the user


$Parameter ``name``:

                             string containing unique name of synapse population.


$Parameter ``mtype``:

                            how the synaptic matrix associated with this synapse population should be represented.


$Parameter ``src``:

                              pointer to presynaptic neuron group


$Parameter ``trg``:

                              pointer to postsynaptic neuron group


$Parameter ``wum``:

                              weight update model to use for synapse group.


$Parameter ``wumInitialiser``:

                   WeightUpdateModels::Init object used to initialiser weight update model


$Parameter ``psmInitialiser``:

                   PostsynapticModels::Init object used to initialiser postsynaptic model


$Parameter ``connectivityInitialiser``:

          sparse connectivity initialisation snippet used to initialise connectivity for
SynapseMatrixConnectivity::SPARSE or SynapseMatrixConnectivity::BITMASK.
Typically wrapped with it's parameters using ``initConnectivity`` function


$Returns:

pointer to newly created SynapseGroup)doc";

static const char *__doc_ModelSpec_addSynapsePopulation_2 =
R"doc(Adds a synapse population to the model using weight update and postsynaptic models managed by the user


$Parameter ``name``:

                             string containing unique name of synapse population.


$Parameter ``mtype``:

                            how the synaptic matrix associated with this synapse population should be represented.


$Parameter ``src``:

                              pointer to presynaptic neuron group


$Parameter ``trg``:

                              pointer to postsynaptic neuron group


$Parameter ``wum``:

                              weight update model to use for synapse group.


$Parameter ``wumInitialiser``:

                   WeightUpdateModels::Init object used to initialiser weight update model


$Parameter ``psmInitialiser``:

                   PostsynapticModels::Init object used to initialiser postsynaptic model


$Parameter ``connectivityInitialiser``:

          toeplitz connectivity initialisation snippet used to initialise connectivity for
SynapseMatrixConnectivity::TOEPLITZ. Typically wrapped with it's parameters using ``initToeplitzConnectivity`` function


$Returns:

pointer to newly created SynapseGroup)doc";

static const char *__doc_ModelSpec_addSynapsePopulation_3 = R"doc()doc";

static const char *__doc_ModelSpec_finalise = R"doc(Finalise model)doc";

static const char *__doc_ModelSpec_findCurrentSource = R"doc(Find a current source by name)doc";

static const char *__doc_ModelSpec_findNeuronGroup = R"doc(Find a neuron group by name)doc";

static const char *__doc_ModelSpec_findNeuronGroup_2 = R"doc(Find a neuron group by name)doc";

static const char *__doc_ModelSpec_findSynapseGroup = R"doc(Find a synapse group by name)doc";

static const char *__doc_ModelSpec_findSynapseGroup_2 = R"doc(Find a synapse group by name)doc";

static const char *__doc_ModelSpec_getBatchSize = R"doc()doc";

static const char *__doc_ModelSpec_getCustomConnectivityUpdates = R"doc(Get std::map containing named CustomConnectivity objects in model)doc";

static const char *__doc_ModelSpec_getCustomUpdates = R"doc(Get std::map containing named CustomUpdate objects in model)doc";

static const char *__doc_ModelSpec_getCustomWUUpdates = R"doc()doc";

static const char *__doc_ModelSpec_getDT = R"doc(Gets the model integration step size)doc";

static const char *__doc_ModelSpec_getHashDigest = R"doc(Get hash digest used for detecting changes)doc";

static const char *__doc_ModelSpec_getLocalCurrentSources = R"doc(Get std::map containing local named CurrentSource objects in model)doc";

static const char *__doc_ModelSpec_getName = R"doc(Gets the name of the neuronal network model)doc";

static const char *__doc_ModelSpec_getNeuronGroups = R"doc(Get std::map containing local named NeuronGroup objects in model)doc";

static const char *__doc_ModelSpec_getNumNeurons = R"doc(How many neurons make up the entire model)doc";

static const char *__doc_ModelSpec_getPrecision = R"doc(Gets the floating point numerical precision)doc";

static const char *__doc_ModelSpec_getSeed = R"doc(Get the random seed)doc";

static const char *__doc_ModelSpec_getSynapseGroups = R"doc(Get std::map containing local named SynapseGroup objects in model)doc";

static const char *__doc_ModelSpec_getTimePrecision = R"doc(Gets the floating point numerical precision used to represent time)doc";

static const char *__doc_ModelSpec_getTypeContext = R"doc()doc";

static const char *__doc_ModelSpec_isRecordingInUse = R"doc(Is recording enabled on any population in this model?)doc";

static const char *__doc_ModelSpec_isTimingEnabled = R"doc(Are timers and timing commands enabled)doc";

static const char *__doc_ModelSpec_m_BatchSize = R"doc(Batch size of this model - efficiently duplicates model)doc";

static const char *__doc_ModelSpec_m_CustomConnectivityUpdates = R"doc(Named custom connectivity updates)doc";

static const char *__doc_ModelSpec_m_CustomUpdates = R"doc(Named custom updates)doc";

static const char *__doc_ModelSpec_m_CustomWUUpdates = R"doc()doc";

static const char *__doc_ModelSpec_m_DT = R"doc(The integration time step of the model)doc";

static const char *__doc_ModelSpec_m_DefaultExtraGlobalParamLocation = R"doc(The default location for model extra global parameters)doc";

static const char *__doc_ModelSpec_m_DefaultNarrowSparseIndEnabled =
R"doc(Should 'narrow' i.e. less than 32-bit types be used to store postsyanptic neuron indices in SynapseMatrixConnectivity::SPARSE connectivity?
If this is true and postsynaptic population has < 256 neurons, 8-bit indices will be used and,
if it has < 65536 neurons, 16-bit indices will be used.)doc";

static const char *__doc_ModelSpec_m_DefaultSparseConnectivityLocation = R"doc(The default location for sparse synaptic connectivity)doc";

static const char *__doc_ModelSpec_m_DefaultVarLocation = R"doc(The default location for model state variables?)doc";

static const char *__doc_ModelSpec_m_FusePostsynapticModels =
R"doc(Should compatible postsynaptic models and dendritic delay buffers be fused?
This can significantly reduce the cost of updating neuron population but means that per-synapse group inSyn arrays can not be retrieved)doc";

static const char *__doc_ModelSpec_m_FusePrePostWeightUpdateModels =
R"doc(Should compatible pre and postsynaptic weight update model variables and updates be fused?
This can significantly reduce the cost of updating neuron populations but means that per-synaptic group per and postsynaptic variables cannot be retrieved)doc";

static const char *__doc_ModelSpec_m_LocalCurrentSources = R"doc(Named local current sources)doc";

static const char *__doc_ModelSpec_m_LocalNeuronGroups = R"doc(Named local neuron groups)doc";

static const char *__doc_ModelSpec_m_LocalSynapseGroups = R"doc(Named local synapse groups)doc";

static const char *__doc_ModelSpec_m_Name = R"doc(Name of the network model)doc";

static const char *__doc_ModelSpec_m_Precision = R"doc(Type of floating point variables used for 'scalar' types)doc";

static const char *__doc_ModelSpec_m_Seed = R"doc(RNG seed)doc";

static const char *__doc_ModelSpec_m_TimePrecision = R"doc(Type of floating point variables used for 'timepoint' types)doc";

static const char *__doc_ModelSpec_m_TimingEnabled = R"doc(Whether timing code should be inserted into model)doc";

static const char *__doc_ModelSpec_m_TypeContext = R"doc()doc";

static const char *__doc_ModelSpec_operator_assign = R"doc()doc";

static const char *__doc_ModelSpec_setBatchSize = R"doc()doc";

static const char *__doc_ModelSpec_setDT = R"doc(Set the integration step size of the model)doc";

static const char *__doc_ModelSpec_setDefaultExtraGlobalParamLocation =
R"doc(What is the default location for model extra global parameters?
Historically, this was just left up to the user to handle)doc";

static const char *__doc_ModelSpec_setDefaultNarrowSparseIndEnabled = R"doc(Sets default for whether narrow i.e. less than 32-bit types are used for sparse matrix indices)doc";

static const char *__doc_ModelSpec_setDefaultSparseConnectivityLocation =
R"doc(What is the default location for sparse synaptic connectivity?
Historically, everything was allocated on both the host AND device)doc";

static const char *__doc_ModelSpec_setDefaultVarLocation =
R"doc(What is the default location for model state variables?
Historically, everything was allocated on both the host AND device)doc";

static const char *__doc_ModelSpec_setFusePostsynapticModels =
R"doc(Should compatible postsynaptic models and dendritic delay buffers be fused?
This can significantly reduce the cost of updating neuron population but means that per-synapse group inSyn arrays can not be retrieved)doc";

static const char *__doc_ModelSpec_setFusePrePostWeightUpdateModels =
R"doc(Should compatible pre and postsynaptic weight update model variables and updates be fused?
This can significantly reduce the cost of updating neuron populations but means that per-synaptic group per and postsynaptic variables cannot be retrieved)doc";

static const char *__doc_ModelSpec_setName = R"doc(Method to set the neuronal network model name)doc";

static const char *__doc_ModelSpec_setPrecision = R"doc(Set numerical precision for scalar type)doc";

static const char *__doc_ModelSpec_setSeed = R"doc(Set the random seed (disables automatic seeding if argument not 0).)doc";

static const char *__doc_ModelSpec_setTimePrecision = R"doc(Set numerical precision for time type)doc";

static const char *__doc_ModelSpec_setTimingEnabled = R"doc(Set whether timers and timing commands are to be included)doc";

static const char *__doc_ModelSpec_zeroCopyInUse = R"doc(Are any variables in any populations in this model using zero-copy memory?)doc";

static const char *__doc_Models_Base = R"doc()doc";

static const char *__doc_Models_Base_CustomUpdateVar = R"doc()doc";

static const char *__doc_Models_Base_CustomUpdateVar_CustomUpdateVar = R"doc()doc";

static const char *__doc_Models_Base_CustomUpdateVar_CustomUpdateVar_2 = R"doc()doc";

static const char *__doc_Models_Base_EGPRef = R"doc()doc";

static const char *__doc_Models_Base_EGPRef_EGPRef = R"doc()doc";

static const char *__doc_Models_Base_EGPRef_EGPRef_2 = R"doc()doc";

static const char *__doc_Models_Base_EGPRef_name = R"doc()doc";

static const char *__doc_Models_Base_EGPRef_operator_eq = R"doc()doc";

static const char *__doc_Models_Base_EGPRef_type = R"doc()doc";

static const char *__doc_Models_Base_Var = R"doc()doc";

static const char *__doc_Models_Base_VarBase =
R"doc(A variable has a name, a type and an access type
Explicit constructors required as although, through the wonders of C++
aggregate initialization, access would default to VarAccess::READ_WRITE
if not specified, this results in a -Wmissing-field-initializers warning on GCC and Clang)doc";

static const char *__doc_Models_Base_VarBase_VarBase = R"doc()doc";

static const char *__doc_Models_Base_VarBase_VarBase_2 = R"doc()doc";

static const char *__doc_Models_Base_VarBase_access = R"doc()doc";

static const char *__doc_Models_Base_VarBase_name = R"doc()doc";

static const char *__doc_Models_Base_VarBase_operator_eq = R"doc()doc";

static const char *__doc_Models_Base_VarBase_type = R"doc()doc";

static const char *__doc_Models_Base_VarRef = R"doc()doc";

static const char *__doc_Models_Base_VarRef_VarRef = R"doc()doc";

static const char *__doc_Models_Base_VarRef_VarRef_2 = R"doc()doc";

static const char *__doc_Models_Base_VarRef_access = R"doc()doc";

static const char *__doc_Models_Base_VarRef_name = R"doc()doc";

static const char *__doc_Models_Base_VarRef_operator_eq = R"doc()doc";

static const char *__doc_Models_Base_VarRef_type = R"doc()doc";

static const char *__doc_Models_Base_Var_Var = R"doc()doc";

static const char *__doc_Models_Base_Var_Var_2 = R"doc()doc";

static const char *__doc_Models_EGPReference = R"doc()doc";

static const char *__doc_Models_EGPReference_CUWURef = R"doc()doc";

static const char *__doc_Models_EGPReference_Detail =
R"doc(Minimal helper class for definining unique struct
wrappers around group pointers for use with std::variant)doc";

static const char *__doc_Models_EGPReference_Detail_egp = R"doc()doc";

static const char *__doc_Models_EGPReference_Detail_group = R"doc()doc";

static const char *__doc_Models_EGPReference_EGPReference = R"doc()doc";

static const char *__doc_Models_EGPReference_WURef = R"doc()doc";

static const char *__doc_Models_EGPReference_createEGPRef = R"doc()doc";

static const char *__doc_Models_EGPReference_createEGPRef_2 = R"doc()doc";

static const char *__doc_Models_EGPReference_createEGPRef_3 = R"doc()doc";

static const char *__doc_Models_EGPReference_createEGPRef_4 = R"doc()doc";

static const char *__doc_Models_EGPReference_createEGPRef_5 = R"doc()doc";

static const char *__doc_Models_EGPReference_createPSMEGPRef = R"doc()doc";

static const char *__doc_Models_EGPReference_createWUEGPRef = R"doc()doc";

static const char *__doc_Models_EGPReference_getEGP = R"doc()doc";

static const char *__doc_Models_EGPReference_getEGPName = R"doc()doc";

static const char *__doc_Models_EGPReference_getTargetArray = R"doc(Get array associated with referenced EGP)doc";

static const char *__doc_Models_EGPReference_getTargetName = R"doc()doc";

static const char *__doc_Models_EGPReference_m_Detail = R"doc()doc";

static const char *__doc_Models_VarReference = R"doc()doc";

static const char *__doc_Models_VarReferenceBase = R"doc()doc";

static const char *__doc_Models_VarReferenceBase_Detail =
R"doc(Minimal helper class for definining unique struct
wrappers around group pointers for use with std::variant)doc";

static const char *__doc_Models_VarReferenceBase_Detail_group = R"doc()doc";

static const char *__doc_Models_VarReferenceBase_Detail_var = R"doc()doc";

static const char *__doc_Models_VarReference_CCUPostRef = R"doc()doc";

static const char *__doc_Models_VarReference_CCUPreRef = R"doc()doc";

static const char *__doc_Models_VarReference_CSRef = R"doc()doc";

static const char *__doc_Models_VarReference_CURef = R"doc()doc";

static const char *__doc_Models_VarReference_InternalNGRef = R"doc()doc";

static const char *__doc_Models_VarReference_InternalNGRef_Type = R"doc()doc";

static const char *__doc_Models_VarReference_InternalNGRef_Type_PREV_SPIKE_TIME = R"doc()doc";

static const char *__doc_Models_VarReference_InternalNGRef_Type_SPIKE_TIME = R"doc()doc";

static const char *__doc_Models_VarReference_InternalNGRef_group = R"doc()doc";

static const char *__doc_Models_VarReference_InternalNGRef_type = R"doc()doc";

static const char *__doc_Models_VarReference_InternalSGRef = R"doc()doc";

static const char *__doc_Models_VarReference_InternalSGRef_Type = R"doc()doc";

static const char *__doc_Models_VarReference_InternalSGRef_Type_DEN_DELAY = R"doc()doc";

static const char *__doc_Models_VarReference_InternalSGRef_Type_OUT_POST = R"doc()doc";

static const char *__doc_Models_VarReference_InternalSGRef_group = R"doc()doc";

static const char *__doc_Models_VarReference_InternalSGRef_type = R"doc()doc";

static const char *__doc_Models_VarReference_NGRef = R"doc()doc";

static const char *__doc_Models_VarReference_PSMRef = R"doc()doc";

static const char *__doc_Models_VarReference_VarReference = R"doc()doc";

static const char *__doc_Models_VarReference_WUPostRef = R"doc()doc";

static const char *__doc_Models_VarReference_WUPreRef = R"doc()doc";

static const char *__doc_Models_VarReference_createDenDelayVarRef = R"doc()doc";

static const char *__doc_Models_VarReference_createOutPostVarRef = R"doc()doc";

static const char *__doc_Models_VarReference_createPSMVarRef = R"doc()doc";

static const char *__doc_Models_VarReference_createPostVarRef = R"doc()doc";

static const char *__doc_Models_VarReference_createPreVarRef = R"doc()doc";

static const char *__doc_Models_VarReference_createPrevSpikeTimeVarRef = R"doc()doc";

static const char *__doc_Models_VarReference_createSpikeTimeVarRef = R"doc()doc";

static const char *__doc_Models_VarReference_createVarRef = R"doc()doc";

static const char *__doc_Models_VarReference_createVarRef_2 = R"doc()doc";

static const char *__doc_Models_VarReference_createVarRef_3 = R"doc()doc";

static const char *__doc_Models_VarReference_createWUPostVarRef = R"doc()doc";

static const char *__doc_Models_VarReference_createWUPreVarRef = R"doc()doc";

static const char *__doc_Models_VarReference_getDelayNeuronGroup = R"doc(If variable is delayed, get neuron group which manages its delay)doc";

static const char *__doc_Models_VarReference_getDenDelaySynapseGroup = R"doc(If reference is to dendritic delay buffer, get synapse group which manages its delay)doc";

static const char *__doc_Models_VarReference_getNumNeurons = R"doc(Get size of variable)doc";

static const char *__doc_Models_VarReference_getReferencedCustomUpdate =
R"doc(If this reference points to another custom update, return pointer to it
This is used to detect circular dependencies)doc";

static const char *__doc_Models_VarReference_getTargetArray = R"doc(Get array associated with referenced variable)doc";

static const char *__doc_Models_VarReference_getTargetName = R"doc()doc";

static const char *__doc_Models_VarReference_getVarDims = R"doc()doc";

static const char *__doc_Models_VarReference_getVarName = R"doc(Get name of targetted variable)doc";

static const char *__doc_Models_VarReference_getVarType = R"doc()doc";

static const char *__doc_Models_VarReference_isTargetNeuronGroup = R"doc(Does this variable reference's target belong to neuron group)doc";

static const char *__doc_Models_VarReference_isTargetSynapseGroupPSM = R"doc(Does this variable reference's target belong to synapse group postsynaptic model)doc";

static const char *__doc_Models_VarReference_m_Detail = R"doc()doc";

static const char *__doc_Models_VarReference_operator_lt = R"doc()doc";

static const char *__doc_Models_WUVarReference = R"doc()doc";

static const char *__doc_Models_WUVarReference_CCURef = R"doc()doc";

static const char *__doc_Models_WUVarReference_WURef =
R"doc(Struct for storing weight update group variable reference - needs
Additional field to store synapse group associated with transpose)doc";

static const char *__doc_Models_WUVarReference_WURef_group = R"doc()doc";

static const char *__doc_Models_WUVarReference_WURef_transposeGroup = R"doc()doc";

static const char *__doc_Models_WUVarReference_WURef_transposeVar = R"doc()doc";

static const char *__doc_Models_WUVarReference_WURef_var = R"doc()doc";

static const char *__doc_Models_WUVarReference_WUVarReference = R"doc()doc";

static const char *__doc_Models_WUVarReference_createWUVarReference = R"doc()doc";

static const char *__doc_Models_WUVarReference_createWUVarReference_2 = R"doc()doc";

static const char *__doc_Models_WUVarReference_createWUVarReference_3 = R"doc()doc";

static const char *__doc_Models_WUVarReference_getReferencedCustomUpdate =
R"doc(If this reference points to another custom update, return pointer to it
This is used to detect circular dependencies)doc";

static const char *__doc_Models_WUVarReference_getSynapseGroup = R"doc()doc";

static const char *__doc_Models_WUVarReference_getSynapseGroupInternal = R"doc()doc";

static const char *__doc_Models_WUVarReference_getTargetArray = R"doc(Get array associated with referenced variable)doc";

static const char *__doc_Models_WUVarReference_getTargetName = R"doc()doc";

static const char *__doc_Models_WUVarReference_getTransposeSynapseGroup = R"doc()doc";

static const char *__doc_Models_WUVarReference_getTransposeSynapseGroupInternal = R"doc()doc";

static const char *__doc_Models_WUVarReference_getTransposeTargetArray = R"doc(Get array associated with referenced transpose variable)doc";

static const char *__doc_Models_WUVarReference_getTransposeTargetName = R"doc()doc";

static const char *__doc_Models_WUVarReference_getTransposeVarDims = R"doc(Get dimensions of transpose variable being referenced)doc";

static const char *__doc_Models_WUVarReference_getTransposeVarName = R"doc()doc";

static const char *__doc_Models_WUVarReference_getTransposeVarType = R"doc()doc";

static const char *__doc_Models_WUVarReference_getVarDims = R"doc()doc";

static const char *__doc_Models_WUVarReference_getVarName = R"doc()doc";

static const char *__doc_Models_WUVarReference_getVarType = R"doc()doc";

static const char *__doc_Models_WUVarReference_m_Detail = R"doc()doc";

static const char *__doc_Models_WUVarReference_operator_lt = R"doc()doc";

static const char *__doc_Models_checkEGPReferenceTypes = R"doc()doc";

static const char *__doc_Models_checkLocalVarReferences = R"doc(Helper function to check if local variable references are configured correctly)doc";

static const char *__doc_Models_checkVarReferenceTypes = R"doc(Helper function to check if variable reference types match those specified in model)doc";

static const char *__doc_Models_resolveVarReferences = R"doc(Helper function to 'resolve' local variable references which may be specified with just a string)doc";

static const char *__doc_Models_updateHash = R"doc()doc";

static const char *__doc_Models_updateHash_2 = R"doc()doc";

static const char *__doc_Models_updateHash_3 = R"doc()doc";

static const char *__doc_Models_updateHash_4 = R"doc()doc";

static const char *__doc_NeuronEGPAdapter = R"doc()doc";

static const char *__doc_NeuronEGPAdapter_NeuronEGPAdapter = R"doc()doc";

static const char *__doc_NeuronEGPAdapter_getDefs = R"doc()doc";

static const char *__doc_NeuronEGPAdapter_getLoc = R"doc()doc";

static const char *__doc_NeuronEGPAdapter_m_NG = R"doc()doc";

static const char *__doc_NeuronGroup = R"doc()doc";

static const char *__doc_NeuronGroup_2 = R"doc()doc";

static const char *__doc_NeuronGroupInternal = R"doc()doc";

static const char *__doc_NeuronGroupInternal_2 = R"doc()doc";

static const char *__doc_NeuronGroupInternal_3 = R"doc()doc";

static const char *__doc_NeuronGroupInternal_4 = R"doc()doc";

static const char *__doc_NeuronGroupInternal_5 = R"doc()doc";

static const char *__doc_NeuronGroupInternal_NeuronGroupInternal = R"doc()doc";

static const char *__doc_NeuronGroup_NeuronGroup = R"doc()doc";

static const char *__doc_NeuronGroup_NeuronGroup_2 = R"doc()doc";

static const char *__doc_NeuronGroup_NeuronGroup_3 = R"doc()doc";

static const char *__doc_NeuronGroup_addInSyn = R"doc()doc";

static const char *__doc_NeuronGroup_addOutSyn = R"doc()doc";

static const char *__doc_NeuronGroup_checkNumDelaySlots = R"doc(Checks delay slots currently provided by the neuron group against a required delay and extends if required)doc";

static const char *__doc_NeuronGroup_finalise = R"doc()doc";

static const char *__doc_NeuronGroup_fusePrePostSynapses = R"doc(Fuse incoming postsynaptic models)doc";

static const char *__doc_NeuronGroup_getCurrentSources = R"doc(Gets pointers to all current sources which provide input to this neuron group)doc";

static const char *__doc_NeuronGroup_getDerivedParams = R"doc()doc";

static const char *__doc_NeuronGroup_getExtraGlobalParamLocation = R"doc(Get location of neuron model extra global parameter by name)doc";

static const char *__doc_NeuronGroup_getFusedInSynWithPostCode = R"doc(Helper to get vector of incoming synapse groups which have postsynaptic update code)doc";

static const char *__doc_NeuronGroup_getFusedInSynWithPostVars = R"doc(Helper to get vector of incoming synapse groups which have postsynaptic variables)doc";

static const char *__doc_NeuronGroup_getFusedOutSynWithPreCode = R"doc(Helper to get vector of outgoing synapse groups which have presynaptic update code)doc";

static const char *__doc_NeuronGroup_getFusedOutSynWithPreVars = R"doc(Helper to get vector of outgoing synapse groups which have presynaptic variables)doc";

static const char *__doc_NeuronGroup_getFusedPSMInSyn = R"doc()doc";

static const char *__doc_NeuronGroup_getFusedPreOutputOutSyn = R"doc()doc";

static const char *__doc_NeuronGroup_getFusedSpike = R"doc()doc";

static const char *__doc_NeuronGroup_getFusedSpikeEvent = R"doc()doc";

static const char *__doc_NeuronGroup_getFusedWUPostInSyn = R"doc()doc";

static const char *__doc_NeuronGroup_getFusedWUPreOutSyn = R"doc()doc";

static const char *__doc_NeuronGroup_getHashDigest =
R"doc(Updates hash with neuron group

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_NeuronGroup_getInSyn = R"doc(Gets pointers to all synapse groups which provide input to this neuron group)doc";

static const char *__doc_NeuronGroup_getInitHashDigest =
R"doc(Updates hash with neuron group initialisation

.. note::

    this can only be called after model is finalized)doc";

static const char *__doc_NeuronGroup_getModel = R"doc(Gets the neuron model used by this group)doc";

static const char *__doc_NeuronGroup_getName = R"doc()doc";

static const char *__doc_NeuronGroup_getNumDelaySlots = R"doc()doc";

static const char *__doc_NeuronGroup_getNumNeurons = R"doc(Gets number of neurons in group)doc";

static const char *__doc_NeuronGroup_getOutSyn = R"doc(Gets pointers to all synapse groups emanating from this neuron group)doc";

static const char *__doc_NeuronGroup_getParams = R"doc()doc";

static const char *__doc_NeuronGroup_getPrevSpikeEventTimeLocation = R"doc(Get location of this neuron group's previous output spike-like-event times)doc";

static const char *__doc_NeuronGroup_getPrevSpikeTimeLocation = R"doc(Get location of this neuron group's previous output spike times)doc";

static const char *__doc_NeuronGroup_getPrevSpikeTimeUpdateHashDigest = R"doc()doc";

static const char *__doc_NeuronGroup_getResetCodeTokens = R"doc(Tokens produced by scanner from reset code)doc";

static const char *__doc_NeuronGroup_getSimCodeTokens = R"doc(Tokens produced by scanner from simc ode)doc";

static const char *__doc_NeuronGroup_getSpikeEventLocation = R"doc(Get location of this neuron group's output spike events)doc";

static const char *__doc_NeuronGroup_getSpikeEventTimeLocation = R"doc(Get location of this neuron group's output spike-like-event times)doc";

static const char *__doc_NeuronGroup_getSpikeLocation = R"doc(Get location of this neuron group's output spikes)doc";

static const char *__doc_NeuronGroup_getSpikeQueueUpdateHashDigest = R"doc()doc";

static const char *__doc_NeuronGroup_getSpikeTimeLocation = R"doc(Get location of this neuron group's output spike times)doc";

static const char *__doc_NeuronGroup_getThresholdConditionCodeTokens = R"doc(Tokens produced by scanner from threshold condition code)doc";

static const char *__doc_NeuronGroup_getVarInitialisers = R"doc()doc";

static const char *__doc_NeuronGroup_getVarLocation = R"doc(Get location of neuron model state variable by name)doc";

static const char *__doc_NeuronGroup_getVarLocationHashDigest = R"doc()doc";

static const char *__doc_NeuronGroup_injectCurrent = R"doc(add input current source)doc";

static const char *__doc_NeuronGroup_isDelayRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isInitRNGRequired = R"doc(Does this neuron group require an RNG for it's init code?)doc";

static const char *__doc_NeuronGroup_isParamDynamic = R"doc(Is parameter dynamic i.e. it can be changed at runtime)doc";

static const char *__doc_NeuronGroup_isPrevSpikeEventTimeRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isPrevSpikeTimeRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isRecordingEnabled = R"doc(Does this neuron group require any sort of recording?)doc";

static const char *__doc_NeuronGroup_isRecordingZeroCopyEnabled =
R"doc(Get whether zero-copy memory (if available) should
be used for spike and spike-like event recording)doc";

static const char *__doc_NeuronGroup_isSimRNGRequired = R"doc(Does this neuron group require an RNG to simulate?)doc";

static const char *__doc_NeuronGroup_isSpikeDelayRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isSpikeEventDelayRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isSpikeEventQueueRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isSpikeEventRecordingEnabled = R"doc(Is spike event recording enabled for this population?)doc";

static const char *__doc_NeuronGroup_isSpikeEventRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isSpikeEventTimeRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isSpikeQueueRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isSpikeRecordingEnabled = R"doc(Is spike recording enabled for this population?)doc";

static const char *__doc_NeuronGroup_isSpikeTimeRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isTrueSpikeRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isVarInitRequired =
R"doc(Does this neuron group require any variables initializing?
Because it occurs in the same kernel, this includes current source variables;
postsynaptic model variables and postsynaptic weight update variables
from incoming synapse groups; and presynaptic weight update variables from outgoing synapse groups)doc";

static const char *__doc_NeuronGroup_isVarQueueRequired = R"doc()doc";

static const char *__doc_NeuronGroup_isZeroCopyEnabled = R"doc()doc";

static const char *__doc_NeuronGroup_m_CurrentSourceGroups = R"doc()doc";

static const char *__doc_NeuronGroup_m_DerivedParams = R"doc()doc";

static const char *__doc_NeuronGroup_m_DynamicParams = R"doc(Data structure tracking whether parameters are dynamic or not)doc";

static const char *__doc_NeuronGroup_m_ExtraGlobalParamLocation =
R"doc(Location of extra global parameters.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_m_FusedPSMInSyn = R"doc()doc";

static const char *__doc_NeuronGroup_m_FusedPreOutputOutSyn = R"doc()doc";

static const char *__doc_NeuronGroup_m_FusedSpike = R"doc()doc";

static const char *__doc_NeuronGroup_m_FusedSpikeEvent = R"doc()doc";

static const char *__doc_NeuronGroup_m_FusedWUPostInSyn = R"doc()doc";

static const char *__doc_NeuronGroup_m_FusedWUPreOutSyn = R"doc()doc";

static const char *__doc_NeuronGroup_m_InSyn = R"doc()doc";

static const char *__doc_NeuronGroup_m_Model = R"doc(Neuron model used for this group)doc";

static const char *__doc_NeuronGroup_m_Name = R"doc(Unique name of neuron group)doc";

static const char *__doc_NeuronGroup_m_NumDelaySlots =
R"doc(Number of delay slots this group required.
This is the maximum required by any incoming or outgoing synapse group)doc";

static const char *__doc_NeuronGroup_m_NumNeurons = R"doc(Number of neurons in group)doc";

static const char *__doc_NeuronGroup_m_OutSyn = R"doc()doc";

static const char *__doc_NeuronGroup_m_Params = R"doc(Values of neuron parameters)doc";

static const char *__doc_NeuronGroup_m_PrevSpikeEventTimeLocation =
R"doc(Location of previous spike-like-event times.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_m_PrevSpikeTimeLocation =
R"doc(Location of previous spike times.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_m_RecordingZeroCopyEnabled =
R"doc(Should zero-copy memory (if available) be used
for spike and spike-like event recording?)doc";

static const char *__doc_NeuronGroup_m_ResetCodeTokens = R"doc(Tokens produced by scanner from reset code)doc";

static const char *__doc_NeuronGroup_m_SimCodeTokens = R"doc(Tokens produced by scanner from simc ode)doc";

static const char *__doc_NeuronGroup_m_SpikeEventLocation =
R"doc(Location of spike-like events from neuron group.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_m_SpikeEventQueueRequired = R"doc(Is queueing required for spike-like events?)doc";

static const char *__doc_NeuronGroup_m_SpikeEventRecordingEnabled = R"doc(Is spike event recording enabled?)doc";

static const char *__doc_NeuronGroup_m_SpikeEventTimeLocation =
R"doc(Location of spike-like-event times.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_m_SpikeLocation =
R"doc(Location of spikes from neuron group.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_m_SpikeQueueRequired = R"doc(Is queueing required for spikes?)doc";

static const char *__doc_NeuronGroup_m_SpikeRecordingEnabled = R"doc(Is spike recording enabled for this population?)doc";

static const char *__doc_NeuronGroup_m_SpikeTimeLocation =
R"doc(Location of spike times from neuron group.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_m_ThresholdConditionCodeTokens = R"doc(Tokens produced by scanner from threshold condition code)doc";

static const char *__doc_NeuronGroup_m_VarInitialisers = R"doc()doc";

static const char *__doc_NeuronGroup_m_VarLocation =
R"doc(Location of individual state variables.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_m_VarQueueRequired = R"doc(Set of names of variable requiring queueing)doc";

static const char *__doc_NeuronGroup_setExtraGlobalParamLocation =
R"doc(Set location of neuron model extra global parameter.
This is ignored for simulations on hardware with a single memory space.)doc";

static const char *__doc_NeuronGroup_setParamDynamic = R"doc(Set whether parameter is dynamic or not i.e. it can be changed at runtime)doc";

static const char *__doc_NeuronGroup_setPrevSpikeEventTimeLocation =
R"doc(Set location of this neuron group's previous output spike-like-event times.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_setPrevSpikeTimeLocation =
R"doc(Set location of this neuron group's previous output spike times.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_setRecordingZeroCopyEnabled =
R"doc(Set whether zero-copy memory (if available) should be
used for spike and spike-like event recording.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_setSpikeEventLocation =
R"doc(Set location of this neuron group's output spike events.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_setSpikeEventQueueRequired = R"doc()doc";

static const char *__doc_NeuronGroup_setSpikeEventRecordingEnabled = R"doc(Enables and disable spike event recording for this population)doc";

static const char *__doc_NeuronGroup_setSpikeEventTimeLocation =
R"doc(Set location of this neuron group's output spike-like-event times.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_setSpikeLocation =
R"doc(Set location of this neuron group's output spikes.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_setSpikeQueueRequired = R"doc()doc";

static const char *__doc_NeuronGroup_setSpikeRecordingEnabled = R"doc(Enables and disable spike recording for this population)doc";

static const char *__doc_NeuronGroup_setSpikeTimeLocation =
R"doc(Set location of this neuron group's output spike times.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_setVarLocation =
R"doc(Set variable location of neuron model state variable.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_NeuronGroup_setVarQueueRequired = R"doc()doc";

static const char *__doc_NeuronModels_Base = R"doc(Base class for all neuron models)doc";

static const char *__doc_NeuronModels_Base_getAdditionalInputVars =
R"doc(Gets names, types (as strings) and initial values of local variables into which
the 'apply input code' of (potentially) multiple postsynaptic input models can apply input)doc";

static const char *__doc_NeuronModels_Base_getHashDigest = R"doc(Update hash from model)doc";

static const char *__doc_NeuronModels_Base_getResetCode = R"doc(Gets code that defines the reset action taken after a spike occurred. This can be empty)doc";

static const char *__doc_NeuronModels_Base_getSimCode =
R"doc(Gets the code that defines the execution of one timestep of integration of the neuron model.
The code will refer to NN for the value of the variable with name "NN".
It needs to refer to the predefined variable "ISYN", i.e. contain ISYN, if it is to receive input.)doc";

static const char *__doc_NeuronModels_Base_getThresholdConditionCode =
R"doc(Gets code which defines the condition for a true spike in the described neuron model.
This evaluates to a bool (e.g. "V > 20").)doc";

static const char *__doc_NeuronModels_Base_getVar = R"doc(Find the named variable)doc";

static const char *__doc_NeuronModels_Base_getVars = R"doc(Gets model variables)doc";

static const char *__doc_NeuronModels_Base_isAutoRefractoryRequired = R"doc(Does this model require auto-refractory logic?)doc";

static const char *__doc_NeuronModels_Base_validate = R"doc(Validate names of parameters etc)doc";

static const char *__doc_NeuronModels_Izhikevich =
R"doc(Izhikevich neuron with fixed parameters  [Izhikevich2003]_.
It is usually described as

.. math::
    :nowrap:

    \begin{eqnarray*}
    \frac{dV}{dt} &=& 0.04 V^2 + 5 V + 140 - U + I, \\
    \frac{dU}{dt} &=& a (bV-U),
    \end{eqnarray*}

I is an external input current and the voltage V is reset to parameter c and U incremented by parameter d, whenever V >= 30 mV. This is paired with a particular integration procedure of two 0.5 ms Euler time steps for the V equation followed by one 1 ms time step of the U equation. Because of its popularity we provide this model in this form here event though due to the details of the usual implementation it is strictly speaking inconsistent with the displayed equations.

Variables are:

- ``V`` - Membrane potential
- ``U`` - Membrane recovery variable

Parameters are:

- ``a`` - time scale of U
- ``b`` - sensitivity of U
- ``c`` - after-spike reset value of V
- ``d`` - after-spike reset value of U)doc";

static const char *__doc_NeuronModels_IzhikevichVariable =
R"doc(Izhikevich neuron with variable parameters  [Izhikevich2003]_.
This is the same model as NeuronModels::Izhikevich but parameters are defined as
"variables" in order to allow users to provide individual values for each
individual neuron instead of fixed values for all neurons across the population.

Accordingly, the model has the variables:

- ``V`` - Membrane potential
- ``U`` - Membrane recovery variable
- ``a`` - time scale of U
- ``b`` - sensitivity of U
- ``c`` - after-spike reset value of V
- ``d`` - after-spike reset value of U

and no parameters.)doc";

static const char *__doc_NeuronModels_IzhikevichVariable_getInstance = R"doc()doc";

static const char *__doc_NeuronModels_IzhikevichVariable_getParams = R"doc()doc";

static const char *__doc_NeuronModels_IzhikevichVariable_getVars = R"doc()doc";

static const char *__doc_NeuronModels_Izhikevich_getInstance = R"doc()doc";

static const char *__doc_NeuronModels_Izhikevich_getParams = R"doc()doc";

static const char *__doc_NeuronModels_Izhikevich_getSimCode = R"doc()doc";

static const char *__doc_NeuronModels_Izhikevich_getThresholdConditionCode = R"doc()doc";

static const char *__doc_NeuronModels_Izhikevich_getVars = R"doc()doc";

static const char *__doc_NeuronModels_Izhikevich_isAutoRefractoryRequired = R"doc()doc";

static const char *__doc_NeuronModels_LIF = R"doc()doc";

static const char *__doc_NeuronModels_LIF_getDerivedParams = R"doc()doc";

static const char *__doc_NeuronModels_LIF_getInstance = R"doc()doc";

static const char *__doc_NeuronModels_LIF_getParams = R"doc()doc";

static const char *__doc_NeuronModels_LIF_getResetCode = R"doc()doc";

static const char *__doc_NeuronModels_LIF_getSimCode = R"doc()doc";

static const char *__doc_NeuronModels_LIF_getThresholdConditionCode = R"doc()doc";

static const char *__doc_NeuronModels_LIF_getVars = R"doc()doc";

static const char *__doc_NeuronModels_LIF_isAutoRefractoryRequired = R"doc()doc";

static const char *__doc_NeuronModels_Poisson =
R"doc(Poisson neurons
This neuron model emits spikes according to the Poisson distribution with a mean firing
rate as determined by its single parameter.
It has 1 state variable:

- ``timeStepToSpike`` - Number of timesteps to next spike

and 1 parameter:

- ``rate`` - Mean firing rate (Hz)


.. note::

    Internally this samples from the exponential distribution using
    the C++ 11 \<random\> library on the CPU and by transforming the
    uniform distribution, generated using cuRAND, with a natural log on the GPU.


.. note::

    If you are connecting Poisson neurons one-to-one to another neuron population,
    it is more efficient to add a CurrentSourceModels::PoissonExp instead.)doc";

static const char *__doc_NeuronModels_Poisson_getDerivedParams = R"doc()doc";

static const char *__doc_NeuronModels_Poisson_getInstance = R"doc()doc";

static const char *__doc_NeuronModels_Poisson_getParams = R"doc()doc";

static const char *__doc_NeuronModels_Poisson_getSimCode = R"doc()doc";

static const char *__doc_NeuronModels_Poisson_getThresholdConditionCode = R"doc()doc";

static const char *__doc_NeuronModels_Poisson_getVars = R"doc()doc";

static const char *__doc_NeuronModels_Poisson_isAutoRefractoryRequired = R"doc()doc";

static const char *__doc_NeuronModels_RulkovMap =
R"doc(Rulkov Map neuron
The RulkovMap type is a map based neuron model based on  [Rulkov2002]_ but in
the 1-dimensional map form used in [Nowotny2005]_:

.. math::
    :nowrap:

    \begin{eqnarray*}
    V(t+\Delta t) &=& \left\{ \begin{array}{ll}
    V_{\rm spike} \Big(\frac{\alpha V_{\rm spike}}{V_{\rm spike}-V(t) \beta I_{\rm syn}} + y \Big) & V(t) \leq 0 \\
    V_{\rm spike} \big(\alpha+y\big) & V(t) \leq V_{\rm spike} \big(\alpha + y\big) \; \& \; V(t-\Delta t) \leq 0 \\
    -V_{\rm spike} & {\rm otherwise}
    \end{array}
    \right.
    \end{eqnarray*}


.. note::

    The `RulkovMap` type only works as intended for the single time step size of `DT`= 0.5.


The `RulkovMap` type has 2 variables:

- ``V`` - the membrane potential
- ``preV`` - the membrane potential at the previous time step

and it has 4 parameters:

- ``Vspike`` - determines the amplitude of spikes, typically -60mV
- ``alpha`` - determines the shape of the iteration function, typically :math:`\alpha `= 3
- ``y`` - "shift / excitation" parameter, also determines the iteration function,originally, y= -2.468
- ``beta`` - roughly speaking equivalent to the input resistance, i.e. it regulates the scale of the input into the neuron, typically :math:`\beta`= 2.64 :math:`{\rm M}\Omega`.


.. note::

    The initial values array for the `RulkovMap` type needs two entries for `V` and `preV` and the
    parameter array needs four entries for `Vspike`, `alpha`, `y` and `beta`,  *in that order*.)doc";

static const char *__doc_NeuronModels_RulkovMap_getDerivedParams = R"doc()doc";

static const char *__doc_NeuronModels_RulkovMap_getInstance = R"doc()doc";

static const char *__doc_NeuronModels_RulkovMap_getParams = R"doc()doc";

static const char *__doc_NeuronModels_RulkovMap_getSimCode = R"doc()doc";

static const char *__doc_NeuronModels_RulkovMap_getThresholdConditionCode = R"doc()doc";

static const char *__doc_NeuronModels_RulkovMap_getVars = R"doc()doc";

static const char *__doc_NeuronModels_SpikeSourceArray =
R"doc(Spike source array
A neuron which reads spike times from a global spikes array.
It has 2 variables:

- ``startSpike`` - Index of the next spike in the global array
- ``endSpike``   - Index of the spike next to the last in the globel array

and 1 extra global parameter:

- ``spikeTimes`` - Array with all spike times)doc";

static const char *__doc_NeuronModels_SpikeSourceArray_getExtraGlobalParams = R"doc()doc";

static const char *__doc_NeuronModels_SpikeSourceArray_getInstance = R"doc()doc";

static const char *__doc_NeuronModels_SpikeSourceArray_getResetCode = R"doc()doc";

static const char *__doc_NeuronModels_SpikeSourceArray_getSimCode = R"doc()doc";

static const char *__doc_NeuronModels_SpikeSourceArray_getThresholdConditionCode = R"doc()doc";

static const char *__doc_NeuronModels_SpikeSourceArray_getVars = R"doc()doc";

static const char *__doc_NeuronModels_SpikeSourceArray_isAutoRefractoryRequired = R"doc()doc";

static const char *__doc_NeuronModels_TraubMiles =
R"doc(Hodgkin-Huxley neurons with Traub & Miles algorithm.
This conductance based model has been taken from  [Traub1991]_ and can be described by the equations:

.. math::
    :nowrap:

    \begin{eqnarray*}
    C \frac{d V}{dt}  &=& -I_{{\rm Na}} -I_K-I_{{\rm leak}}-I_M-I_{i,DC}-I_{i,{\rm syn}}-I_i, \\
    I_{{\rm Na}}(t) &=& g_{{\rm Na}} m_i(t)^3 h_i(t)(V_i(t)-E_{{\rm Na}}) \\
    I_{{\rm K}}(t) &=& g_{{\rm K}} n_i(t)^4(V_i(t)-E_{{\rm K}})  \\
    \frac{dy(t)}{dt} &=& \alpha_y (V(t))(1-y(t))-\beta_y(V(t)) y(t),
    \end{eqnarray*}

where :math:`y_i= m, h, n`, and

.. math::
    :nowrap:

    \begin{eqnarray*}
    \alpha_n&=& 0.032(-50-V)/\big(\exp((-50-V)/5)-1\big)  \\
    \beta_n &=& 0.5\exp((-55-V)/40)  \\
    \alpha_m &=& 0.32(-52-V)/\big(\exp((-52-V)/4)-1\big)  \\
    \beta_m &=& 0.28(25+V)/\big(\exp((25+V)/5)-1\big)  \\
    \alpha_h &=& 0.128\exp((-48-V)/18)  \\
    \beta_h &=& 4/\big(\exp((-25-V)/5)+1\big).
    \end{eqnarray*}

and typical parameters are :math:`C=0.143` nF, :math:`g_{{\rm leak}}= 0.02672`
:math:`\mu`S, :math:`E_{{\rm leak}}= -63.563` mV, :math:`g_{{\rm Na}}=7.15` :math:`\mu`S,
:math:`E_{{\rm Na}}= 50` mV, :math:`g_{{\rm {\rm K}}}=1.43` :math:`\mu`S,
:math:`E_{{\rm K}}= -95` mV.

It has 4 variables:

- ``V`` - membrane potential E
- ``m`` - probability for Na channel activation m
- ``h`` - probability for not Na channel blocking h
- ``n`` - probability for K channel activation n

and 7 parameters:

- ``gNa`` - Na conductance in 1/(mOhms * cm^2)
- ``ENa`` - Na equi potential in mV
- ``gK`` - K conductance in 1/(mOhms * cm^2)
- ``EK`` - K equi potential in mV
- ``gl`` - Leak conductance in 1/(mOhms * cm^2)
- ``El`` - Leak equi potential in mV
- ``C`` - Membrane capacity density in muF/cm^2


.. note::

    Internally, the ordinary differential equations defining the model are integrated with a
    linear Euler algorithm and GeNN integrates 25 internal time steps for each neuron for each
    network time step. I.e., if the network is simulated at `DT= 0.1` ms, then the neurons are
    integrated with a linear Euler algorithm with `lDT= 0.004` ms.
    This variant uses IF statements to check for a value at which a singularity would be hit.
    If so, value calculated by L'Hospital rule is used.)doc";

static const char *__doc_NeuronModels_TraubMiles_getInstance = R"doc()doc";

static const char *__doc_NeuronModels_TraubMiles_getParams = R"doc()doc";

static const char *__doc_NeuronModels_TraubMiles_getSimCode = R"doc()doc";

static const char *__doc_NeuronModels_TraubMiles_getThresholdConditionCode = R"doc()doc";

static const char *__doc_NeuronModels_TraubMiles_getVars = R"doc()doc";

static const char *__doc_NeuronVarAdapter = R"doc()doc";

static const char *__doc_NeuronVarAdapter_NeuronVarAdapter = R"doc()doc";

static const char *__doc_NeuronVarAdapter_getDefs = R"doc()doc";

static const char *__doc_NeuronVarAdapter_getInitialisers = R"doc()doc";

static const char *__doc_NeuronVarAdapter_getLoc = R"doc()doc";

static const char *__doc_NeuronVarAdapter_getNumVarDelaySlots = R"doc()doc";

static const char *__doc_NeuronVarAdapter_getTarget = R"doc()doc";

static const char *__doc_NeuronVarAdapter_getVarDims = R"doc()doc";

static const char *__doc_NeuronVarAdapter_m_NG = R"doc()doc";

static const char *__doc_PostsynapticModels_Base = R"doc(Base class for all postsynaptic models)doc";

static const char *__doc_PostsynapticModels_Base_getHashDigest = R"doc(Update hash from model)doc";

static const char *__doc_PostsynapticModels_Base_getNeuronVarRefs = R"doc(Gets names and types of model variable references)doc";

static const char *__doc_PostsynapticModels_Base_getSimCode = R"doc()doc";

static const char *__doc_PostsynapticModels_Base_getVar = R"doc(Find the named variable)doc";

static const char *__doc_PostsynapticModels_Base_getVars = R"doc(Gets model variables)doc";

static const char *__doc_PostsynapticModels_Base_validate = R"doc(Validate names of parameters etc)doc";

static const char *__doc_PostsynapticModels_DeltaCurr =
R"doc(Simple delta current synapse.
Synaptic input provides a direct inject of instantaneous current)doc";

static const char *__doc_PostsynapticModels_DeltaCurr_getInstance = R"doc()doc";

static const char *__doc_PostsynapticModels_DeltaCurr_getSimCode = R"doc()doc";

static const char *__doc_PostsynapticModels_ExpCond =
R"doc(Exponential decay with synaptic input treated as a conductance value.
This model has no variables, two parameters:

- ``tau`` - Decay time constant
- ``E`` - Reversal potential

and a variable reference:

- ``V`` - A reference to the neuron's membrane voltage

``tau`` is used by the derived parameter ``expdecay`` which returns expf(-dt/tau).)doc";

static const char *__doc_PostsynapticModels_ExpCond_getDerivedParams = R"doc()doc";

static const char *__doc_PostsynapticModels_ExpCond_getInstance = R"doc()doc";

static const char *__doc_PostsynapticModels_ExpCond_getNeuronVarRefs = R"doc()doc";

static const char *__doc_PostsynapticModels_ExpCond_getParams = R"doc()doc";

static const char *__doc_PostsynapticModels_ExpCond_getSimCode = R"doc()doc";

static const char *__doc_PostsynapticModels_ExpCurr =
R"doc(Exponential decay with synaptic input treated as a current value.
This model has no variables and a single parameter:

- ``tau`` - Decay time constant)doc";

static const char *__doc_PostsynapticModels_ExpCurr_getDerivedParams = R"doc()doc";

static const char *__doc_PostsynapticModels_ExpCurr_getInstance = R"doc()doc";

static const char *__doc_PostsynapticModels_ExpCurr_getParams = R"doc()doc";

static const char *__doc_PostsynapticModels_ExpCurr_getSimCode = R"doc()doc";

static const char *__doc_PostsynapticModels_Init = R"doc()doc";

static const char *__doc_PostsynapticModels_Init_Init = R"doc()doc";

static const char *__doc_PostsynapticModels_Init_finalise = R"doc()doc";

static const char *__doc_PostsynapticModels_Init_getNeuronVarReferences = R"doc()doc";

static const char *__doc_PostsynapticModels_Init_getSimCodeTokens = R"doc()doc";

static const char *__doc_PostsynapticModels_Init_getVarInitialisers = R"doc()doc";

static const char *__doc_PostsynapticModels_Init_isRNGRequired = R"doc()doc";

static const char *__doc_PostsynapticModels_Init_isVarInitRequired = R"doc()doc";

static const char *__doc_PostsynapticModels_Init_m_NeuronVarReferences = R"doc()doc";

static const char *__doc_PostsynapticModels_Init_m_SimCodeTokens = R"doc()doc";

static const char *__doc_PostsynapticModels_Init_m_VarInitialisers = R"doc()doc";

static const char *__doc_Runtime_ArrayBase = R"doc()doc";

static const char *__doc_Runtime_ArrayBase_2 = R"doc()doc";

static const char *__doc_Runtime_Runtime = R"doc()doc";

static const char *__doc_Runtime_Runtime_2 = R"doc()doc";

static const char *__doc_Runtime_StateBase = R"doc()doc";

static const char *__doc_Snippet_Base = R"doc()doc";

static const char *__doc_Snippet_Base_DerivedParam = R"doc(A derived parameter has a name and a function for obtaining its value)doc";

static const char *__doc_Snippet_Base_DerivedParam_DerivedParam = R"doc()doc";

static const char *__doc_Snippet_Base_DerivedParam_DerivedParam_2 = R"doc()doc";

static const char *__doc_Snippet_Base_DerivedParam_func = R"doc()doc";

static const char *__doc_Snippet_Base_DerivedParam_name = R"doc()doc";

static const char *__doc_Snippet_Base_DerivedParam_operator_eq = R"doc()doc";

static const char *__doc_Snippet_Base_DerivedParam_type = R"doc()doc";

static const char *__doc_Snippet_Base_EGP = R"doc(An extra global parameter has a name and a type)doc";

static const char *__doc_Snippet_Base_EGP_EGP = R"doc()doc";

static const char *__doc_Snippet_Base_EGP_EGP_2 = R"doc()doc";

static const char *__doc_Snippet_Base_EGP_name = R"doc()doc";

static const char *__doc_Snippet_Base_EGP_operator_eq = R"doc()doc";

static const char *__doc_Snippet_Base_EGP_type = R"doc()doc";

static const char *__doc_Snippet_Base_Param = R"doc(A parameter has a name and a type)doc";

static const char *__doc_Snippet_Base_ParamVal = R"doc(Additional input variables, row state variables and other things have a name, a type and an initial value)doc";

static const char *__doc_Snippet_Base_ParamVal_ParamVal = R"doc()doc";

static const char *__doc_Snippet_Base_ParamVal_ParamVal_2 = R"doc()doc";

static const char *__doc_Snippet_Base_ParamVal_name = R"doc()doc";

static const char *__doc_Snippet_Base_ParamVal_operator_eq = R"doc()doc";

static const char *__doc_Snippet_Base_ParamVal_type = R"doc()doc";

static const char *__doc_Snippet_Base_ParamVal_value = R"doc()doc";

static const char *__doc_Snippet_Base_Param_Param = R"doc()doc";

static const char *__doc_Snippet_Base_Param_Param_2 = R"doc()doc";

static const char *__doc_Snippet_Base_Param_Param_3 = R"doc()doc";

static const char *__doc_Snippet_Base_Param_name = R"doc()doc";

static const char *__doc_Snippet_Base_Param_operator_eq = R"doc()doc";

static const char *__doc_Snippet_Base_Param_type = R"doc()doc";

static const char *__doc_Snippet_Base_getDerivedParams =
R"doc(Gets names of derived model parameters and the function objects to call to
Calculate their value from a vector of model parameter values)doc";

static const char *__doc_Snippet_Base_getExtraGlobalParam = R"doc(Find the named extra global parameter)doc";

static const char *__doc_Snippet_Base_getExtraGlobalParams =
R"doc(Gets names and types (as strings) of additional
per-population parameters for the snippet)doc";

static const char *__doc_Snippet_Base_getNamed = R"doc()doc";

static const char *__doc_Snippet_Base_getParam = R"doc(Find the named parameter)doc";

static const char *__doc_Snippet_Base_getParams = R"doc(Gets names and types of (independent) model parameters)doc";

static const char *__doc_Snippet_Base_updateHash = R"doc()doc";

static const char *__doc_Snippet_Base_validate = R"doc(Validate names of parameters etc)doc";

static const char *__doc_Snippet_DynamicParameterContainer = R"doc()doc";

static const char *__doc_Snippet_DynamicParameterContainer_get = R"doc()doc";

static const char *__doc_Snippet_DynamicParameterContainer_m_Dynamic = R"doc()doc";

static const char *__doc_Snippet_DynamicParameterContainer_set = R"doc()doc";

static const char *__doc_Snippet_DynamicParameterContainer_updateHash = R"doc()doc";

static const char *__doc_Snippet_Init =
R"doc(Class used to bind together everything required to utilize a snippet
1. A pointer to a variable initialisation snippet
2. The parameters required to control the variable initialisation snippet)doc";

static const char *__doc_Snippet_Init_Init = R"doc()doc";

static const char *__doc_Snippet_Init_finalise = R"doc()doc";

static const char *__doc_Snippet_Init_getDerivedParams = R"doc()doc";

static const char *__doc_Snippet_Init_getHashDigest = R"doc()doc";

static const char *__doc_Snippet_Init_getParams = R"doc()doc";

static const char *__doc_Snippet_Init_getSnippet = R"doc()doc";

static const char *__doc_Snippet_Init_m_DerivedParams = R"doc()doc";

static const char *__doc_Snippet_Init_m_Params = R"doc()doc";

static const char *__doc_Snippet_Init_m_Snippet = R"doc()doc";

static const char *__doc_Snippet_updateHash = R"doc()doc";

static const char *__doc_Snippet_updateHash_2 = R"doc()doc";

static const char *__doc_Snippet_updateHash_3 = R"doc()doc";

static const char *__doc_Snippet_updateHash_4 = R"doc()doc";

static const char *__doc_SynapseGroup = R"doc()doc";

static const char *__doc_SynapseGroup_2 = R"doc()doc";

static const char *__doc_SynapseGroupInternal = R"doc()doc";

static const char *__doc_SynapseGroupInternal_2 = R"doc()doc";

static const char *__doc_SynapseGroupInternal_3 = R"doc()doc";

static const char *__doc_SynapseGroupInternal_4 = R"doc()doc";

static const char *__doc_SynapseGroupInternal_5 = R"doc()doc";

static const char *__doc_SynapseGroupInternal_SynapseGroupInternal = R"doc()doc";

static const char *__doc_SynapseGroup_ParallelismHint = R"doc(Hints to backends as to what parallelism strategy to use for this synapse group)doc";

static const char *__doc_SynapseGroup_ParallelismHint_POSTSYNAPTIC =
R"doc(GPU threads loop over spikes and handle all connectivity associated with
a postsynaptic neuron or column of sparse connectivity.
Generally, this is the most efficient approach and memory accesses are
coalesced and, while atomic operations are used, there should be minimal
conflicts between them.)doc";

static const char *__doc_SynapseGroup_ParallelismHint_PRESYNAPTIC =
R"doc(GPU threads
If spike rates are high, this can extract more parallelism but there is an
overhead to launching numerous threads with no spike to process and this
approach does not result in well-coalesced memory accesses.)doc";

static const char *__doc_SynapseGroup_ParallelismHint_WORD_PACKED_BITMASK =
R"doc(Rather than processing SynapseMatrixConnectivity::BITMASK connectivity
using one thread per postsynaptic neuron and doing nothing when a zero
is encountered, process 32 bits of bitmask using each thread.
On the single-threaded CPU backend and when simulating models with
significantly more neurons than the target GPU has threads,
this is likely to improve performance.)doc";

static const char *__doc_SynapseGroup_SynapseGroup = R"doc()doc";

static const char *__doc_SynapseGroup_SynapseGroup_2 = R"doc()doc";

static const char *__doc_SynapseGroup_SynapseGroup_3 = R"doc()doc";

static const char *__doc_SynapseGroup_addCustomUpdateReference = R"doc(Add reference to custom connectivity update, referencing this synapse group)doc";

static const char *__doc_SynapseGroup_addCustomUpdateReference_2 = R"doc(Add reference to custom update, referencing this synapse group)doc";

static const char *__doc_SynapseGroup_areAnyWUPostVarHeterogeneouslyDelayed = R"doc(Are any postsynaptic weight update model variable heterogeneously delayed?)doc";

static const char *__doc_SynapseGroup_canPSBeFused = R"doc(Can postsynaptic update component of this synapse group be safely fused with others whose hashes match so only one needs simulating at all?)doc";

static const char *__doc_SynapseGroup_canPreOutputBeFused = R"doc(Can presynaptic output component of this synapse group's weight update model be safely fused with other whose hashes match so only one needs simulating at all?)doc";

static const char *__doc_SynapseGroup_canSpikeBeFused = R"doc(Can spike generation for this synapse group be safely fused?)doc";

static const char *__doc_SynapseGroup_canWUMPrePostUpdateBeFused = R"doc(Can presynaptic/postsynaptic update component of this synapse group's weight update model be safely fused with other whose hashes match so only one needs simulating at all?)doc";

static const char *__doc_SynapseGroup_canWUSpikeEventBeFused = R"doc(Can spike event generation for this synapse group be safely fused?)doc";

static const char *__doc_SynapseGroup_finalise = R"doc()doc";

static const char *__doc_SynapseGroup_getAxonalDelaySteps = R"doc()doc";

static const char *__doc_SynapseGroup_getBackPropDelaySteps = R"doc()doc";

static const char *__doc_SynapseGroup_getConnectivityHostInitHashDigest =
R"doc(Generate hash of host connectivity initialisation of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getConnectivityInitHashDigest =
R"doc(Generate hash of connectivity initialisation of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getCustomConnectivityUpdateReferences =
R"doc(Gets custom connectivity updates which reference this synapse group
Because, if connectivity is sparse, all groups share connectivity this is required if connectivity changes.)doc";

static const char *__doc_SynapseGroup_getCustomUpdateReferences =
R"doc(Gets custom updates which reference this synapse group
Because, if connectivity is sparse, all groups share connectivity this is required if connectivity changes.)doc";

static const char *__doc_SynapseGroup_getDendriticDelayLocation = R"doc(Get variable mode used for this synapse group's dendritic delay buffers)doc";

static const char *__doc_SynapseGroup_getDendriticDelayUpdateHashDigest = R"doc()doc";

static const char *__doc_SynapseGroup_getFusedPSTarget = R"doc()doc";

static const char *__doc_SynapseGroup_getFusedPreOutputTarget = R"doc()doc";

static const char *__doc_SynapseGroup_getFusedSpikeEventTarget = R"doc()doc";

static const char *__doc_SynapseGroup_getFusedSpikeTarget = R"doc()doc";

static const char *__doc_SynapseGroup_getFusedWUPostTarget = R"doc()doc";

static const char *__doc_SynapseGroup_getFusedWUPreTarget = R"doc()doc";

static const char *__doc_SynapseGroup_getKernelSize = R"doc()doc";

static const char *__doc_SynapseGroup_getKernelSizeFlattened = R"doc()doc";

static const char *__doc_SynapseGroup_getMatrixType = R"doc()doc";

static const char *__doc_SynapseGroup_getMaxConnections = R"doc()doc";

static const char *__doc_SynapseGroup_getMaxDendriticDelayTimesteps = R"doc()doc";

static const char *__doc_SynapseGroup_getMaxSourceConnections = R"doc()doc";

static const char *__doc_SynapseGroup_getName = R"doc()doc";

static const char *__doc_SynapseGroup_getNumThreadsPerSpike = R"doc()doc";

static const char *__doc_SynapseGroup_getOutputLocation = R"doc(Get variable mode used for outputs from this synapse group e.g. outPre and outPost)doc";

static const char *__doc_SynapseGroup_getPSExtraGlobalParamLocation = R"doc(Get location of postsynaptic model extra global parameter by name)doc";

static const char *__doc_SynapseGroup_getPSFuseHashDigest =
R"doc(Generate hash of postsynaptic update component of this synapse group with additional components to ensure PSMs
with matching hashes can not only be simulated using the same code, but fused so only one needs simulating at all
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getPSHashDigest =
R"doc(Generate hash of postsynaptic update component of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getPSInitHashDigest =
R"doc(Generate hash of postsynaptic model variable initialisation component of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getPSInitialiser = R"doc()doc";

static const char *__doc_SynapseGroup_getPSNeuronVarReferences = R"doc(Get 'resolved' variable references to neurons variables used in postsynaptic update model)doc";

static const char *__doc_SynapseGroup_getPSVarLocation = R"doc(Get location of postsynaptic model state variable)doc";

static const char *__doc_SynapseGroup_getParallelismHint = R"doc()doc";

static const char *__doc_SynapseGroup_getPostTargetVar =
R"doc(Get name of neuron input variable postsynaptic model will target
This will either be 'Isyn' or the name of one of the postsynaptic neuron's additional input variables.)doc";

static const char *__doc_SynapseGroup_getPreOutputHashDigest =
R"doc(Generate hash of presynaptic output update component of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getPreOutputInitHashDigest =
R"doc(Generate hash of presynaptic output initialization component of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getPreTargetVar =
R"doc(Get name of neuron input variable which a presynaptic output specified with $(addToPre) will target
This will either be 'Isyn' or the name of one of the presynaptic neuron's additional input variables.)doc";

static const char *__doc_SynapseGroup_getSparseConnectivityInitialiser = R"doc()doc";

static const char *__doc_SynapseGroup_getSparseConnectivityLocation = R"doc(Get variable mode used for sparse connectivity)doc";

static const char *__doc_SynapseGroup_getSparseIndType = R"doc(Get the type to use for sparse connectivity indices for synapse group)doc";

static const char *__doc_SynapseGroup_getSpikeHashDigest =
R"doc(Generate hash of presynaptic or postsynaptic spike generation component of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getSrcNeuronGroup = R"doc()doc";

static const char *__doc_SynapseGroup_getSrcNeuronGroup_2 = R"doc()doc";

static const char *__doc_SynapseGroup_getToeplitzConnectivityInitialiser = R"doc()doc";

static const char *__doc_SynapseGroup_getTrgNeuronGroup = R"doc()doc";

static const char *__doc_SynapseGroup_getTrgNeuronGroup_2 = R"doc()doc";

static const char *__doc_SynapseGroup_getVarLocationHashDigest = R"doc()doc";

static const char *__doc_SynapseGroup_getWUExtraGlobalParamLocation = R"doc(Get location of weight update model extra global parameter)doc";

static const char *__doc_SynapseGroup_getWUHashDigest =
R"doc(Generate hash of weight update component of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getWUInitHashDigest =
R"doc(Generate hash of initialisation component of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getWUInitialiser = R"doc()doc";

static const char *__doc_SynapseGroup_getWUMPSMVarReferences = R"doc(Get 'resolved' variable references to presynaptic model variables used in weight update model)doc";

static const char *__doc_SynapseGroup_getWUMPostNeuronVarReferences = R"doc(Get 'resolved' variable references to presynaptic neurons variables used in weight update model)doc";

static const char *__doc_SynapseGroup_getWUMPreNeuronVarReferences = R"doc(Get 'resolved' variable references to presynaptic neuron variables used in weight update model)doc";

static const char *__doc_SynapseGroup_getWUPostVarLocation = R"doc(Get location of weight update model postsynaptic state variable)doc";

static const char *__doc_SynapseGroup_getWUPreInitHashDigest =
R"doc(Generate hash of presynaptic variable initialisation component of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getWUPrePostFuseHashDigest =
R"doc(Generate hash of presynaptic or postsynaptic weight update component of this synapse group with additional components to ensure those
with matching hashes can not only be simulated using the same code, but fused so only one needs simulating at all
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getWUPrePostHashDigest =
R"doc(Generate hash of presynaptic or postsynaptic update component of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getWUPrePostInitHashDigest =
R"doc(Generate hash of presynaptic or postsynaptic variable initialisation component of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getWUPreVarLocation = R"doc(Get location of weight update model presynaptic state variable)doc";

static const char *__doc_SynapseGroup_getWUSpikeEventFuseHashDigest =
R"doc(Generate hash of presynaptic or postsynaptic spike event generation of this synapse group with additional components to ensure PSMs
with matching hashes can not only be simulated using the same code, but fused so only one needs simulating at all
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getWUSpikeEventHashDigest =
R"doc(Generate hash of presynaptic or postsynaptic spike event generation component of this synapse group
NOTE: this can only be called after model is finalized)doc";

static const char *__doc_SynapseGroup_getWUVarLocation = R"doc(Get location of weight update model synaptic state variable)doc";

static const char *__doc_SynapseGroup_isDendriticOutputDelayRequired = R"doc(Is this synapse group's output dendritically delayed?)doc";

static const char *__doc_SynapseGroup_isPSModelFused = R"doc(Has this synapse group's postsynaptic model been fused with those from other synapse groups?)doc";

static const char *__doc_SynapseGroup_isPSParamDynamic = R"doc(Is postsynaptic model parameter dynamic i.e. it can be changed at runtime)doc";

static const char *__doc_SynapseGroup_isPSVarInitRequired = R"doc(Is var init code required for any variables in this synapse group's postsynaptic update model?)doc";

static const char *__doc_SynapseGroup_isPostSpikeEventFused = R"doc(Has this synapse group's postsynaptic spike event generation been fused with those from other synapse groups?)doc";

static const char *__doc_SynapseGroup_isPostSpikeEventRequired = R"doc(Does synapse group need to handle postsynaptic spike-like events?)doc";

static const char *__doc_SynapseGroup_isPostSpikeEventTimeRequired = R"doc(Are postsynaptic spike-like-event times needed?)doc";

static const char *__doc_SynapseGroup_isPostSpikeFused = R"doc(Has this synapse group's postsynaptic spike generation been fused with those from other synapse groups?)doc";

static const char *__doc_SynapseGroup_isPostSpikeRequired = R"doc(Does synapse group need to handle postsynaptic spikes?)doc";

static const char *__doc_SynapseGroup_isPostSpikeTimeRequired = R"doc(Are postsynaptic spike times needed?)doc";

static const char *__doc_SynapseGroup_isPostTimeReferenced = R"doc(Is the postsynaptic time variable with identifier referenced in weight update model?)doc";

static const char *__doc_SynapseGroup_isPostsynapticOutputRequired = R"doc(Does this synapse group provide postsynaptic output?)doc";

static const char *__doc_SynapseGroup_isPreSpikeEventFused = R"doc(Has this synapse group's presynaptic spike event generation been fused with those from other synapse groups?)doc";

static const char *__doc_SynapseGroup_isPreSpikeEventRequired = R"doc(Does synapse group need to handle presynaptic spike-like events?)doc";

static const char *__doc_SynapseGroup_isPreSpikeEventTimeRequired = R"doc(Are presynaptic spike-like-event times needed?)doc";

static const char *__doc_SynapseGroup_isPreSpikeFused = R"doc(Has this synapse group's presynaptic spike generation been fused with those from other synapse groups?)doc";

static const char *__doc_SynapseGroup_isPreSpikeRequired = R"doc(Does synapse group need to handle 'true' spikes?)doc";

static const char *__doc_SynapseGroup_isPreSpikeTimeRequired = R"doc(Are presynaptic spike times needed?)doc";

static const char *__doc_SynapseGroup_isPreTimeReferenced = R"doc(Is the presynaptic time variable with identifier referenced in weight update model?)doc";

static const char *__doc_SynapseGroup_isPresynapticOutputRequired = R"doc(Does this synapse group provide presynaptic output?)doc";

static const char *__doc_SynapseGroup_isPrevPostSpikeEventTimeRequired = R"doc(Are PREVIOUS postsynaptic spike-event times needed?)doc";

static const char *__doc_SynapseGroup_isPrevPostSpikeTimeRequired = R"doc(Are PREVIOUS postsynaptic spike times needed?)doc";

static const char *__doc_SynapseGroup_isPrevPreSpikeEventTimeRequired = R"doc(Are PREVIOUS presynaptic spike-like-event times needed?)doc";

static const char *__doc_SynapseGroup_isPrevPreSpikeTimeRequired = R"doc(Are PREVIOUS presynaptic spike times needed?)doc";

static const char *__doc_SynapseGroup_isProceduralConnectivityRNGRequired = R"doc(Does this synapse group require an RNG to generate procedural connectivity?)doc";

static const char *__doc_SynapseGroup_isSparseConnectivityInitRequired = R"doc(Is sparse connectivity initialisation code required for this synapse group?)doc";

static const char *__doc_SynapseGroup_isWUInitRNGRequired = R"doc(Does this synapse group require an RNG for it's weight update init code?)doc";

static const char *__doc_SynapseGroup_isWUParamDynamic = R"doc(Is weight update model parameter dynamic i.e. it can be changed at runtime)doc";

static const char *__doc_SynapseGroup_isWUPostModelFused =
R"doc(Has the postsynaptic component of this synapse group's weight update
model been fused with those from other synapse groups?)doc";

static const char *__doc_SynapseGroup_isWUPostVarHeterogeneouslyDelayed = R"doc(Is the named postsynaptic weight update model variable heterogeneously delayed?)doc";

static const char *__doc_SynapseGroup_isWUPostVarInitRequired = R"doc(Is var init code required for any presynaptic variables in this synapse group's weight update model?)doc";

static const char *__doc_SynapseGroup_isWUPreModelFused =
R"doc(Has the presynaptic component of this synapse group's weight update
model been fused with those from other synapse groups?)doc";

static const char *__doc_SynapseGroup_isWUPreVarInitRequired = R"doc(Is var init code required for any presynaptic variables in this synapse group's weight update model?)doc";

static const char *__doc_SynapseGroup_isWUVarInitRequired = R"doc(Is var init code required for any variables in this synapse group's weight update model?)doc";

static const char *__doc_SynapseGroup_isZeroCopyEnabled = R"doc()doc";

static const char *__doc_SynapseGroup_m_AxonalDelaySteps = R"doc(Global synaptic conductance delay for the group (in time steps))doc";

static const char *__doc_SynapseGroup_m_BackPropDelaySteps = R"doc(Global backpropagation delay for postsynaptic spikes to synapse (in time steps))doc";

static const char *__doc_SynapseGroup_m_CustomConnectivityUpdateReferences =
R"doc(Custom connectivity updates which reference this synapse group.
Because, if connectivity is sparse, all groups share connectivity this is required if connectivity changes.)doc";

static const char *__doc_SynapseGroup_m_CustomUpdateReferences =
R"doc(Custom updates which reference this synapse group.
Because, if connectivity is sparse, all groups share connectivity this is required if connectivity changes.)doc";

static const char *__doc_SynapseGroup_m_DendriticDelayLocation =
R"doc(Location of this synapse group's dendritic delay buffers.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_m_FusedPSTarget =
R"doc(Synapse group postsynaptic model has been fused with.
If this is nullptr, postsynaptic model has not been fused)doc";

static const char *__doc_SynapseGroup_m_FusedPostSpikeEventTarget =
R"doc(Synapse group postsynaptic spike event generation has been fused with.
If this is nullptr, postsynaptic spike event generation has not been fused)doc";

static const char *__doc_SynapseGroup_m_FusedPostSpikeTarget =
R"doc(Synapse group postsynaptic spike generation has been fused with.
If this is nullptr, presynaptic spike generation has not been fused)doc";

static const char *__doc_SynapseGroup_m_FusedPreOutputTarget =
R"doc(Synapse group presynaptic output has been fused with.
If this is nullptr, presynaptic output has not been fused)doc";

static const char *__doc_SynapseGroup_m_FusedPreSpikeEventTarget =
R"doc(Synapse group presynaptic spike event generation has been fused with.
If this is nullptr, presynaptic spike event generation has not been fused)doc";

static const char *__doc_SynapseGroup_m_FusedPreSpikeTarget =
R"doc(Synapse group presynaptic spike generation has been fused with.
If this is nullptr, presynaptic spike generation has not been fused)doc";

static const char *__doc_SynapseGroup_m_FusedWUPostTarget =
R"doc(Synapse group postsynaptic weight update has been fused with.
If this is nullptr, postsynaptic weight update  has not been fused)doc";

static const char *__doc_SynapseGroup_m_FusedWUPreTarget =
R"doc(Synapse group presynaptic weight update has been fused with.
If this is nullptr, presynaptic weight update has not been fused)doc";

static const char *__doc_SynapseGroup_m_HeterogeneouslyDelayedWUPostVars =
R"doc(Set of names of postsynaptic weight update
model variables which are heterogeneously delayed)doc";

static const char *__doc_SynapseGroup_m_KernelSize = R"doc(Kernel size)doc";

static const char *__doc_SynapseGroup_m_MatrixType = R"doc(Connectivity type of synapses)doc";

static const char *__doc_SynapseGroup_m_MaxConnections = R"doc(Maximum number of target neurons any source neuron can connect to)doc";

static const char *__doc_SynapseGroup_m_MaxDendriticDelayTimesteps = R"doc(Maximum dendritic delay timesteps supported for synapses in this population)doc";

static const char *__doc_SynapseGroup_m_MaxSourceConnections = R"doc(Maximum number of source neurons any target neuron can connect to)doc";

static const char *__doc_SynapseGroup_m_Name = R"doc(Name of the synapse group)doc";

static const char *__doc_SynapseGroup_m_NarrowSparseIndEnabled = R"doc(Should narrow i.e. less than 32-bit types be used for sparse matrix indices)doc";

static const char *__doc_SynapseGroup_m_NumThreadsPerSpike = R"doc(How many threads GPU implementation use to process each spike when parallelised presynaptically)doc";

static const char *__doc_SynapseGroup_m_OutputLocation =
R"doc(Location of outputs from this synapse group e.g. outPre and outPost.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_m_PSDynamicParams = R"doc(Data structure tracking whether postsynaptic model parameters are dynamic or not)doc";

static const char *__doc_SynapseGroup_m_PSExtraGlobalParamLocation =
R"doc(Location of postsynaptic model extra global parameters.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_m_PSInitialiser = R"doc(Initialiser used for creating postsynaptic update model)doc";

static const char *__doc_SynapseGroup_m_PSNeuronVarReferences = R"doc('Resolved' variable references to neurons variables used in postsynaptic update model)doc";

static const char *__doc_SynapseGroup_m_PSVarLocation =
R"doc(Location of postsynaptic model variables.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_m_ParallelismHint = R"doc(Hint as to how synapse group should be parallelised)doc";

static const char *__doc_SynapseGroup_m_PostTargetVar =
R"doc(Name of neuron input variable postsynaptic model will target.
This should either be 'Isyn' or the name of one of the postsynaptic neuron's additional input variables.)doc";

static const char *__doc_SynapseGroup_m_PreTargetVar =
R"doc(Name of neuron input variable a presynaptic output specified with $(addToPre) will target.
This will either be 'Isyn' or the name of one of the presynaptic neuron's additional input variables.)doc";

static const char *__doc_SynapseGroup_m_SparseConnectivityInitialiser = R"doc(Initialiser used for creating sparse connectivity)doc";

static const char *__doc_SynapseGroup_m_SparseConnectivityLocation =
R"doc(Location of sparse connectivity.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_m_SrcNeuronGroup = R"doc(Pointer to presynaptic neuron group)doc";

static const char *__doc_SynapseGroup_m_ToeplitzConnectivityInitialiser = R"doc(Initialiser used for creating toeplitz connectivity)doc";

static const char *__doc_SynapseGroup_m_TrgNeuronGroup = R"doc(Pointer to postsynaptic neuron group)doc";

static const char *__doc_SynapseGroup_m_WUDynamicParams = R"doc(Data structure tracking whether weight update model parameters are dynamic or not)doc";

static const char *__doc_SynapseGroup_m_WUExtraGlobalParamLocation =
R"doc(Location of weight update model extra global parameters.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_m_WUInitialiser = R"doc(Initialiser used for creating weight update model)doc";

static const char *__doc_SynapseGroup_m_WUMPSMVarReferences = R"doc('Resolved' variable references to postsynaptic model variables used in weight update model)doc";

static const char *__doc_SynapseGroup_m_WUMPostNeuronVarReferences = R"doc('Resolved' variable references to presynaptic neurons variables used in weight update model)doc";

static const char *__doc_SynapseGroup_m_WUMPreNeuronVarReferences = R"doc('Resolved' variable references to presynaptic neuron variables used in weight update model)doc";

static const char *__doc_SynapseGroup_m_WUPostVarLocation =
R"doc(Location of individual postsynaptic state variables.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_m_WUPreVarLocation =
R"doc(Location of individual presynaptic state variables.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_m_WUVarLocation =
R"doc(Location of individual per-synapse state variables.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_setAxonalDelaySteps = R"doc(Sets the number of delay steps used to delay events and variables between presynaptic neuron and synapse)doc";

static const char *__doc_SynapseGroup_setBackPropDelaySteps = R"doc(Sets the number of delay steps used to delay events and variables between postsynaptic neuron and synapse)doc";

static const char *__doc_SynapseGroup_setDendriticDelayLocation = R"doc(Set variable mode used for this synapse group's dendritic delay buffers)doc";

static const char *__doc_SynapseGroup_setFusedPSTarget = R"doc()doc";

static const char *__doc_SynapseGroup_setFusedPreOutputTarget = R"doc()doc";

static const char *__doc_SynapseGroup_setFusedSpikeEventTarget = R"doc()doc";

static const char *__doc_SynapseGroup_setFusedSpikeTarget = R"doc()doc";

static const char *__doc_SynapseGroup_setFusedWUPrePostTarget = R"doc()doc";

static const char *__doc_SynapseGroup_setMaxConnections = R"doc(Sets the maximum number of target neurons any source neurons can connect to)doc";

static const char *__doc_SynapseGroup_setMaxDendriticDelayTimesteps = R"doc(Sets the maximum dendritic delay for synapses in this synapse group)doc";

static const char *__doc_SynapseGroup_setMaxSourceConnections = R"doc(Sets the maximum number of source neurons any target neuron can connect to)doc";

static const char *__doc_SynapseGroup_setNarrowSparseIndEnabled = R"doc(Enables or disables using narrow i.e. less than 32-bit types for sparse matrix indices)doc";

static const char *__doc_SynapseGroup_setNumThreadsPerSpike = R"doc(Provide hint as to how many threads SIMT backend might use to process each spike if PRESYNAPTIC parallelism is selected)doc";

static const char *__doc_SynapseGroup_setOutputLocation =
R"doc(Set location of variables used for outputs from this synapse group e.g. outPre and outPost.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_setPSExtraGlobalParamLocation =
R"doc(Set location of postsynaptic model extra global parameter.
This is ignored for simulations on hardware with a single memory space.)doc";

static const char *__doc_SynapseGroup_setPSParamDynamic = R"doc(Set whether weight update model parameter is dynamic or not i.e. it can be changed at runtime)doc";

static const char *__doc_SynapseGroup_setPSVarLocation =
R"doc(Set location of postsynaptic model state variable.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_setParallelismHint = R"doc(Provide a hint as to how this synapse group should be parallelised)doc";

static const char *__doc_SynapseGroup_setPostTargetVar =
R"doc(Set name of neuron input variable postsynaptic model will target.
This should either be 'Isyn' or the name of one of the postsynaptic neuron's additional input variables.)doc";

static const char *__doc_SynapseGroup_setPreTargetVar =
R"doc(Set name of neuron input variable addToPost(..) commands will target.
This should either be 'Isyn' or the name of one of the presynaptic neuron's additional input variables.)doc";

static const char *__doc_SynapseGroup_setSparseConnectivityLocation =
R"doc(Set variable mode used for sparse connectivity.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_setWUExtraGlobalParamLocation =
R"doc(Set location of weight update model extra global parameter.
This is ignored for simulations on hardware with a single memory space.)doc";

static const char *__doc_SynapseGroup_setWUParamDynamic = R"doc(Set whether weight update model parameter is dynamic or not i.e. it can be changed at runtime)doc";

static const char *__doc_SynapseGroup_setWUPostVarLocation =
R"doc(Set location of weight update model postsynaptic state variable.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_setWUPreVarLocation =
R"doc(Set location of weight update model presynaptic state variable.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseGroup_setWUVarLocation =
R"doc(Set location of weight update model state variable.
This is ignored for simulations on hardware with a single memory space)doc";

static const char *__doc_SynapseMatrixConnectivity = R"doc(Flags defining how synaptic connectivity is represented)doc";

static const char *__doc_SynapseMatrixConnectivity_BITMASK = R"doc(Connectivity is sparse and stored using a bitmask.)doc";

static const char *__doc_SynapseMatrixConnectivity_DENSE = R"doc(Connectivity is dense with a synapse between each pair of pre and postsynaptic neurons)doc";

static const char *__doc_SynapseMatrixConnectivity_PROCEDURAL = R"doc(Connectivity is generated on the fly using a sparse connectivity initialisation snippet)doc";

static const char *__doc_SynapseMatrixConnectivity_SPARSE = R"doc(Connectivity is sparse and stored using a compressed sparse row data structure)doc";

static const char *__doc_SynapseMatrixConnectivity_TOEPLITZ = R"doc(Connectivity is generated on the fly using a Toeplitz connectivity initialisation snippet)doc";

static const char *__doc_SynapseMatrixType = R"doc(Supported combinations of SynapticMatrixConnectivity and SynapticMatrixWeight)doc";

static const char *__doc_SynapseMatrixType_BITMASK =
R"doc(Connectivity is stored as a bitmask.
For moderately sparse (>3%) connectivity, this uses the least memory. However, connectivity of this sort cannot
have any accompanying state variables. Which algorithm is used for propagating spikes through BITMASK connectivity can be hinted via
SynapseGroup::ParallelismHint.)doc";

static const char *__doc_SynapseMatrixType_DENSE = R"doc(Synaptic matrix is dense and synaptic state variables are stored individually in memory.)doc";

static const char *__doc_SynapseMatrixType_DENSE_PROCEDURALG = R"doc(Synaptic matrix is dense and all synaptic state variables must either be constant or generated on the fly using their variable initialisation snippets.)doc";

static const char *__doc_SynapseMatrixType_PROCEDURAL =
R"doc(Sparse synaptic connectivity is generated on the fly using a sparse connectivity initialisation snippet and  all state variables must be either constant or generated on the fly using variable initialisation snippets.
Synaptic connectivity of this sort requires very little memory allowing extremely large models to be simulated on a single GPU.)doc";

static const char *__doc_SynapseMatrixType_PROCEDURAL_KERNELG = R"doc(Sparse synaptic connectivity is generated on the fly using a sparse connectivity initialisation snippet and state variables are stored in a shared kernel.)doc";

static const char *__doc_SynapseMatrixType_SPARSE =
R"doc(Connectivity is stored using a compressed sparse row data structure and synaptic state variables are stored individually in memory.
This is the most efficient choice for very sparse unstructured connectivity or if synaptic state variables are required.)doc";

static const char *__doc_SynapseMatrixType_TOEPLITZ =
R"doc(Sparse structured connectivity is generated on the fly a Toeplitz connectivity initialisation snippet and state variables are stored in a shared kernel.
This is the most efficient choice for convolution-like connectivity)doc";

static const char *__doc_SynapseMatrixWeight = R"doc(Flags defining how synaptic state variables are stored)doc";

static const char *__doc_SynapseMatrixWeight_INDIVIDUAL = R"doc(Synaptic state variables are stored individually in memory)doc";

static const char *__doc_SynapseMatrixWeight_KERNEL =
R"doc(Synaptic state variables are stored in a kernel which is shared between synapses in
a manner defined by either a Toeplitz or sparse connectivity initialisation snippet)doc";

static const char *__doc_SynapseMatrixWeight_PROCEDURAL = R"doc(Synaptic state is generated on the fly using a sparse connectivity initialisation snippet)doc";

static const char *__doc_SynapsePSMEGPAdapter = R"doc()doc";

static const char *__doc_SynapsePSMEGPAdapter_SynapsePSMEGPAdapter = R"doc()doc";

static const char *__doc_SynapsePSMEGPAdapter_getDefs = R"doc()doc";

static const char *__doc_SynapsePSMEGPAdapter_getLoc = R"doc()doc";

static const char *__doc_SynapsePSMEGPAdapter_m_SG = R"doc()doc";

static const char *__doc_SynapsePSMNeuronVarRefAdapter = R"doc()doc";

static const char *__doc_SynapsePSMNeuronVarRefAdapter_SynapsePSMNeuronVarRefAdapter = R"doc()doc";

static const char *__doc_SynapsePSMNeuronVarRefAdapter_getDefs = R"doc()doc";

static const char *__doc_SynapsePSMNeuronVarRefAdapter_getInitialisers = R"doc()doc";

static const char *__doc_SynapsePSMNeuronVarRefAdapter_m_SG = R"doc()doc";

static const char *__doc_SynapsePSMVarAdapter = R"doc()doc";

static const char *__doc_SynapsePSMVarAdapter_SynapsePSMVarAdapter = R"doc()doc";

static const char *__doc_SynapsePSMVarAdapter_getDefs = R"doc()doc";

static const char *__doc_SynapsePSMVarAdapter_getInitialisers = R"doc()doc";

static const char *__doc_SynapsePSMVarAdapter_getLoc = R"doc()doc";

static const char *__doc_SynapsePSMVarAdapter_getNumVarDelaySlots = R"doc()doc";

static const char *__doc_SynapsePSMVarAdapter_getTarget = R"doc()doc";

static const char *__doc_SynapsePSMVarAdapter_getVarDims = R"doc()doc";

static const char *__doc_SynapsePSMVarAdapter_m_SG = R"doc()doc";

static const char *__doc_SynapseWUEGPAdapter = R"doc()doc";

static const char *__doc_SynapseWUEGPAdapter_SynapseWUEGPAdapter = R"doc()doc";

static const char *__doc_SynapseWUEGPAdapter_getDefs = R"doc()doc";

static const char *__doc_SynapseWUEGPAdapter_getLoc = R"doc()doc";

static const char *__doc_SynapseWUEGPAdapter_m_SG = R"doc()doc";

static const char *__doc_SynapseWUPSMVarRefAdapter = R"doc()doc";

static const char *__doc_SynapseWUPSMVarRefAdapter_SynapseWUPSMVarRefAdapter = R"doc()doc";

static const char *__doc_SynapseWUPSMVarRefAdapter_getDefs = R"doc()doc";

static const char *__doc_SynapseWUPSMVarRefAdapter_getInitialisers = R"doc()doc";

static const char *__doc_SynapseWUPSMVarRefAdapter_m_SG = R"doc()doc";

static const char *__doc_SynapseWUPostNeuronVarRefAdapter = R"doc()doc";

static const char *__doc_SynapseWUPostNeuronVarRefAdapter_SynapseWUPostNeuronVarRefAdapter = R"doc()doc";

static const char *__doc_SynapseWUPostNeuronVarRefAdapter_getDefs = R"doc()doc";

static const char *__doc_SynapseWUPostNeuronVarRefAdapter_getInitialisers = R"doc()doc";

static const char *__doc_SynapseWUPostNeuronVarRefAdapter_m_SG = R"doc()doc";

static const char *__doc_SynapseWUPostVarAdapter = R"doc()doc";

static const char *__doc_SynapseWUPostVarAdapter_SynapseWUPostVarAdapter = R"doc()doc";

static const char *__doc_SynapseWUPostVarAdapter_getDefs = R"doc()doc";

static const char *__doc_SynapseWUPostVarAdapter_getInitialisers = R"doc()doc";

static const char *__doc_SynapseWUPostVarAdapter_getLoc = R"doc()doc";

static const char *__doc_SynapseWUPostVarAdapter_getNumVarDelaySlots = R"doc()doc";

static const char *__doc_SynapseWUPostVarAdapter_getTarget = R"doc()doc";

static const char *__doc_SynapseWUPostVarAdapter_getVarDims = R"doc()doc";

static const char *__doc_SynapseWUPostVarAdapter_m_SG = R"doc()doc";

static const char *__doc_SynapseWUPreNeuronVarRefAdapter = R"doc()doc";

static const char *__doc_SynapseWUPreNeuronVarRefAdapter_SynapseWUPreNeuronVarRefAdapter = R"doc()doc";

static const char *__doc_SynapseWUPreNeuronVarRefAdapter_getDefs = R"doc()doc";

static const char *__doc_SynapseWUPreNeuronVarRefAdapter_getInitialisers = R"doc()doc";

static const char *__doc_SynapseWUPreNeuronVarRefAdapter_m_SG = R"doc()doc";

static const char *__doc_SynapseWUPreVarAdapter = R"doc()doc";

static const char *__doc_SynapseWUPreVarAdapter_SynapseWUPreVarAdapter = R"doc()doc";

static const char *__doc_SynapseWUPreVarAdapter_getDefs = R"doc()doc";

static const char *__doc_SynapseWUPreVarAdapter_getInitialisers = R"doc()doc";

static const char *__doc_SynapseWUPreVarAdapter_getLoc = R"doc()doc";

static const char *__doc_SynapseWUPreVarAdapter_getNumVarDelaySlots = R"doc()doc";

static const char *__doc_SynapseWUPreVarAdapter_getTarget = R"doc()doc";

static const char *__doc_SynapseWUPreVarAdapter_getVarDims = R"doc()doc";

static const char *__doc_SynapseWUPreVarAdapter_m_SG = R"doc()doc";

static const char *__doc_SynapseWUVarAdapter = R"doc()doc";

static const char *__doc_SynapseWUVarAdapter_SynapseWUVarAdapter = R"doc()doc";

static const char *__doc_SynapseWUVarAdapter_getDefs = R"doc()doc";

static const char *__doc_SynapseWUVarAdapter_getInitialisers = R"doc()doc";

static const char *__doc_SynapseWUVarAdapter_getLoc = R"doc()doc";

static const char *__doc_SynapseWUVarAdapter_getTarget = R"doc()doc";

static const char *__doc_SynapseWUVarAdapter_getVarDims = R"doc()doc";

static const char *__doc_SynapseWUVarAdapter_m_SG = R"doc()doc";

static const char *__doc_Type_FunctionFlags = R"doc(Flags that can be applied to function types)doc";

static const char *__doc_Type_FunctionFlags_ARRAY_SUBSCRIPT_OVERRIDE = R"doc(Function is variadic)doc";

static const char *__doc_Type_FunctionFlags_VARIADIC = R"doc()doc";

static const char *__doc_Type_NumericValue =
R"doc(ResolvedType::Numeric has various values attached e.g. min and max. These
Cannot be represented using any single type (double can't represent all uint64_t for example)
Therefore, this type is used as a wrapper.)doc";

static const char *__doc_Type_NumericValue_NumericValue = R"doc()doc";

static const char *__doc_Type_NumericValue_NumericValue_2 = R"doc()doc";

static const char *__doc_Type_NumericValue_NumericValue_3 = R"doc()doc";

static const char *__doc_Type_NumericValue_NumericValue_4 = R"doc()doc";

static const char *__doc_Type_NumericValue_NumericValue_5 = R"doc()doc";

static const char *__doc_Type_NumericValue_cast = R"doc()doc";

static const char *__doc_Type_NumericValue_get = R"doc()doc";

static const char *__doc_Type_NumericValue_m_Value = R"doc()doc";

static const char *__doc_Type_NumericValue_operator_eq = R"doc()doc";

static const char *__doc_Type_NumericValue_operator_ge = R"doc()doc";

static const char *__doc_Type_NumericValue_operator_gt = R"doc()doc";

static const char *__doc_Type_NumericValue_operator_le = R"doc()doc";

static const char *__doc_Type_NumericValue_operator_lt = R"doc()doc";

static const char *__doc_Type_NumericValue_operator_ne = R"doc()doc";

static const char *__doc_Type_ResolvedType = R"doc()doc";

static const char *__doc_Type_ResolvedType_Function = R"doc()doc";

static const char *__doc_Type_ResolvedType_Function_Function = R"doc()doc";

static const char *__doc_Type_ResolvedType_Function_Function_2 = R"doc()doc";

static const char *__doc_Type_ResolvedType_Function_argTypes = R"doc()doc";

static const char *__doc_Type_ResolvedType_Function_flags = R"doc()doc";

static const char *__doc_Type_ResolvedType_Function_hasFlag = R"doc()doc";

static const char *__doc_Type_ResolvedType_Function_operator_assign = R"doc()doc";

static const char *__doc_Type_ResolvedType_Function_operator_eq = R"doc()doc";

static const char *__doc_Type_ResolvedType_Function_operator_lt = R"doc()doc";

static const char *__doc_Type_ResolvedType_Function_operator_ne = R"doc()doc";

static const char *__doc_Type_ResolvedType_Function_returnType = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric_isIntegral = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric_isSigned = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric_literalSuffix = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric_lowest = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric_max = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric_maxDigits10 = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric_min = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric_operator_eq = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric_operator_lt = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric_operator_ne = R"doc()doc";

static const char *__doc_Type_ResolvedType_Numeric_rank = R"doc()doc";

static const char *__doc_Type_ResolvedType_Pointer = R"doc()doc";

static const char *__doc_Type_ResolvedType_Pointer_Pointer = R"doc()doc";

static const char *__doc_Type_ResolvedType_Pointer_Pointer_2 = R"doc()doc";

static const char *__doc_Type_ResolvedType_Pointer_operator_assign = R"doc()doc";

static const char *__doc_Type_ResolvedType_Pointer_operator_eq = R"doc()doc";

static const char *__doc_Type_ResolvedType_Pointer_operator_lt = R"doc()doc";

static const char *__doc_Type_ResolvedType_Pointer_operator_ne = R"doc()doc";

static const char *__doc_Type_ResolvedType_Pointer_valueType = R"doc()doc";

static const char *__doc_Type_ResolvedType_ResolvedType = R"doc()doc";

static const char *__doc_Type_ResolvedType_ResolvedType_2 = R"doc()doc";

static const char *__doc_Type_ResolvedType_ResolvedType_3 = R"doc()doc";

static const char *__doc_Type_ResolvedType_ResolvedType_4 = R"doc()doc";

static const char *__doc_Type_ResolvedType_ResolvedType_5 = R"doc()doc";

static const char *__doc_Type_ResolvedType_Value = R"doc()doc";

static const char *__doc_Type_ResolvedType_Value_device = R"doc()doc";

static const char *__doc_Type_ResolvedType_Value_ffiType = R"doc()doc";

static const char *__doc_Type_ResolvedType_Value_isWriteOnly = R"doc()doc";

static const char *__doc_Type_ResolvedType_Value_name = R"doc()doc";

static const char *__doc_Type_ResolvedType_Value_numeric = R"doc()doc";

static const char *__doc_Type_ResolvedType_Value_operator_eq = R"doc()doc";

static const char *__doc_Type_ResolvedType_Value_operator_lt = R"doc()doc";

static const char *__doc_Type_ResolvedType_Value_operator_ne = R"doc()doc";

static const char *__doc_Type_ResolvedType_Value_size = R"doc()doc";

static const char *__doc_Type_ResolvedType_addConst = R"doc()doc";

static const char *__doc_Type_ResolvedType_addWriteOnly = R"doc()doc";

static const char *__doc_Type_ResolvedType_createFunction = R"doc()doc";

static const char *__doc_Type_ResolvedType_createNumeric = R"doc()doc";

static const char *__doc_Type_ResolvedType_createPointer = R"doc()doc";

static const char *__doc_Type_ResolvedType_createValue = R"doc()doc";

static const char *__doc_Type_ResolvedType_detail = R"doc()doc";

static const char *__doc_Type_ResolvedType_getFFIType = R"doc()doc";

static const char *__doc_Type_ResolvedType_getFunction = R"doc()doc";

static const char *__doc_Type_ResolvedType_getName = R"doc()doc";

static const char *__doc_Type_ResolvedType_getNumeric = R"doc()doc";

static const char *__doc_Type_ResolvedType_getPointer = R"doc()doc";

static const char *__doc_Type_ResolvedType_getSize = R"doc()doc";

static const char *__doc_Type_ResolvedType_getValue = R"doc()doc";

static const char *__doc_Type_ResolvedType_isConst = R"doc()doc";

static const char *__doc_Type_ResolvedType_isFunction = R"doc()doc";

static const char *__doc_Type_ResolvedType_isNumeric = R"doc()doc";

static const char *__doc_Type_ResolvedType_isPointer = R"doc()doc";

static const char *__doc_Type_ResolvedType_isPointerToPointer = R"doc()doc";

static const char *__doc_Type_ResolvedType_isScalar = R"doc()doc";

static const char *__doc_Type_ResolvedType_isValue = R"doc()doc";

static const char *__doc_Type_ResolvedType_isVoid = R"doc()doc";

static const char *__doc_Type_ResolvedType_operator_eq = R"doc()doc";

static const char *__doc_Type_ResolvedType_operator_lt = R"doc()doc";

static const char *__doc_Type_ResolvedType_operator_ne = R"doc()doc";

static const char *__doc_Type_ResolvedType_removeConst = R"doc()doc";

static const char *__doc_Type_UnresolvedType = R"doc()doc";

static const char *__doc_Type_UnresolvedType_UnresolvedType = R"doc()doc";

static const char *__doc_Type_UnresolvedType_UnresolvedType_2 = R"doc()doc";

static const char *__doc_Type_UnresolvedType_detail = R"doc()doc";

static const char *__doc_Type_UnresolvedType_operator_eq = R"doc()doc";

static const char *__doc_Type_UnresolvedType_operator_lt = R"doc()doc";

static const char *__doc_Type_UnresolvedType_operator_ne = R"doc()doc";

static const char *__doc_Type_UnresolvedType_resolve = R"doc()doc";

static const char *__doc_Type_getAddToPrePost = R"doc(Get type to add a weight type)doc";

static const char *__doc_Type_getAddToPrePostDelay = R"doc(Get type to add a weight type with delay)doc";

static const char *__doc_Type_getArraySubscript = R"doc(Get type for array subscript overload functions)doc";

static const char *__doc_Type_getCommonType = R"doc(Apply C rules to get common type between numeric types a and b)doc";

static const char *__doc_Type_getPromotedType = R"doc(Apply C type promotion rules to numeric type)doc";

static const char *__doc_Type_operator_band = R"doc()doc";

static const char *__doc_Type_operator_bor = R"doc()doc";

static const char *__doc_Type_serialiseNumeric = R"doc(Serialise numeric value to bytes)doc";

static const char *__doc_Type_updateHash = R"doc()doc";

static const char *__doc_Type_updateHash_2 = R"doc()doc";

static const char *__doc_Type_updateHash_3 = R"doc()doc";

static const char *__doc_Type_updateHash_4 = R"doc()doc";

static const char *__doc_Type_updateHash_5 = R"doc()doc";

static const char *__doc_Type_updateHash_6 = R"doc()doc";

static const char *__doc_Type_updateHash_7 = R"doc()doc";

static const char *__doc_Type_writeNumeric = R"doc(Write numeric value to string, formatting correctly for type)doc";

static const char *__doc_Utils = R"doc()doc";

static const char *__doc_Utils_Overload = R"doc(Boilerplate for overloading base std::visit)doc";

static const char *__doc_Utils_SHA1Hash = R"doc(Functor for generating a hash suitable for use in std::unordered_map etc (i.e. size_t size) from a SHA1 digests)doc";

static const char *__doc_Utils_SHA1Hash_operator_call = R"doc()doc";

static const char *__doc_Utils_areTokensEmpty =
R"doc(Is this sequence of tokens empty?
For ease of parsing and as an extra check that we have scanned SOMETHING,
empty token sequences should have a single EOF token)doc";

static const char *__doc_Utils_clz = R"doc(Count leading zeros)doc";

static const char *__doc_Utils_handleLegacyEGPType =
R"doc(Extra global parameters used to support both pointer and non-pointer types. Now only the behaviour that used to
be provided by pointer types is provided but, internally, non-pointer types are used. This handles pointer types specified by string.)doc";

static const char *__doc_Utils_isIdentifierDelayed = R"doc(Checks whether the sequence of tokens references a given identifier with a delay)doc";

static const char *__doc_Utils_isIdentifierReferenced = R"doc(Checks whether the sequence of token references a given identifier)doc";

static const char *__doc_Utils_isRNGRequired = R"doc(Checks whether the sequence of token includes an RNG function identifier)doc";

static const char *__doc_Utils_isRNGRequired_2 = R"doc(Checks whether any of the variable initialisers in the vector require an RNG for initialisation)doc";

static const char *__doc_Utils_parseNumericType = R"doc(Helper to scan a type specifier string e.g "unsigned int" and parse it into a resolved type)doc";

static const char *__doc_Utils_scanCode = R"doc(Helper to scan a multi-line code string, giving meaningful errors with the specified context string)doc";

static const char *__doc_Utils_updateHash = R"doc(Hash arithmetic types and enums)doc";

static const char *__doc_Utils_updateHash_2 = R"doc(Hash monostate)doc";

static const char *__doc_Utils_updateHash_3 = R"doc(Hash strings)doc";

static const char *__doc_Utils_updateHash_4 = R"doc(Hash arrays of types which can, themselves, be hashed)doc";

static const char *__doc_Utils_updateHash_5 = R"doc(Hash vectors of types which can, themselves, be hashed)doc";

static const char *__doc_Utils_updateHash_6 = R"doc(Hash vectors of bools)doc";

static const char *__doc_Utils_updateHash_7 = R"doc(Hash unordered maps of types which can, themselves, be hashed)doc";

static const char *__doc_Utils_updateHash_8 = R"doc(Hash unordered sets of types which can, themselves, be hashed)doc";

static const char *__doc_Utils_updateHash_9 = R"doc(Hash optional types which can, themeselves, be hashed)doc";

static const char *__doc_Utils_updateHash_10 = R"doc(Hash variants of types which can, themeselves, be hashed)doc";

static const char *__doc_Utils_validateInitialisers = R"doc(Checks that initialisers provided for all of the the item names in the vector?)doc";

static const char *__doc_Utils_validatePopName = R"doc(Checks whether population name is valid? GeNN population names obey C variable naming rules but can start with a number)doc";

static const char *__doc_Utils_validateVarName = R"doc(Checks variable name is valid? GeNN variable names must obey C variable naming rules)doc";

static const char *__doc_Utils_validateVecNames = R"doc(Checks whether the 'name' fields of all structs in vector valid? GeNN variables and population names must obey C variable naming rules)doc";

static const char *__doc_VarAccess = R"doc(Supported combinations of access mode and dimension for neuron and synapse variables)doc";

static const char *__doc_VarAccessDim = R"doc(Flags defining dimensions this variables has)doc";

static const char *__doc_VarAccessDim_BATCH = R"doc(This variable stores separate values for each batch)doc";

static const char *__doc_VarAccessDim_ELEMENT = R"doc(This variable stores separate values for each element i.e. neuron or synapse)doc";

static const char *__doc_VarAccessMode = R"doc(Supported combination of VarAccessModeAttribute)doc";

static const char *__doc_VarAccessModeAttribute =
R"doc(Flags defining attributes of var access models
Read-only and read-write are separate flags rather than read and write so you can test mode & VarAccessMode::READ_ONLY)doc";

static const char *__doc_VarAccessModeAttribute_BROADCAST = R"doc(Writes to this variable get broadcast)doc";

static const char *__doc_VarAccessModeAttribute_MAX = R"doc(This variable's reduction operation is a maximum)doc";

static const char *__doc_VarAccessModeAttribute_READ_ONLY = R"doc(This variable can only be read from)doc";

static const char *__doc_VarAccessModeAttribute_READ_WRITE = R"doc(This variable can be read from or written to)doc";

static const char *__doc_VarAccessModeAttribute_REDUCE = R"doc(This variable is a reduction target)doc";

static const char *__doc_VarAccessModeAttribute_SUM = R"doc(This variable's reduction operation is a summation)doc";

static const char *__doc_VarAccessMode_BROADCAST = R"doc(This variable can only be broadcast i.e. written to)doc";

static const char *__doc_VarAccessMode_READ_ONLY = R"doc(This variable can only be read from)doc";

static const char *__doc_VarAccessMode_READ_WRITE = R"doc(This variable can be read from or written to)doc";

static const char *__doc_VarAccessMode_REDUCE_MAX = R"doc(This variable is a target for a reduction with a max operation)doc";

static const char *__doc_VarAccessMode_REDUCE_SUM = R"doc(This variable is a target for a reduction with a sum operation)doc";

static const char *__doc_VarAccess_READ_ONLY = R"doc(This variable can only be read from and stores separate values for each element but these are shared across batches)doc";

static const char *__doc_VarAccess_READ_ONLY_DUPLICATE = R"doc(This variable can only be read from and stores separate values for each element and each batch)doc";

static const char *__doc_VarAccess_READ_ONLY_SHARED_NEURON = R"doc(This variable can only be read from and stores separate values for each batch but these are shared across neurons)doc";

static const char *__doc_VarAccess_READ_WRITE = R"doc(This variable can be read from and written to and stores separate values for each element and each batch)doc";

static const char *__doc_VarLocation = R"doc(Supported combination of VarLocationAttribute)doc";

static const char *__doc_VarLocationAttribute = R"doc(Flags defining attributes of var locations)doc";

static const char *__doc_VarLocationAttribute_DEVICE = R"doc(Variable is located on the device)doc";

static const char *__doc_VarLocationAttribute_HOST = R"doc(Variable is located on the host)doc";

static const char *__doc_VarLocationAttribute_ZERO_COPY = R"doc(Variable is located in zero-copy memory)doc";

static const char *__doc_VarLocation_DEVICE = R"doc(Variable is only located on device. This can be used to save host memory.)doc";

static const char *__doc_VarLocation_HOST_DEVICE = R"doc(Variable is located on both host and device. This is the default.)doc";

static const char *__doc_VarLocation_HOST_DEVICE_ZERO_COPY =
R"doc(Variable is shared between host and device using zero copy memory.
This can improve performance if data is frequently copied between host and device
but, on non cache-coherent architectures e.g. Jetson, can also reduce access speed.)doc";

static const char *__doc_WeightUpdateModels_Base = R"doc(Base class for all weight update models)doc";

static const char *__doc_WeightUpdateModels_Base_getHashDigest = R"doc(Update hash from model)doc";

static const char *__doc_WeightUpdateModels_Base_getPSMVarRefs = R"doc(Gets names and types of variable references to postsynaptic model)doc";

static const char *__doc_WeightUpdateModels_Base_getPostDynamicsCode =
R"doc(Gets code to be run after postsynaptic neuron update
This is typically for the code to update postsynaptic variables. Presynaptic
and synapse variables are not accesible from within this code)doc";

static const char *__doc_WeightUpdateModels_Base_getPostEventHashDigest = R"doc(Update hash from postsynaptic event-triggering components of model)doc";

static const char *__doc_WeightUpdateModels_Base_getPostEventSynCode =
R"doc(Gets code run when a postsynaptic spike-like event is received at the synapse
Postsynaptic events are triggered for all postsynaptic neurons where
the postsynaptic event threshold condition is met)doc";

static const char *__doc_WeightUpdateModels_Base_getPostEventThresholdConditionCode = R"doc(Gets codes to test for postsynaptic events)doc";

static const char *__doc_WeightUpdateModels_Base_getPostHashDigest = R"doc(Update hash from postsynaptic components of  model)doc";

static const char *__doc_WeightUpdateModels_Base_getPostNeuronVarRefs = R"doc(Gets names and types of variable references to postsynaptic neuron)doc";

static const char *__doc_WeightUpdateModels_Base_getPostSpikeCode =
R"doc(Gets code to be run once per spiking postsynaptic neuron before learn post code is run on synapses
This is typically for the code to update postsynaptic variables. Presynaptic
and synapse variables are not accesible from within this code)doc";

static const char *__doc_WeightUpdateModels_Base_getPostSpikeSynCode =
R"doc(Gets code run when a postsynaptic spike is received at the synapse
For examples when modelling STDP, this is where the effect of postsynaptic
spikes which occur _after_ presynaptic spikes are applied.)doc";

static const char *__doc_WeightUpdateModels_Base_getPostVar = R"doc(Find the named postsynaptic variable)doc";

static const char *__doc_WeightUpdateModels_Base_getPostVars =
R"doc(Gets names and types (as strings) of state variables that are common
across all synapses going to the same postsynaptic neuron)doc";

static const char *__doc_WeightUpdateModels_Base_getPreDynamicsCode =
R"doc(Gets code to be run after presynaptic neuron update
This is typically for the code to update presynaptic variables. Postsynaptic
and synapse variables are not accesible from within this code)doc";

static const char *__doc_WeightUpdateModels_Base_getPreEventHashDigest = R"doc(Update hash from presynaptic event-triggering components of model)doc";

static const char *__doc_WeightUpdateModels_Base_getPreEventSynCode =
R"doc(Gets code run when a presynaptic spike-like event is received at the synapse
Presynaptic events are triggered for all presynaptic neurons where
the presynaptic event threshold condition is met)doc";

static const char *__doc_WeightUpdateModels_Base_getPreEventThresholdConditionCode = R"doc(Gets codes to test for presynaptic events)doc";

static const char *__doc_WeightUpdateModels_Base_getPreHashDigest = R"doc(Update hash from presynaptic components of model)doc";

static const char *__doc_WeightUpdateModels_Base_getPreNeuronVarRefs = R"doc(Gets names and types of variable references to presynaptic neuron)doc";

static const char *__doc_WeightUpdateModels_Base_getPreSpikeCode =
R"doc(Gets code to be run once per spiking presynaptic neuron before sim code is run on synapses
This is typically for the code to update presynaptic variables. Postsynaptic
and synapse variables are not accesible from within this code)doc";

static const char *__doc_WeightUpdateModels_Base_getPreSpikeSynCode = R"doc(Gets code run when a presynaptic spike is received at the synapse)doc";

static const char *__doc_WeightUpdateModels_Base_getPreVar = R"doc(Find the named presynaptic variable)doc";

static const char *__doc_WeightUpdateModels_Base_getPreVars =
R"doc(Gets names and types (as strings) of state variables that are common
across all synapses coming from the same presynaptic neuron)doc";

static const char *__doc_WeightUpdateModels_Base_getSynapseDynamicsCode = R"doc(Gets code for synapse dynamics which are independent of spike detection)doc";

static const char *__doc_WeightUpdateModels_Base_getVar = R"doc(Find the named variable)doc";

static const char *__doc_WeightUpdateModels_Base_getVars = R"doc(Gets model variables)doc";

static const char *__doc_WeightUpdateModels_Base_validate = R"doc(Validate names of parameters etc)doc";

static const char *__doc_WeightUpdateModels_Init = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_Init = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_finalise = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPSMVarReferences = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPostDynamicsCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPostEventSynCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPostEventThresholdCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPostNeuronVarReferences = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPostSpikeCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPostSpikeSynCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPostVarInitialisers = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPreDynamicsCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPreEventSynCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPreEventThresholdCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPreNeuronVarReferences = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPreSpikeCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPreSpikeSynCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getPreVarInitialisers = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getSynapseDynamicsCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_getVarInitialisers = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_isRNGRequired = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_isVarHeterogeneouslyDelayedInSynCode = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PSMVarReferences = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PostDynamicsCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PostEventSynCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PostEventThresholdCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PostNeuronVarReferences = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PostSpikeCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PostSpikeSynCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PostVarInitialisers = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PreDynamicsCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PreEventSynCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PreEventThresholdCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PreNeuronVarReferences = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PreSpikeCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PreSpikeSynCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_PreVarInitialisers = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_SynapseDynamicsCodeTokens = R"doc()doc";

static const char *__doc_WeightUpdateModels_Init_m_VarInitialisers = R"doc()doc";

static const char *__doc_WeightUpdateModels_STDP =
R"doc(Simply asymmetrical STDP rule.
This rule makes purely additive weight updates within hard bounds and uses nearest-neighbour spike pairing and the following time-dependence:

.. math::

    \Delta w_{ij} = \
    \begin{cases}
    A_{+}\exp\left(-\frac{\Delta t}{\tau_{+}}\right) & if\, \Delta t>0\\
    A_{-}\exp\left(\frac{\Delta t}{\tau_{-}}\right) & if\, \Delta t\leq0
    \end{cases}

The model has 1 variable:

- ``g`` - synaptic weight

and 6 parameters:

- ``tauPlus`` - Potentiation time constant (ms)
- ``tauMinus`` - Depression time constant (ms)
- ``Aplus`` - Rate of potentiation
- ``Aminus`` - Rate of depression
- ``Wmin`` - Minimum weight
- ``Wmax`` - Maximum weight)doc";

static const char *__doc_WeightUpdateModels_STDP_getInstance = R"doc()doc";

static const char *__doc_WeightUpdateModels_STDP_getParams = R"doc()doc";

static const char *__doc_WeightUpdateModels_STDP_getPostSpikeSynCode = R"doc()doc";

static const char *__doc_WeightUpdateModels_STDP_getPreSpikeSynCode = R"doc()doc";

static const char *__doc_WeightUpdateModels_STDP_getVars = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticGraded =
R"doc(Graded-potential, static synapse
In a graded synapse, the conductance is updated gradually with the rule:

.. math::

    gSyn= g * tanh((V - E_{pre}) / V_{slope}

whenever the membrane potential :math:`V` is larger than the threshold :math:`E_{pre}`.
The model has 1 variable:

- ``g`` - synaptic weight

The model also has 1 presynaptic neuron variable reference:

- ``V`` - Presynaptic membrane potential

The parameters are:

- ``Epre`` - Presynaptic threshold potential
- ``Vslope`` - Activation slope of graded release)doc";

static const char *__doc_WeightUpdateModels_StaticGraded_getInstance = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticGraded_getParams = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticGraded_getPreEventSynCode = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticGraded_getPreEventThresholdConditionCode = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticGraded_getPreNeuronVarRefs = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticGraded_getVars = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticPulse =
R"doc(Pulse-coupled, static synapse with heterogeneous weight.
No learning rule is applied to the synapse and for each pre-synaptic spikes,
the synaptic conductances are simply added to the postsynaptic input variable.
The model has 1 variable:

- ``g`` - synaptic weight

and no other parameters.)doc";

static const char *__doc_WeightUpdateModels_StaticPulseConstantWeight =
R"doc(Pulse-coupled, static synapse with homogeneous weight.
No learning rule is applied to the synapse and for each pre-synaptic spikes,
the synaptic conductances are simply added to the postsynaptic input variable.
The model has 1 parameter:

- ``g`` - synaptic weight

and no other variables.)doc";

static const char *__doc_WeightUpdateModels_StaticPulseConstantWeight_getInstance = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticPulseConstantWeight_getParams = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticPulseConstantWeight_getPreSpikeSynCode = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticPulseDendriticDelay =
R"doc(Pulse-coupled, static synapse with heterogenous weight and dendritic delays
No learning rule is applied to the synapse and for each pre-synaptic spikes,
the synaptic conductances are simply added to the postsynaptic input variable.
The model has 2 variables:

- ``g`` - synaptic weight
- ``d`` - dendritic delay in timesteps

and no other parameters.)doc";

static const char *__doc_WeightUpdateModels_StaticPulseDendriticDelay_getInstance = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticPulseDendriticDelay_getPreSpikeSynCode = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticPulseDendriticDelay_getVars = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticPulse_getInstance = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticPulse_getPreSpikeSynCode = R"doc()doc";

static const char *__doc_WeightUpdateModels_StaticPulse_getVars = R"doc()doc";

static const char *__doc_binomialInverseCDF = R"doc()doc";

static const char *__doc_clearVarAccessDim = R"doc()doc";

static const char *__doc_createDenDelayVarRef = R"doc(Creates a reference to a synapse group's dendritic delay buffer)doc";

static const char *__doc_createEGPRef = R"doc(Creates a reference to a neuron group extra global parameter.)doc";

static const char *__doc_createEGPRef_2 = R"doc(Creates a reference to a current source extra global parameter.)doc";

static const char *__doc_createEGPRef_3 = R"doc(Creates a reference to a custom update extra global parameter.)doc";

static const char *__doc_createEGPRef_4 = R"doc(Creates a reference to a custom weight update extra global parameter.)doc";

static const char *__doc_createEGPRef_5 = R"doc(Creates a reference to a custom connectivity update extra global parameter.)doc";

static const char *__doc_createOutPostVarRef = R"doc(Creates a reference to a synapse group's postsynaptic output buffer)doc";

static const char *__doc_createPSMEGPRef = R"doc(Creates a reference to a postsynaptic model extra global parameter.)doc";

static const char *__doc_createPSMVarRef = R"doc(Creates a reference to a postsynaptic model variable.)doc";

static const char *__doc_createPostVarRef = R"doc(Creates a reference to a postsynaptic custom connectivity update variable.)doc";

static const char *__doc_createPreVarRef = R"doc(Creates a reference to a presynaptic custom connectivity update variable.)doc";

static const char *__doc_createPrevSpikeTimeVarRef = R"doc(Creates a reference to a neuron group's previous spike times)doc";

static const char *__doc_createSpikeTimeVarRef = R"doc(Creates a reference to a neuron group's spike times)doc";

static const char *__doc_createVarRef = R"doc(Creates a reference to a neuron group variable.)doc";

static const char *__doc_createVarRef_2 = R"doc(Creates a reference to a current source variable.)doc";

static const char *__doc_createVarRef_3 = R"doc(Creates a reference to a custom update variable.)doc";

static const char *__doc_createWUEGPRef = R"doc(Creates a reference to a weight update model extra global parameter.)doc";

static const char *__doc_createWUPostVarRef = R"doc(Creates a reference to a weight update model postsynapticvariable.)doc";

static const char *__doc_createWUPreVarRef = R"doc(Creates a reference to a weight update model presynaptic variable.)doc";

static const char *__doc_createWUVarRef = R"doc(Creates a reference to a weight update model variable.)doc";

static const char *__doc_createWUVarRef_2 = R"doc(Creates a reference to a custom weight update variable.)doc";

static const char *__doc_createWUVarRef_3 = R"doc(Creates a reference to a custom connectivity update update variable.)doc";

static const char *__doc_filesystem_path =
R"doc(Simple class for manipulating paths on Linux/Windows/Mac OS

This class is just a temporary workaround to avoid the heavy boost
dependency until boost::filesystem is integrated into the standard template
library at some point in the future.)doc";

static const char *__doc_getSynapseMatrixConnectivity = R"doc()doc";

static const char *__doc_getSynapseMatrixWeight = R"doc()doc";

static const char *__doc_getVarAccessDim = R"doc(Extract variable dimensions from its access enumeration)doc";

static const char *__doc_getVarAccessDim_2 = R"doc(Extract custom update variable dimensions from its access enumeration and dimensions of the custom update itself)doc";

static const char *__doc_getVarAccessMode = R"doc()doc";

static const char *__doc_getVarAccessMode_2 = R"doc()doc";

static const char *__doc_getVarAccessMode_3 = R"doc()doc";

static const char *__doc_initConnectivity =
R"doc(Initialise connectivity using a sparse connectivity snippet


$Template parameter ``S``:

       type of sparse connectivitiy initialisation snippet (derived from InitSparseConnectivitySnippet::Base).


$Parameter ``params``:

   parameters for snippet wrapped in ParamValues object.


$Returns:

InitSparseConnectivitySnippet::Init object for passing to ``ModelSpec::addSynapsePopulation``)doc";

static const char *__doc_initPostsynaptic =
R"doc(Initialise postsynaptic update model


$Template parameter ``S``:

               type of postsynaptic model initialisation snippet (derived from PostSynapticModels::Base).


$Parameter ``params``:

           parameters for snippet wrapped in ParamValues object.


$Parameter ``vars``:

             variables for snippet wrapped in VarValues object.


$Parameter ``neuronVarRefs``:

    neuron variable references for snippet wrapped in VarReferences object.


$Returns:

PostsynapticModels::Init object for passing to ``ModelSpec::addSynapsePopulation``)doc";

static const char *__doc_initToeplitzConnectivity =
R"doc(Initialise toeplitz connectivity using a toeplitz connectivity snippet


$Template parameter ``S``:

       type of toeplitz connectivitiy initialisation snippet (derived from InitToeplitzConnectivitySnippet::Base).


$Parameter ``params``:

   parameters for snippet wrapped in ParamValues object.


$Returns:

InitToeplitzConnectivitySnippet::Init object for passing to ``ModelSpec::addSynapsePopulation``)doc";

static const char *__doc_initVar =
R"doc(Initialise a variable using an initialisation snippet


$Template parameter ``S``:

       type of variable initialisation snippet (derived from InitVarSnippet::Base).


$Parameter ``params``:

   parameters for snippet wrapped in ParamValues object.


$Returns:

InitVarSnippet::Init object for use within model's VarValues)doc";

static const char *__doc_initWeightUpdate =
R"doc(Initialise weight update model


$Template parameter ``S``:

                   type of postsynaptic model initialisation snippet (derived from PostSynapticModels::Base).


$Parameter ``params``:

               parameters for snippet wrapped in ParamValues object.


$Parameter ``vars``:

                 variables for snippet wrapped in VarValues object.


$Parameter ``preVars``:

              presynaptic variables for snippet wrapped in VarValues object.


$Parameter ``postVars``:

             postsynaptic variables for snippet wrapped in VarValues object.


$Parameter ``preNeuronVarRefs``:

     presynaptic neuron variable references for snippet wrapped in VarReferences object.


$Parameter ``postNeuronVarRefs``:

    postsynaptic neuron variable references for snippet wrapped in VarReferences object.


$Parameter ``psmVarRefs``:

           postsynaptic modelvariable references for snippet wrapped in VarReferences object.


$Returns:

PostsynapticModels::Init object for passing to ``ModelSpec::addSynapsePopulation``)doc";

static const char *__doc_operator_band = R"doc()doc";

static const char *__doc_operator_band_2 = R"doc()doc";

static const char *__doc_operator_band_3 = R"doc()doc";

static const char *__doc_operator_band_4 = R"doc()doc";

static const char *__doc_operator_band_5 = R"doc()doc";

static const char *__doc_operator_band_6 = R"doc()doc";

static const char *__doc_operator_band_7 = R"doc()doc";

static const char *__doc_operator_bor = R"doc()doc";

static const char *__doc_operator_bor_2 = R"doc()doc";

static const char *__doc_plog_IAppender = R"doc()doc";

static const char *__doc_uninitialisedConnectivity =
R"doc(Mark a synapse group's sparse connectivity as uninitialised
This means that the backend will not generate any automatic initialization code, but will instead
copy the connectivity from host to device during ``initializeSparse`` function
(and, if necessary generate any additional data structures it requires))doc";

static const char *__doc_uninitialisedVar =
R"doc(Mark a variable as uninitialised
This means that the backend will not generate any automatic initialization code, but will instead
copy the variable from host to device during ``initializeSparse`` function)doc";

#if defined(__GNUG__)
#pragma GCC diagnostic pop
#endif

