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

# Utility rule file for Svc_TlmChan_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl.dir/progress.make

F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl: F-Prime/Svc/TlmChan/TlmChanComponentAi.xml
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl: F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl: F-Prime/Svc/TlmChan/TlmChanComponentAc.hpp
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChanComponentImpl.hpp-template
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChanComponentImpl.cpp-template

F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChan.fpp
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Darwin/libFw_Com.a
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Darwin/libSvc_Ping.a
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Darwin/libFw_CompQueued.a
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Darwin/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating TlmChanComponentAc.cpp, TlmChanComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/TlmChan && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/TlmChan -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Ping/Ping.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChan.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Svc/TlmChan/TlmChanComponentAc.hpp: F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/TlmChan/TlmChanComponentAc.hpp

F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChan.fpp
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Darwin/libFw_Com.a
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Darwin/libSvc_Ping.a
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Darwin/libFw_CompQueued.a
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Darwin/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating TlmChanComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/TlmChan && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/TlmChan -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Ping/Ping.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChan.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

/Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChanComponentImpl.hpp-template: F-Prime/Svc/TlmChan/TlmChanComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChanComponentImpl.hpp-template, /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChanComponentImpl.cpp-template"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/TlmChan && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E env PYTHONPATH=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/src:/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/Users/heron/Desktop/memedir/memesat-1.local:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime FPRIME_AC_CONSTANTS_FILE=/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python /Users/heron/Desktop/memedir/fprime-venv/bin/python3 /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan --build_root -t /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/TlmChan/TlmChanComponentAi.xml

/Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChanComponentImpl.cpp-template: /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChanComponentImpl.hpp-template
	@$(CMAKE_COMMAND) -E touch_nocreate /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChanComponentImpl.cpp-template

Svc_TlmChan_impl: F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl
Svc_TlmChan_impl: F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp
Svc_TlmChan_impl: F-Prime/Svc/TlmChan/TlmChanComponentAc.hpp
Svc_TlmChan_impl: F-Prime/Svc/TlmChan/TlmChanComponentAi.xml
Svc_TlmChan_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChanComponentImpl.cpp-template
Svc_TlmChan_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan/TlmChanComponentImpl.hpp-template
Svc_TlmChan_impl: F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl.dir/build.make
.PHONY : Svc_TlmChan_impl

# Rule to build all files generated by this target.
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl.dir/build: Svc_TlmChan_impl
.PHONY : F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl.dir/build

F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/TlmChan && $(CMAKE_COMMAND) -P CMakeFiles/Svc_TlmChan_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl.dir/clean

F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/TlmChan /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/TlmChan /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan_impl.dir/depend

