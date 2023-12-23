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

# Utility rule file for Fw_Cmd_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl.dir/progress.make

F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdPortAi.xml
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdRegPortAi.xml
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponseEnumAi.xml
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponsePortAi.xml
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdPortAc.cpp
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdPortAc.hpp
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdRegPortAc.cpp
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdRegPortAc.hpp
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponseEnumAc.cpp
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponseEnumAc.hpp
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponsePortAc.cpp
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponsePortAc.hpp

F-Prime/Fw/Cmd/CmdPortAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp
F-Prime/Fw/Cmd/CmdPortAc.cpp: lib/Darwin/libFw_Log.a
F-Prime/Fw/Cmd/CmdPortAc.cpp: lib/Darwin/libFw_Tlm.a
F-Prime/Fw/Cmd/CmdPortAc.cpp: lib/Darwin/libFw_Com.a
F-Prime/Fw/Cmd/CmdPortAc.cpp: lib/Darwin/libFw_Time.a
F-Prime/Fw/Cmd/CmdPortAc.cpp: lib/Darwin/libFw_Port.a
F-Prime/Fw/Cmd/CmdPortAc.cpp: lib/Darwin/libFw_Types.a
F-Prime/Fw/Cmd/CmdPortAc.cpp: lib/Darwin/libFw_Cfg.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating CmdPortAc.cpp, CmdPortAc.hpp, CmdRegPortAc.cpp, CmdRegPortAc.hpp, CmdResponseEnumAc.cpp, CmdResponseEnumAc.hpp, CmdResponsePortAc.cpp, CmdResponsePortAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Cmd && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Cmd -i /Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Fw/Cmd/CmdPortAc.hpp: F-Prime/Fw/Cmd/CmdPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Cmd/CmdPortAc.hpp

F-Prime/Fw/Cmd/CmdRegPortAc.cpp: F-Prime/Fw/Cmd/CmdPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Cmd/CmdRegPortAc.cpp

F-Prime/Fw/Cmd/CmdRegPortAc.hpp: F-Prime/Fw/Cmd/CmdPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Cmd/CmdRegPortAc.hpp

F-Prime/Fw/Cmd/CmdResponseEnumAc.cpp: F-Prime/Fw/Cmd/CmdPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Cmd/CmdResponseEnumAc.cpp

F-Prime/Fw/Cmd/CmdResponseEnumAc.hpp: F-Prime/Fw/Cmd/CmdPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Cmd/CmdResponseEnumAc.hpp

F-Prime/Fw/Cmd/CmdResponsePortAc.cpp: F-Prime/Fw/Cmd/CmdPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Cmd/CmdResponsePortAc.cpp

F-Prime/Fw/Cmd/CmdResponsePortAc.hpp: F-Prime/Fw/Cmd/CmdPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Cmd/CmdResponsePortAc.hpp

F-Prime/Fw/Cmd/CmdPortAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp
F-Prime/Fw/Cmd/CmdPortAi.xml: lib/Darwin/libFw_Log.a
F-Prime/Fw/Cmd/CmdPortAi.xml: lib/Darwin/libFw_Tlm.a
F-Prime/Fw/Cmd/CmdPortAi.xml: lib/Darwin/libFw_Com.a
F-Prime/Fw/Cmd/CmdPortAi.xml: lib/Darwin/libFw_Time.a
F-Prime/Fw/Cmd/CmdPortAi.xml: lib/Darwin/libFw_Port.a
F-Prime/Fw/Cmd/CmdPortAi.xml: lib/Darwin/libFw_Types.a
F-Prime/Fw/Cmd/CmdPortAi.xml: lib/Darwin/libFw_Cfg.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating CmdPortAi.xml, CmdRegPortAi.xml, CmdResponseEnumAi.xml, CmdResponsePortAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Cmd && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Cmd -i /Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Fw/Cmd/CmdRegPortAi.xml: F-Prime/Fw/Cmd/CmdPortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Cmd/CmdRegPortAi.xml

F-Prime/Fw/Cmd/CmdResponseEnumAi.xml: F-Prime/Fw/Cmd/CmdPortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Cmd/CmdResponseEnumAi.xml

F-Prime/Fw/Cmd/CmdResponsePortAi.xml: F-Prime/Fw/Cmd/CmdPortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Cmd/CmdResponsePortAi.xml

Fw_Cmd_impl: F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdPortAc.cpp
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdPortAc.hpp
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdPortAi.xml
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdRegPortAc.cpp
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdRegPortAc.hpp
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdRegPortAi.xml
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponseEnumAc.cpp
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponseEnumAc.hpp
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponseEnumAi.xml
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponsePortAc.cpp
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponsePortAc.hpp
Fw_Cmd_impl: F-Prime/Fw/Cmd/CmdResponsePortAi.xml
Fw_Cmd_impl: F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl.dir/build.make
.PHONY : Fw_Cmd_impl

# Rule to build all files generated by this target.
F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl.dir/build: Fw_Cmd_impl
.PHONY : F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl.dir/build

F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Cmd && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Cmd_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl.dir/clean

F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Cmd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Fw/Cmd/CMakeFiles/Fw_Cmd_impl.dir/depend

