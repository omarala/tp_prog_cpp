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
include test/CMakeFiles/ParkMillerGene.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/ParkMillerGene.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/ParkMillerGene.dir/flags.make

test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o: test/CMakeFiles/ParkMillerGene.dir/flags.make
test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o: ../test/test_pm_gene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o -c /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test/test_pm_gene.cpp

test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.i"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test/test_pm_gene.cpp > CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.i

test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.s"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test/test_pm_gene.cpp -o CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.s

test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o.requires:

.PHONY : test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o.requires

test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o.provides: test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/ParkMillerGene.dir/build.make test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o.provides.build
.PHONY : test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o.provides

test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o.provides.build: test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o


# Object files for target ParkMillerGene
ParkMillerGene_OBJECTS = \
"CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o"

# External object files for target ParkMillerGene
ParkMillerGene_EXTERNAL_OBJECTS =

test/ParkMillerGene: test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o
test/ParkMillerGene: test/CMakeFiles/ParkMillerGene.dir/build.make
test/ParkMillerGene: src/liblibsrc.a
test/ParkMillerGene: build/googletest-src/googlemock/gtest/libgtest.a
test/ParkMillerGene: test/CMakeFiles/ParkMillerGene.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ParkMillerGene"
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ParkMillerGene.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/ParkMillerGene.dir/build: test/ParkMillerGene

.PHONY : test/CMakeFiles/ParkMillerGene.dir/build

test/CMakeFiles/ParkMillerGene.dir/requires: test/CMakeFiles/ParkMillerGene.dir/test_pm_gene.cpp.o.requires

.PHONY : test/CMakeFiles/ParkMillerGene.dir/requires

test/CMakeFiles/ParkMillerGene.dir/clean:
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test && $(CMAKE_COMMAND) -P CMakeFiles/ParkMillerGene.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/ParkMillerGene.dir/clean

test/CMakeFiles/ParkMillerGene.dir/depend:
	cd /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/test /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test /home/omar/Documents/S4/prog_opti_cpp/Tp3_omar_alex/build/test/CMakeFiles/ParkMillerGene.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/ParkMillerGene.dir/depend

