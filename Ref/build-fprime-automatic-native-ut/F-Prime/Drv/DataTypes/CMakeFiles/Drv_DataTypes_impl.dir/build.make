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

# Utility rule file for Drv_DataTypes_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl.dir/progress.make

F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl: F-Prime/Drv/DataTypes/DataBufferPortAi.xml
F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl: F-Prime/Drv/DataTypes/DataBufferPortAc.cpp
F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl: F-Prime/Drv/DataTypes/DataBufferPortAc.hpp

F-Prime/Drv/DataTypes/DataBufferPortAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Drv/DataTypes/DataTypes.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating DataBufferPortAc.cpp, DataBufferPortAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/DataTypes && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/DataTypes /Users/heron/Desktop/memedir/memesat-1.local/Drv/DataTypes/DataTypes.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Drv/DataTypes/DataBufferPortAc.hpp: F-Prime/Drv/DataTypes/DataBufferPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/DataTypes/DataBufferPortAc.hpp

F-Prime/Drv/DataTypes/DataBufferPortAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Drv/DataTypes/DataTypes.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating DataBufferPortAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/DataTypes && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/DataTypes /Users/heron/Desktop/memedir/memesat-1.local/Drv/DataTypes/DataTypes.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

Drv_DataTypes_impl: F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl
Drv_DataTypes_impl: F-Prime/Drv/DataTypes/DataBufferPortAc.cpp
Drv_DataTypes_impl: F-Prime/Drv/DataTypes/DataBufferPortAc.hpp
Drv_DataTypes_impl: F-Prime/Drv/DataTypes/DataBufferPortAi.xml
Drv_DataTypes_impl: F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl.dir/build.make
.PHONY : Drv_DataTypes_impl

# Rule to build all files generated by this target.
F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl.dir/build: Drv_DataTypes_impl
.PHONY : F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl.dir/build

F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/DataTypes && $(CMAKE_COMMAND) -P CMakeFiles/Drv_DataTypes_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl.dir/clean

F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Drv/DataTypes /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/DataTypes /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Drv/DataTypes/CMakeFiles/Drv_DataTypes_impl.dir/depend

