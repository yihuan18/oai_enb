# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/liu/openairinterface5g/cmake_targets/lte_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liu/openairinterface5g/cmake_targets/lte_build_oai/build

# Include any dependencies generated for this target.
include CMakeFiles/oai_lmssdrdevif.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/oai_lmssdrdevif.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oai_lmssdrdevif.dir/flags.make

CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o: CMakeFiles/oai_lmssdrdevif.dir/flags.make
CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o: /home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/liu/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o -c /home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp

CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp > CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.i

CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp -o CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.s

CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o.requires:
.PHONY : CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o.requires

CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o.provides: CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o.requires
	$(MAKE) -f CMakeFiles/oai_lmssdrdevif.dir/build.make CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o.provides.build
.PHONY : CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o.provides

CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o.provides.build: CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o

# Object files for target oai_lmssdrdevif
oai_lmssdrdevif_OBJECTS = \
"CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o"

# External object files for target oai_lmssdrdevif
oai_lmssdrdevif_EXTERNAL_OBJECTS =

liboai_lmssdrdevif.so: CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o
liboai_lmssdrdevif.so: CMakeFiles/oai_lmssdrdevif.dir/build.make
liboai_lmssdrdevif.so: CMakeFiles/oai_lmssdrdevif.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared module liboai_lmssdrdevif.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oai_lmssdrdevif.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oai_lmssdrdevif.dir/build: liboai_lmssdrdevif.so
.PHONY : CMakeFiles/oai_lmssdrdevif.dir/build

CMakeFiles/oai_lmssdrdevif.dir/requires: CMakeFiles/oai_lmssdrdevif.dir/home/liu/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB/lms_lib.cpp.o.requires
.PHONY : CMakeFiles/oai_lmssdrdevif.dir/requires

CMakeFiles/oai_lmssdrdevif.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oai_lmssdrdevif.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oai_lmssdrdevif.dir/clean

CMakeFiles/oai_lmssdrdevif.dir/depend:
	cd /home/liu/openairinterface5g/cmake_targets/lte_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liu/openairinterface5g/cmake_targets/lte_build_oai /home/liu/openairinterface5g/cmake_targets/lte_build_oai /home/liu/openairinterface5g/cmake_targets/lte_build_oai/build /home/liu/openairinterface5g/cmake_targets/lte_build_oai/build /home/liu/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/oai_lmssdrdevif.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oai_lmssdrdevif.dir/depend

