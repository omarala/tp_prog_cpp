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
include test/CMakeFiles/XorshiftReset.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/XorshiftReset.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/XorshiftReset.dir/flags.make

test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o: test/CMakeFiles/XorshiftReset.dir/flags.make
test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o: ../test/test_xors_reset.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o"
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o -c /home/ensimag/tp_prog_cpp/Tp3_omar_alex/test/test_xors_reset.cpp

test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.i"
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ensimag/tp_prog_cpp/Tp3_omar_alex/test/test_xors_reset.cpp > CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.i

test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.s"
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ensimag/tp_prog_cpp/Tp3_omar_alex/test/test_xors_reset.cpp -o CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.s

test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o.requires:
.PHONY : test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o.requires

test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o.provides: test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/XorshiftReset.dir/build.make test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o.provides.build
.PHONY : test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o.provides

test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o.provides.build: test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o

# Object files for target XorshiftReset
XorshiftReset_OBJECTS = \
"CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o"

# External object files for target XorshiftReset
XorshiftReset_EXTERNAL_OBJECTS =

test/XorshiftReset: test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o
test/XorshiftReset: test/CMakeFiles/XorshiftReset.dir/build.make
test/XorshiftReset: src/liblibsrc.a
test/XorshiftReset: build/googletest-src/googlemock/gtest/libgtest.a
test/XorshiftReset: test/CMakeFiles/XorshiftReset.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable XorshiftReset"
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/XorshiftReset.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/XorshiftReset.dir/build: test/XorshiftReset
.PHONY : test/CMakeFiles/XorshiftReset.dir/build

test/CMakeFiles/XorshiftReset.dir/requires: test/CMakeFiles/XorshiftReset.dir/test_xors_reset.cpp.o.requires
.PHONY : test/CMakeFiles/XorshiftReset.dir/requires

test/CMakeFiles/XorshiftReset.dir/clean:
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test && $(CMAKE_COMMAND) -P CMakeFiles/XorshiftReset.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/XorshiftReset.dir/clean

test/CMakeFiles/XorshiftReset.dir/depend:
	cd /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ensimag/tp_prog_cpp/Tp3_omar_alex /home/ensimag/tp_prog_cpp/Tp3_omar_alex/test /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test /home/ensimag/tp_prog_cpp/Tp3_omar_alex/build/test/CMakeFiles/XorshiftReset.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/XorshiftReset.dir/depend

