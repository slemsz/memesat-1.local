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

# Utility rule file for Svc_SystemResources_testimpl.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl.dir/progress.make

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourcesComponentAi.xml
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.hpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourcesComponentAc.hpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.cpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.hpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TestMain.cpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TesterHelpers.cpp

F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.fpp
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libFw_Cmd.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libFw_Log.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libFw_Time.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libOs.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating SystemResourceEnabledEnumAc.cpp, SystemResourceEnabledEnumAc.hpp, SystemResourcesComponentAc.cpp, SystemResourcesComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.hpp: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.hpp

F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp

F-Prime/Svc/SystemResources/SystemResourcesComponentAc.hpp: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/SystemResources/SystemResourcesComponentAc.hpp

F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.fpp
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libFw_Cmd.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libFw_Log.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libFw_Time.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libOs.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating SystemResourceEnabledEnumAi.xml, SystemResourcesComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Svc/SystemResources/SystemResourcesComponentAi.xml: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/SystemResources/SystemResourcesComponentAi.xml

/Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.cpp: F-Prime/Svc/SystemResources/SystemResourcesComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.cpp, /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.hpp, /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TestMain.cpp, /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TesterHelpers.cpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E env PYTHONPATH=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/src:/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/Users/heron/Desktop/memedir/memesat-1.local:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime FPRIME_AC_CONSTANTS_FILE=/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python /Users/heron/Desktop/memedir/fprime-venv/bin/python3 /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources --build_root -u /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourcesComponentAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E remove /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TesterBase.hpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TesterBase.cpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/GTestBase.hpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/GTestBase.cpp

/Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.hpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.hpp

/Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TestMain.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TestMain.cpp

/Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TesterHelpers.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TesterHelpers.cpp

Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl
Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp
Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.hpp
Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml
Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp
Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourcesComponentAc.hpp
Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/SystemResourcesComponentAi.xml
Svc_SystemResources_testimpl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TestMain.cpp
Svc_SystemResources_testimpl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.cpp
Svc_SystemResources_testimpl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/Tester.hpp
Svc_SystemResources_testimpl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/TesterHelpers.cpp
Svc_SystemResources_testimpl: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl.dir/build.make
.PHONY : Svc_SystemResources_testimpl

# Rule to build all files generated by this target.
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl.dir/build: Svc_SystemResources_testimpl
.PHONY : F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl.dir/build

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && $(CMAKE_COMMAND) -P CMakeFiles/Svc_SystemResources_testimpl.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl.dir/clean

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources_testimpl.dir/depend

