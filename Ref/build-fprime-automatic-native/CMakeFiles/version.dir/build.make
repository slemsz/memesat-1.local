# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

# Utility rule file for version.

# Include any custom commands dependencies for this target.
include CMakeFiles/version.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/version.dir/progress.make

CMakeFiles/version:
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local && /usr/bin/cmake -E env PYTHONPATH=:/home/krokko/Desktop/MEMEdir/memesat-1.local/Autocoders/Python/src /home/krokko/Desktop/MEMEdir/memesat-1.local/cmake/target/version/generate_version_header.py /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/version.hpp.tmp 
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local && /usr/bin/cmake -E copy_if_different /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/version.hpp.tmp /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/version.hpp

version: CMakeFiles/version
version: CMakeFiles/version.dir/build.make
.PHONY : version

# Rule to build all files generated by this target.
CMakeFiles/version.dir/build: version
.PHONY : CMakeFiles/version.dir/build

CMakeFiles/version.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/version.dir/cmake_clean.cmake
.PHONY : CMakeFiles/version.dir/clean

CMakeFiles/version.dir/depend:
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles/version.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/version.dir/depend

