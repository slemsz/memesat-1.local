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
CMAKE_BINARY_DIR = /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

# Utility rule file for Ref_SensorTypes_impl.

# Include any custom commands dependencies for this target.
include Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl.dir/progress.make

Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl: Ref/SensorTypes/CELL_DATAArrayAi.xml
Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl: Ref/SensorTypes/PANEL_DATAArrayAi.xml
Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl: Ref/SensorTypes/SWITCH_STATEArrayAi.xml
Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl: Ref/SensorTypes/CELL_DATAArrayAc.cpp
Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl: Ref/SensorTypes/CELL_DATAArrayAc.hpp
Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl: Ref/SensorTypes/PANEL_DATAArrayAc.cpp
Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl: Ref/SensorTypes/PANEL_DATAArrayAc.hpp
Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl: Ref/SensorTypes/SWITCH_STATEArrayAc.cpp
Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl: Ref/SensorTypes/SWITCH_STATEArrayAc.hpp

Ref/SensorTypes/CELL_DATAArrayAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Ref/SensorTypes/SensorTypes.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating CELL_DATAArrayAc.cpp, CELL_DATAArrayAc.hpp, PANEL_DATAArrayAc.cpp, PANEL_DATAArrayAc.hpp, SWITCH_STATEArrayAc.cpp, SWITCH_STATEArrayAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SensorTypes && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SensorTypes /Users/heron/Desktop/memedir/memesat-1.local/Ref/SensorTypes/SensorTypes.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

Ref/SensorTypes/CELL_DATAArrayAc.hpp: Ref/SensorTypes/CELL_DATAArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SensorTypes/CELL_DATAArrayAc.hpp

Ref/SensorTypes/PANEL_DATAArrayAc.cpp: Ref/SensorTypes/CELL_DATAArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SensorTypes/PANEL_DATAArrayAc.cpp

Ref/SensorTypes/PANEL_DATAArrayAc.hpp: Ref/SensorTypes/CELL_DATAArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SensorTypes/PANEL_DATAArrayAc.hpp

Ref/SensorTypes/SWITCH_STATEArrayAc.cpp: Ref/SensorTypes/CELL_DATAArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SensorTypes/SWITCH_STATEArrayAc.cpp

Ref/SensorTypes/SWITCH_STATEArrayAc.hpp: Ref/SensorTypes/CELL_DATAArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SensorTypes/SWITCH_STATEArrayAc.hpp

Ref/SensorTypes/CELL_DATAArrayAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Ref/SensorTypes/SensorTypes.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating CELL_DATAArrayAi.xml, PANEL_DATAArrayAi.xml, SWITCH_STATEArrayAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SensorTypes && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SensorTypes /Users/heron/Desktop/memedir/memesat-1.local/Ref/SensorTypes/SensorTypes.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

Ref/SensorTypes/PANEL_DATAArrayAi.xml: Ref/SensorTypes/CELL_DATAArrayAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SensorTypes/PANEL_DATAArrayAi.xml

Ref/SensorTypes/SWITCH_STATEArrayAi.xml: Ref/SensorTypes/CELL_DATAArrayAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SensorTypes/SWITCH_STATEArrayAi.xml

Ref_SensorTypes_impl: Ref/SensorTypes/CELL_DATAArrayAc.cpp
Ref_SensorTypes_impl: Ref/SensorTypes/CELL_DATAArrayAc.hpp
Ref_SensorTypes_impl: Ref/SensorTypes/CELL_DATAArrayAi.xml
Ref_SensorTypes_impl: Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl
Ref_SensorTypes_impl: Ref/SensorTypes/PANEL_DATAArrayAc.cpp
Ref_SensorTypes_impl: Ref/SensorTypes/PANEL_DATAArrayAc.hpp
Ref_SensorTypes_impl: Ref/SensorTypes/PANEL_DATAArrayAi.xml
Ref_SensorTypes_impl: Ref/SensorTypes/SWITCH_STATEArrayAc.cpp
Ref_SensorTypes_impl: Ref/SensorTypes/SWITCH_STATEArrayAc.hpp
Ref_SensorTypes_impl: Ref/SensorTypes/SWITCH_STATEArrayAi.xml
Ref_SensorTypes_impl: Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl.dir/build.make
.PHONY : Ref_SensorTypes_impl

# Rule to build all files generated by this target.
Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl.dir/build: Ref_SensorTypes_impl
.PHONY : Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl.dir/build

Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SensorTypes && $(CMAKE_COMMAND) -P CMakeFiles/Ref_SensorTypes_impl.dir/cmake_clean.cmake
.PHONY : Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl.dir/clean

Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Ref/SensorTypes /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SensorTypes /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Ref/SensorTypes/CMakeFiles/Ref_SensorTypes_impl.dir/depend

