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
CMAKE_COMMAND = /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/heron/Desktop/memedir/memesat-1.local/Ref

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

# Utility rule file for Svc_ComLogger_check_leak.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak.dir/progress.make

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComLogger && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E echo [WARNING]\ 'valgrind'\ not\ found.\ Will\ not\ check\ for\ leaks.

Svc_ComLogger_check_leak: F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak
Svc_ComLogger_check_leak: F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak.dir/build.make
.PHONY : Svc_ComLogger_check_leak

# Rule to build all files generated by this target.
F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak.dir/build: Svc_ComLogger_check_leak
.PHONY : F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak.dir/build

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComLogger && $(CMAKE_COMMAND) -P CMakeFiles/Svc_ComLogger_check_leak.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak.dir/clean

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/ComLogger /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComLogger /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger_check_leak.dir/depend

