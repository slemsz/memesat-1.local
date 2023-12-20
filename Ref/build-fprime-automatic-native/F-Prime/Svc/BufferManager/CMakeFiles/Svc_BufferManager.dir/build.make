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

# Include any dependencies generated for this target.
include F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/flags.make

F-Prime/Svc/BufferManager/BufferManagerComponentAi.xml: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/BufferManager.fpp
F-Prime/Svc/BufferManager/BufferManagerComponentAi.xml: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/Events.fppi
F-Prime/Svc/BufferManager/BufferManagerComponentAi.xml: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/Telemetry.fppi
F-Prime/Svc/BufferManager/BufferManagerComponentAi.xml: lib/Linux/libFw_Buffer.a
F-Prime/Svc/BufferManager/BufferManagerComponentAi.xml: lib/Linux/libFw_Log.a
F-Prime/Svc/BufferManager/BufferManagerComponentAi.xml: lib/Linux/libFw_Time.a
F-Prime/Svc/BufferManager/BufferManagerComponentAi.xml: lib/Linux/libFw_Tlm.a
F-Prime/Svc/BufferManager/BufferManagerComponentAi.xml: lib/Linux/libSvc_Sched.a
F-Prime/Svc/BufferManager/BufferManagerComponentAi.xml: lib/Linux/libOs.a
F-Prime/Svc/BufferManager/BufferManagerComponentAi.xml: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating BufferManagerComponentAi.xml"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager && /home/krokko/Desktop/MEMEdir/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager -i /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Buffer/Buffer.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/Log.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/Sched/Sched.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/BufferManager.fpp -p /home/krokko/Desktop/MEMEdir/memesat-1.local

F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/BufferManager.fpp
F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/Events.fppi
F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/Telemetry.fppi
F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp: lib/Linux/libFw_Buffer.a
F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp: lib/Linux/libFw_Log.a
F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp: lib/Linux/libFw_Time.a
F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp: lib/Linux/libFw_Tlm.a
F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp: lib/Linux/libSvc_Sched.a
F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp: lib/Linux/libOs.a
F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating BufferManagerComponentAc.cpp, BufferManagerComponentAc.hpp"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager && /home/krokko/Desktop/MEMEdir/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager -i /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Buffer/Buffer.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/Log.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/Sched/Sched.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/BufferManager.fpp -p /home/krokko/Desktop/MEMEdir/memesat-1.local,/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Svc/BufferManager/BufferManagerComponentAc.hpp: F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/BufferManager/BufferManagerComponentAc.hpp

F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.o: F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/flags.make
F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.o: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/BufferManagerComponentImpl.cpp
F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.o: F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc5e7706a -DASSERT_RELATIVE_PATH='"Svc/BufferManager/BufferManagerComponentImpl.cpp"' -MD -MT F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.o -MF CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.o.d -o CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/BufferManagerComponentImpl.cpp

F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc5e7706a -DASSERT_RELATIVE_PATH='"Svc/BufferManager/BufferManagerComponentImpl.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/BufferManagerComponentImpl.cpp > CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.i

F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc5e7706a -DASSERT_RELATIVE_PATH='"Svc/BufferManager/BufferManagerComponentImpl.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager/BufferManagerComponentImpl.cpp -o CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.s

F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.o: F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/flags.make
F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.o: F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp
F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.o: F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x90ce96ef -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp"' -MD -MT F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.o -MF CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.o.d -o CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp

F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x90ce96ef -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp > CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.i

F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x90ce96ef -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp -o CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.s

# Object files for target Svc_BufferManager
Svc_BufferManager_OBJECTS = \
"CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.o" \
"CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.o"

# External object files for target Svc_BufferManager
Svc_BufferManager_EXTERNAL_OBJECTS =

lib/Linux/libSvc_BufferManager.a: F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentImpl.cpp.o
lib/Linux/libSvc_BufferManager.a: F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/BufferManagerComponentAc.cpp.o
lib/Linux/libSvc_BufferManager.a: F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/build.make
lib/Linux/libSvc_BufferManager.a: F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libSvc_BufferManager.a"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager && $(CMAKE_COMMAND) -P CMakeFiles/Svc_BufferManager.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_BufferManager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/build: lib/Linux/libSvc_BufferManager.a
.PHONY : F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/build

F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/clean:
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager && $(CMAKE_COMMAND) -P CMakeFiles/Svc_BufferManager.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/clean

F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/depend: F-Prime/Svc/BufferManager/BufferManagerComponentAc.cpp
F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/depend: F-Prime/Svc/BufferManager/BufferManagerComponentAc.hpp
F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/depend: F-Prime/Svc/BufferManager/BufferManagerComponentAi.xml
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/BufferManager /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/BufferManager/CMakeFiles/Svc_BufferManager.dir/depend

