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

# Utility rule file for Svc_FileDownlink_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl.dir/progress.make

F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl: F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml
F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl: F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp
F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl: F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.hpp
F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlinkComponentImpl.hpp-template
F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlinkComponentImpl.cpp-template

F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlink.fpp
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/Commands.fppi
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/Events.fppi
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/Telemetry.fppi
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: lib/Darwin/libFw_Cmd.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: lib/Darwin/libFw_Log.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: lib/Darwin/libFw_Time.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: lib/Darwin/libSvc_FileDownlinkPorts.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: lib/Darwin/libSvc_Ping.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: lib/Darwin/libFw_CompQueued.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp: lib/Darwin/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating FileDownlinkComponentAc.cpp, FileDownlinkComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlink && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlink -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlinkPorts/FileDownlinkPorts.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Ping/Ping.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlink.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.hpp: F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.hpp

F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlink.fpp
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/Commands.fppi
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/Events.fppi
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/Telemetry.fppi
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: lib/Darwin/libFw_Cmd.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: lib/Darwin/libFw_Log.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: lib/Darwin/libFw_Time.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: lib/Darwin/libSvc_FileDownlinkPorts.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: lib/Darwin/libSvc_Ping.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: lib/Darwin/libFw_CompQueued.a
F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml: lib/Darwin/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating FileDownlinkComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlink && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlink -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlinkPorts/FileDownlinkPorts.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Ping/Ping.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlink.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

/Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlinkComponentImpl.hpp-template: F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlinkComponentImpl.hpp-template, /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlinkComponentImpl.cpp-template"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlink && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E env PYTHONPATH=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/src:/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/Users/heron/Desktop/memedir/memesat-1.local:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime FPRIME_AC_CONSTANTS_FILE=/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python /Users/heron/Desktop/memedir/fprime-venv/bin/python3 /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink --build_root -t /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml

/Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlinkComponentImpl.cpp-template: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlinkComponentImpl.hpp-template
	@$(CMAKE_COMMAND) -E touch_nocreate /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlinkComponentImpl.cpp-template

Svc_FileDownlink_impl: F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl
Svc_FileDownlink_impl: F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.cpp
Svc_FileDownlink_impl: F-Prime/Svc/FileDownlink/FileDownlinkComponentAc.hpp
Svc_FileDownlink_impl: F-Prime/Svc/FileDownlink/FileDownlinkComponentAi.xml
Svc_FileDownlink_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlinkComponentImpl.cpp-template
Svc_FileDownlink_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink/FileDownlinkComponentImpl.hpp-template
Svc_FileDownlink_impl: F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl.dir/build.make
.PHONY : Svc_FileDownlink_impl

# Rule to build all files generated by this target.
F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl.dir/build: Svc_FileDownlink_impl
.PHONY : F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl.dir/build

F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlink && $(CMAKE_COMMAND) -P CMakeFiles/Svc_FileDownlink_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl.dir/clean

F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/FileDownlink /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlink /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/FileDownlink/CMakeFiles/Svc_FileDownlink_impl.dir/depend

