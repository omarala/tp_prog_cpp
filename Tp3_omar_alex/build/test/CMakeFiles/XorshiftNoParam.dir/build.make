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
CMAKE_SOURCE_DIR = /home/ensimag/tp_prog_cpp/Tp3_omar_alex

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build

# Include any dependencies generated for this target.
include test/CMakeFiles/XorshiftNoParam.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/XorshiftNoParam.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/XorshiftNoParam.dir/flags.make

test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o: test/CMakeFiles/XorshiftNoParam.dir/flags.make
test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o: ../test/test_xors_constr.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o"
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o -c /home/ensimag/tp_prog_cpp/Tp3_omar_alex/test/test_xors_constr.cpp

test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.i"
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ensimag/tp_prog_cpp/Tp3_omar_alex/test/test_xors_constr.cpp > CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.i

test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.s"
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ensimag/tp_prog_cpp/Tp3_omar_alex/test/test_xors_constr.cpp -o CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.s

test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o.requires:
.PHONY : test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o.requires

test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o.provides: test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/XorshiftNoParam.dir/build.make test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o.provides.build
.PHONY : test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o.provides

test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o.provides.build: test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o

# Object files for target XorshiftNoParam
XorshiftNoParam_OBJECTS = \
"CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o"

# External object files for target XorshiftNoParam
XorshiftNoParam_EXTERNAL_OBJECTS =

test/XorshiftNoParam: test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o
test/XorshiftNoParam: test/CMakeFiles/XorshiftNoParam.dir/build.make
test/XorshiftNoParam: src/liblibsrc.a
test/XorshiftNoParam: build/googletest-src/googlemock/gtest/libgtest.a
test/XorshiftNoParam: test/CMakeFiles/XorshiftNoParam.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable XorshiftNoParam"
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/XorshiftNoParam.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/XorshiftNoParam.dir/build: test/XorshiftNoParam
.PHONY : test/CMakeFiles/XorshiftNoParam.dir/build

test/CMakeFiles/XorshiftNoParam.dir/requires: test/CMakeFiles/XorshiftNoParam.dir/test_xors_constr.cpp.o.requires
.PHONY : test/CMakeFiles/XorshiftNoParam.dir/requires

test/CMakeFiles/XorshiftNoParam.dir/clean:
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test && $(CMAKE_COMMAND) -P CMakeFiles/XorshiftNoParam.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/XorshiftNoParam.dir/clean

test/CMakeFiles/XorshiftNoParam.dir/depend:
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ensimag/tp_prog_cpp/Tp3_omar_alex /home/ensimag/tp_prog_cpp/Tp3_omar_alex/test /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test/CMakeFiles/XorshiftNoParam.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/XorshiftNoParam.dir/depend

