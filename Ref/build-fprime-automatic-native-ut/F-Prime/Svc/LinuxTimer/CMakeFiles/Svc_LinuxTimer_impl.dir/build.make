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

# Utility rule file for Svc_LinuxTimer_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl.dir/progress.make

F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl: F-Prime/Svc/LinuxTimer/LinuxTimerComponentAi.xml
F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl: F-Prime/Svc/LinuxTimer/LinuxTimerComponentAc.cpp
F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl: F-Prime/Svc/LinuxTimer/LinuxTimerComponentAc.hpp
F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimerComponentImpl.hpp-template
F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimerComponentImpl.cpp-template

F-Prime/Svc/LinuxTimer/LinuxTimerComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimer.fpp
F-Prime/Svc/LinuxTimer/LinuxTimerComponentAc.cpp: lib/Darwin/libSvc_Cycle.a
F-Prime/Svc/LinuxTimer/LinuxTimerComponentAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating LinuxTimerComponentAc.cpp, LinuxTimerComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/LinuxTimer && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/LinuxTimer -i /Users/heron/Desktop/memedir/memesat-1.local/Svc/Cycle/Cycle.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimer.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Svc/LinuxTimer/LinuxTimerComponentAc.hpp: F-Prime/Svc/LinuxTimer/LinuxTimerComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/LinuxTimer/LinuxTimerComponentAc.hpp

F-Prime/Svc/LinuxTimer/LinuxTimerComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimer.fpp
F-Prime/Svc/LinuxTimer/LinuxTimerComponentAi.xml: lib/Darwin/libSvc_Cycle.a
F-Prime/Svc/LinuxTimer/LinuxTimerComponentAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating LinuxTimerComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/LinuxTimer && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/LinuxTimer -i /Users/heron/Desktop/memedir/memesat-1.local/Svc/Cycle/Cycle.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimer.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

/Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimerComponentImpl.hpp-template: F-Prime/Svc/LinuxTimer/LinuxTimerComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimerComponentImpl.hpp-template, /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimerComponentImpl.cpp-template"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/LinuxTimer && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E env PYTHONPATH=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/src:/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/Users/heron/Desktop/memedir/memesat-1.local:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime FPRIME_AC_CONSTANTS_FILE=/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python /Users/heron/Desktop/memedir/fprime-venv/bin/python3 /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer --build_root -t /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/LinuxTimer/LinuxTimerComponentAi.xml

/Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimerComponentImpl.cpp-template: /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimerComponentImpl.hpp-template
	@$(CMAKE_COMMAND) -E touch_nocreate /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimerComponentImpl.cpp-template

Svc_LinuxTimer_impl: F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl
Svc_LinuxTimer_impl: F-Prime/Svc/LinuxTimer/LinuxTimerComponentAc.cpp
Svc_LinuxTimer_impl: F-Prime/Svc/LinuxTimer/LinuxTimerComponentAc.hpp
Svc_LinuxTimer_impl: F-Prime/Svc/LinuxTimer/LinuxTimerComponentAi.xml
Svc_LinuxTimer_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimerComponentImpl.cpp-template
Svc_LinuxTimer_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer/LinuxTimerComponentImpl.hpp-template
Svc_LinuxTimer_impl: F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl.dir/build.make
.PHONY : Svc_LinuxTimer_impl

# Rule to build all files generated by this target.
F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl.dir/build: Svc_LinuxTimer_impl
.PHONY : F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl.dir/build

F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/LinuxTimer && $(CMAKE_COMMAND) -P CMakeFiles/Svc_LinuxTimer_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl.dir/clean

F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/LinuxTimer /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/LinuxTimer /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/LinuxTimer/CMakeFiles/Svc_LinuxTimer_impl.dir/depend
