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
include test/CMakeFiles/DistributionNormale.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/DistributionNormale.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/DistributionNormale.dir/flags.make

test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o: test/CMakeFiles/DistributionNormale.dir/flags.make
test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o: ../test/test_dn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DistributionNormale.dir/test_dn.cpp.o -c /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test/test_dn.cpp

test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DistributionNormale.dir/test_dn.cpp.i"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test/test_dn.cpp > CMakeFiles/DistributionNormale.dir/test_dn.cpp.i

test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DistributionNormale.dir/test_dn.cpp.s"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test/test_dn.cpp -o CMakeFiles/DistributionNormale.dir/test_dn.cpp.s

test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o.requires:

.PHONY : test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o.requires

test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o.provides: test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/DistributionNormale.dir/build.make test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o.provides.build
.PHONY : test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o.provides

test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o.provides.build: test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o


# Object files for target DistributionNormale
DistributionNormale_OBJECTS = \
"CMakeFiles/DistributionNormale.dir/test_dn.cpp.o"

# External object files for target DistributionNormale
DistributionNormale_EXTERNAL_OBJECTS =

test/DistributionNormale: test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o
test/DistributionNormale: test/CMakeFiles/DistributionNormale.dir/build.make
test/DistributionNormale: src/liblibsrc.a
test/DistributionNormale: build/googletest-src/googlemock/gtest/libgtest.a
test/DistributionNormale: test/CMakeFiles/DistributionNormale.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DistributionNormale"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DistributionNormale.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/DistributionNormale.dir/build: test/DistributionNormale

.PHONY : test/CMakeFiles/DistributionNormale.dir/build

test/CMakeFiles/DistributionNormale.dir/requires: test/CMakeFiles/DistributionNormale.dir/test_dn.cpp.o.requires

.PHONY : test/CMakeFiles/DistributionNormale.dir/requires

test/CMakeFiles/DistributionNormale.dir/clean:
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && $(CMAKE_COMMAND) -P CMakeFiles/DistributionNormale.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/DistributionNormale.dir/clean

test/CMakeFiles/DistributionNormale.dir/depend:
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test/CMakeFiles/DistributionNormale.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/DistributionNormale.dir/depend
