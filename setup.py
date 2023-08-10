import os
import sys
from copy import deepcopy
from platform import system, uname
from shutil import copytree, rmtree
from pybind11.setup_helpers import Pybind11Extension, build_ext, WIN, MACOS
from setuptools import find_packages, setup

# Determine is this is a debug build
# **YUCK** this is not a great test
debug_build = "--debug" in sys.argv

# Get CUDA path from environment variable - setting this up is a required CUDA post-install step
cuda_path = os.environ.get("CUDA_PATH")

# Is CUDA installed?
cuda_installed = cuda_path is not None and os.path.exists(cuda_path)

# Get OpenCL path from environment variable
opencl_path = os.environ.get("OPENCL_PATH")

# Is OpenCL installed
opencl_installed = opencl_path is not None and os.path.exists(opencl_path)

# Are we on Linux? 
# **NOTE** Pybind11Extension provides WIN and MAC
LINUX = system() == "Linux"

# Are we on WSL?
if sys.version_info < (3, 3):
    WSL = "microsoft" in uname()[2]
else:
    WSL = "microsoft" in uname().release

# Determine correct suffix for GeNN libraries
if WIN:
    genn_lib_suffix = "_Debug_DLL" if debug_build else "_Release_DLL"
else:
    genn_lib_suffix = "_dynamic_debug" if debug_build else "_dynamic"

genn_path = os.path.dirname(os.path.abspath(__file__))

pygenn_path = os.path.join(genn_path, "pygenn")
pygenn_src = os.path.join(pygenn_path, "src")
pygenn_include = os.path.join(pygenn_path, "include")
genn_include = os.path.join(genn_path, "include", "genn", "genn")
genn_third_party_include = os.path.join(genn_path, "include", "genn", "third_party")
genn_share = os.path.join(genn_path, "share", "genn")
pygenn_share = os.path.join(pygenn_path, "share")

# Always package LibGeNN
package_data = ["genn" + genn_lib_suffix + ".*" if WIN 
                else "libgenn" + genn_lib_suffix + ".*"]


# Copy GeNN 'share' tree into pygenn and add all files to pacakge
# **THINK** this could be done on a per-backend basis
rmtree(pygenn_share, ignore_errors=True)
copytree(genn_share, pygenn_share)
for root, _, filenames in os.walk(pygenn_share):
    for f in filenames:
        f_path = os.path.join(root, f)
        if os.path.isfile(f_path):
            package_data.append(f_path)

# Define standard kwargs for building all extensions
extension_kwargs = {
    "include_dirs": [pygenn_include],
    "library_dirs": [pygenn_path],
    "cxx_std": 17,
    "extra_compile_args": [],
    "extra_link_args": []}

# If this is Windows, turn off warnings about dll-interface being required 
# for stuff to be used by clients and prevent windows.h exporting TOO many awful macros
if WIN:
    extension_kwargs["extra_compile_args"].extend(["/wd4251", "-DWIN32_LEAN_AND_MEAN", "-DNOMINMAX"])

# Extend these kwargs for extensions which link against GeNN
genn_extension_kwargs = deepcopy(extension_kwargs)
genn_extension_kwargs["include_dirs"].extend([genn_include, genn_third_party_include])
genn_extension_kwargs["libraries"] = ["genn" + genn_lib_suffix]
genn_extension_kwargs["define_macros"] = [("LINKING_GENN_DLL", "1"), ("LINKING_BACKEND_DLL", "1")]

# On Linux, we want to add extension directory i.e. $ORIGIN to runtime
# directories so libGeNN and backends can be found wherever package is installed
if LINUX:
    genn_extension_kwargs["runtime_library_dirs"] = ["$ORIGIN"]

# By default build single-threaded CPU backend
backends = [("single_threaded_cpu", "singleThreadedCPU", {})]

# If CUDA was found, add backend configuration
if cuda_installed:
    # Get CUDA library directory
    cuda_library_dirs = []
    if MACOS:
        cuda_library_dirs.append(os.path.join(cuda_path, "lib"))
    elif WIN:
        cuda_library_dirs.append(os.path.join(cuda_path, "lib", "x64"))
    else:
        cuda_library_dirs.append(os.path.join(cuda_path, "lib64"))

    # If we're running on WSL, add additional library path so libcuda can be found
    if WSL:
        cuda_library_dirs.append("/usr/lib/wsl/lib")

    # Add backend
    # **NOTE** on Mac OS X, a)runtime_library_dirs doesn't work b)setting rpath is required to find CUDA
    backends.append(("cuda", "cuda",
                     {"libraries": ["cuda", "cudart"],
                      "include_dirs": [os.path.join(cuda_path, "include")],
                      "library_dirs": cuda_library_dirs,
                      "extra_link_args": ["-Wl,-rpath," + cuda_library_dirs[0]] if MACOS else []}))

# If OpenCL was found, add backend configuration
if opencl_installed:
    # Get OpenCL library directory
    if MACOS:
        raise NotImplementedError("Mac not currently supported")
    elif WIN:
        opencl_library_dir = os.path.join(opencl_path, "lib", "x64")
    else:
        opencl_library_dir = os.path.join(opencl_path, "lib64")
    
    # Add backend
    # **NOTE** on Mac OS X, a)runtime_library_dirs doesn't work b)setting rpath is required to find CUDA
    backends.append(("opencl", "opencl",
                     {"libraries": ["OpenCL"],
                      "include_dirs": [os.path.join(opencl_path, "include")],
                      "library_dirs": [opencl_library_dir],
                      "extra_link_args": ["-Wl,-rpath," + opencl_library_dir] if MACOS else [],
                      "extra_compile_args": ["-DCL_HPP_TARGET_OPENCL_VERSION=120", "-DCL_HPP_MINIMUM_OPENCL_VERSION=120"]}))

ext_modules = [
    Pybind11Extension("shared_library_model",
                      [os.path.join(pygenn_src, "sharedLibraryModel.cc")],
                      **extension_kwargs),
    Pybind11Extension("genn",
                      [os.path.join(pygenn_src, "genn.cc")],
                      **genn_extension_kwargs),
    Pybind11Extension("types",
                      [os.path.join(pygenn_src, "types.cc")],
                      **genn_extension_kwargs),
    Pybind11Extension("init_sparse_connectivity_snippets",
                      [os.path.join(pygenn_src, "initSparseConnectivitySnippets.cc")],
                      **genn_extension_kwargs),
    Pybind11Extension("init_toeplitz_connectivity_snippets",
                      [os.path.join(pygenn_src, "initToeplitzConnectivitySnippets.cc")],
                      **genn_extension_kwargs),
    Pybind11Extension("init_var_snippets",
                      [os.path.join(pygenn_src, "initVarSnippets.cc")],
                      **genn_extension_kwargs),
    Pybind11Extension("current_source_models",
                      [os.path.join(pygenn_src, "currentSourceModels.cc")],
                      **genn_extension_kwargs),
    Pybind11Extension("custom_connectivity_update_models",
                      [os.path.join(pygenn_src, "customConnectivityUpdateModels.cc")],
                      **genn_extension_kwargs),
    Pybind11Extension("custom_update_models",
                      [os.path.join(pygenn_src, "customUpdateModels.cc")],
                      **genn_extension_kwargs),
    Pybind11Extension("neuron_models",
                      [os.path.join(pygenn_src, "neuronModels.cc")],
                      **genn_extension_kwargs),
    Pybind11Extension("postsynaptic_models",
                      [os.path.join(pygenn_src, "postsynapticModels.cc")],
                      **genn_extension_kwargs),
    Pybind11Extension("weight_update_models",
                      [os.path.join(pygenn_src, "weightUpdateModels.cc")],
                      **genn_extension_kwargs)]

 # Loop through namespaces of supported backends
for module_stem, source_stem, kwargs in backends:
    # Take a copy of the standard extension kwargs
    backend_extension_kwargs = deepcopy(genn_extension_kwargs)

    # Extend any settings specified by backend
    for n, v in kwargs.items():
        backend_extension_kwargs[n].extend(v)

    # Add relocatable version of backend library to libraries
    # **NOTE** this is added BEFORE libGeNN as this library needs symbols FROM libGeNN
    if WIN:
        package_data.append("genn_" + module_stem + "_backend" + genn_lib_suffix + ".*")
    else:
        package_data.append("libgenn_" + module_stem + "_backend" + genn_lib_suffix + ".*")

    # Add backend include directory to both SWIG and C++ compiler options
    backend_include_dir = os.path.join(genn_path, "include", "genn", "backends", module_stem)
    backend_extension_kwargs["libraries"].insert(0, "genn_" + module_stem + "_backend" + genn_lib_suffix)
    backend_extension_kwargs["include_dirs"].append(backend_include_dir)

    # Add extension to list
    ext_modules.append(Pybind11Extension(module_stem + "_backend", 
                                         [os.path.join(pygenn_src, source_stem + "Backend.cc")],
                                         **backend_extension_kwargs))

# Read version from txt file
with open(os.path.join(genn_path, "version.txt")) as version_file:
    version = version_file.read().strip()

setup(
    name="pygenn",
    version=version,
    packages = find_packages(),
    package_data={"pygenn": package_data},

    url="https://github.com/genn_team/genn",
    ext_package="pygenn",
    ext_modules=ext_modules,
    zip_safe=False,
    python_requires=">=3.6",
    install_requires=["numpy>=1.17", "six", "deprecated", "psutil",
                      "importlib-metadata>=1.0;python_version<'3.8'"],
)
