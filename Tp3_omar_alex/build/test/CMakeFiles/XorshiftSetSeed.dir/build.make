# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build

# Include any dependencies generated for this target.
include test/CMakeFiles/XorshiftSetSeed.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/XorshiftSetSeed.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/XorshiftSetSeed.dir/flags.make

test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o: test/CMakeFiles/XorshiftSetSeed.dir/flags.make
test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o: ../test/test_xors_et_seed.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o -c /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test/test_xors_et_seed.cpp

test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.i"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test/test_xors_et_seed.cpp > CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.i

test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.s"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test/test_xors_et_seed.cpp -o CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.s

test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o.requires:

.PHONY : test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o.requires

test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o.provides: test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/XorshiftSetSeed.dir/build.make test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o.provides.build
.PHONY : test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o.provides

test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o.provides.build: test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o


# Object files for target XorshiftSetSeed
XorshiftSetSeed_OBJECTS = \
"CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o"

# External object files for target XorshiftSetSeed
XorshiftSetSeed_EXTERNAL_OBJECTS =

test/XorshiftSetSeed: test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o
test/XorshiftSetSeed: test/CMakeFiles/XorshiftSetSeed.dir/build.make
test/XorshiftSetSeed: src/liblibsrc.a
test/XorshiftSetSeed: build/googletest-src/googlemock/gtest/libgtest.a
test/XorshiftSetSeed: test/CMakeFiles/XorshiftSetSeed.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable XorshiftSetSeed"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/XorshiftSetSeed.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/XorshiftSetSeed.dir/build: test/XorshiftSetSeed

.PHONY : test/CMakeFiles/XorshiftSetSeed.dir/build

test/CMakeFiles/XorshiftSetSeed.dir/requires: test/CMakeFiles/XorshiftSetSeed.dir/test_xors_et_seed.cpp.o.requires

.PHONY : test/CMakeFiles/XorshiftSetSeed.dir/requires

test/CMakeFiles/XorshiftSetSeed.dir/clean:
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && $(CMAKE_COMMAND) -P CMakeFiles/XorshiftSetSeed.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/XorshiftSetSeed.dir/clean

test/CMakeFiles/XorshiftSetSeed.dir/depend:
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test/CMakeFiles/XorshiftSetSeed.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/XorshiftSetSeed.dir/depend

