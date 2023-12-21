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
CMAKE_SOURCE_DIR = /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

# Utility rule file for Svc_BufferLogger_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl.dir/progress.make

F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml
F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAi.xml
F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp
F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.hpp
F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAc.cpp
F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAc.hpp
F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLoggerComponentImpl.hpp-template
F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLoggerComponentImpl.cpp-template

F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLogger.fpp
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/Commands.fppi
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/Events.fppi
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/Telemetry.fppi
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: lib/Linux/libFw_Buffer.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: lib/Linux/libFw_Cmd.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: lib/Linux/libFw_Com.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: lib/Linux/libFw_Log.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: lib/Linux/libFw_Tlm.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: lib/Linux/libSvc_Ping.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: lib/Linux/libSvc_Sched.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: lib/Linux/libFw_CompQueued.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp: lib/Linux/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating BufferLoggerComponentAc.cpp, BufferLoggerComponentAc.hpp, BufferLogger_LogStateEnumAc.cpp, BufferLogger_LogStateEnumAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferLogger && /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferLogger -i /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Buffer/Buffer.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Cmd/Cmd.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Com/Com.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Log/Log.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Ping/Ping.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Sched/Sched.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLogger.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.hpp: F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.hpp

F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAc.cpp: F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAc.cpp

F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAc.hpp: F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAc.hpp

F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLogger.fpp
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/Commands.fppi
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/Events.fppi
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/Telemetry.fppi
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: lib/Linux/libFw_Buffer.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: lib/Linux/libFw_Cmd.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: lib/Linux/libFw_Com.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: lib/Linux/libFw_Log.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: lib/Linux/libFw_Tlm.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: lib/Linux/libSvc_Ping.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: lib/Linux/libSvc_Sched.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: lib/Linux/libFw_CompQueued.a
F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml: lib/Linux/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating BufferLoggerComponentAi.xml, BufferLogger_LogStateEnumAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferLogger && /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferLogger -i /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Buffer/Buffer.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Cmd/Cmd.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Com/Com.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Log/Log.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Ping/Ping.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Sched/Sched.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLogger.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local

F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAi.xml: F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAi.xml

/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLoggerComponentImpl.hpp-template: F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLoggerComponentImpl.hpp-template, /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLoggerComponentImpl.cpp-template"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferLogger && /usr/bin/cmake -E env PYTHONPATH=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Autocoders/Python/src:/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local:/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native:/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime FPRIME_AC_CONSTANTS_FILE=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Autocoders/Python /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/python3 /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger --build_root -t /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml

/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLoggerComponentImpl.cpp-template: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLoggerComponentImpl.hpp-template
	@$(CMAKE_COMMAND) -E touch_nocreate /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLoggerComponentImpl.cpp-template

Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.cpp
Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLoggerComponentAc.hpp
Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLoggerComponentAi.xml
Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAc.cpp
Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAc.hpp
Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/BufferLogger_LogStateEnumAi.xml
Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl
Svc_BufferLogger_impl: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLoggerComponentImpl.cpp-template
Svc_BufferLogger_impl: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger/BufferLoggerComponentImpl.hpp-template
Svc_BufferLogger_impl: F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl.dir/build.make
.PHONY : Svc_BufferLogger_impl

# Rule to build all files generated by this target.
F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl.dir/build: Svc_BufferLogger_impl
.PHONY : F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl.dir/build

F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferLogger && $(CMAKE_COMMAND) -P CMakeFiles/Svc_BufferLogger_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl.dir/clean

F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl.dir/depend:
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/BufferLogger /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferLogger /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/BufferLogger/CMakeFiles/Svc_BufferLogger_impl.dir/depend

