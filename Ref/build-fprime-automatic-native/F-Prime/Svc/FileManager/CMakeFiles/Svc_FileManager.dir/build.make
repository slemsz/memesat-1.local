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
include F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/flags.make

F-Prime/Svc/FileManager/FileManagerComponentAi.xml: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/FileManager.fpp
F-Prime/Svc/FileManager/FileManagerComponentAi.xml: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/Commands.fppi
F-Prime/Svc/FileManager/FileManagerComponentAi.xml: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/Events.fppi
F-Prime/Svc/FileManager/FileManagerComponentAi.xml: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/Telemetry.fppi
F-Prime/Svc/FileManager/FileManagerComponentAi.xml: lib/Linux/libFw_Cmd.a
F-Prime/Svc/FileManager/FileManagerComponentAi.xml: lib/Linux/libFw_Log.a
F-Prime/Svc/FileManager/FileManagerComponentAi.xml: lib/Linux/libFw_Tlm.a
F-Prime/Svc/FileManager/FileManagerComponentAi.xml: lib/Linux/libSvc_Ping.a
F-Prime/Svc/FileManager/FileManagerComponentAi.xml: lib/Linux/libFw_CompQueued.a
F-Prime/Svc/FileManager/FileManagerComponentAi.xml: lib/Linux/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating FileManagerComponentAi.xml"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager && /home/krokko/Desktop/MEMEdir/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager -i /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Cmd/Cmd.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/Log.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/Ping/Ping.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/FileManager.fpp -p /home/krokko/Desktop/MEMEdir/memesat-1.local

F-Prime/Svc/FileManager/FileManagerComponentAc.cpp: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/FileManager.fpp
F-Prime/Svc/FileManager/FileManagerComponentAc.cpp: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/Commands.fppi
F-Prime/Svc/FileManager/FileManagerComponentAc.cpp: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/Events.fppi
F-Prime/Svc/FileManager/FileManagerComponentAc.cpp: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/Telemetry.fppi
F-Prime/Svc/FileManager/FileManagerComponentAc.cpp: lib/Linux/libFw_Cmd.a
F-Prime/Svc/FileManager/FileManagerComponentAc.cpp: lib/Linux/libFw_Log.a
F-Prime/Svc/FileManager/FileManagerComponentAc.cpp: lib/Linux/libFw_Tlm.a
F-Prime/Svc/FileManager/FileManagerComponentAc.cpp: lib/Linux/libSvc_Ping.a
F-Prime/Svc/FileManager/FileManagerComponentAc.cpp: lib/Linux/libFw_CompQueued.a
F-Prime/Svc/FileManager/FileManagerComponentAc.cpp: lib/Linux/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating FileManagerComponentAc.cpp, FileManagerComponentAc.hpp"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager && /home/krokko/Desktop/MEMEdir/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager -i /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Cmd/Cmd.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/Log.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/Ping/Ping.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/FileManager.fpp -p /home/krokko/Desktop/MEMEdir/memesat-1.local,/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Svc/FileManager/FileManagerComponentAc.hpp: F-Prime/Svc/FileManager/FileManagerComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileManager/FileManagerComponentAc.hpp

F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManager.cpp.o: F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/flags.make
F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManager.cpp.o: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/FileManager.cpp
F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManager.cpp.o: F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManager.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6791a591 -DASSERT_RELATIVE_PATH='"Svc/FileManager/FileManager.cpp"' -MD -MT F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManager.cpp.o -MF CMakeFiles/Svc_FileManager.dir/FileManager.cpp.o.d -o CMakeFiles/Svc_FileManager.dir/FileManager.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/FileManager.cpp

F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_FileManager.dir/FileManager.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6791a591 -DASSERT_RELATIVE_PATH='"Svc/FileManager/FileManager.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/FileManager.cpp > CMakeFiles/Svc_FileManager.dir/FileManager.cpp.i

F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_FileManager.dir/FileManager.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6791a591 -DASSERT_RELATIVE_PATH='"Svc/FileManager/FileManager.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager/FileManager.cpp -o CMakeFiles/Svc_FileManager.dir/FileManager.cpp.s

F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.o: F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/flags.make
F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.o: F-Prime/Svc/FileManager/FileManagerComponentAc.cpp
F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.o: F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc9507522 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager/FileManagerComponentAc.cpp"' -MD -MT F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.o -MF CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.o.d -o CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager/FileManagerComponentAc.cpp

F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc9507522 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager/FileManagerComponentAc.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager/FileManagerComponentAc.cpp > CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.i

F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc9507522 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager/FileManagerComponentAc.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager/FileManagerComponentAc.cpp -o CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.s

# Object files for target Svc_FileManager
Svc_FileManager_OBJECTS = \
"CMakeFiles/Svc_FileManager.dir/FileManager.cpp.o" \
"CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.o"

# External object files for target Svc_FileManager
Svc_FileManager_EXTERNAL_OBJECTS =

lib/Linux/libSvc_FileManager.a: F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManager.cpp.o
lib/Linux/libSvc_FileManager.a: F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/FileManagerComponentAc.cpp.o
lib/Linux/libSvc_FileManager.a: F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/build.make
lib/Linux/libSvc_FileManager.a: F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libSvc_FileManager.a"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager && $(CMAKE_COMMAND) -P CMakeFiles/Svc_FileManager.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_FileManager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/build: lib/Linux/libSvc_FileManager.a
.PHONY : F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/build

F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/clean:
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager && $(CMAKE_COMMAND) -P CMakeFiles/Svc_FileManager.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/clean

F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/depend: F-Prime/Svc/FileManager/FileManagerComponentAc.cpp
F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/depend: F-Prime/Svc/FileManager/FileManagerComponentAc.hpp
F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/depend: F-Prime/Svc/FileManager/FileManagerComponentAi.xml
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/FileManager /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/FileManager/CMakeFiles/Svc_FileManager.dir/depend

