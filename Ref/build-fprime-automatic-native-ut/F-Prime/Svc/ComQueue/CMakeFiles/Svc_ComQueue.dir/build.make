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

# Include any dependencies generated for this target.
include F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/flags.make

F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/ComQueue/ComQueue.fpp
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml: lib/Darwin/libFw_Com.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml: lib/Darwin/libFw_Log.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml: lib/Darwin/libFw_Ports_SuccessCondition.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml: lib/Darwin/libFw_CompQueued.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml: lib/Darwin/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating BuffQueueDepthArrayAi.xml, ComQueueComponentAi.xml, ComQueueDepthArrayAi.xml, QueueTypeEnumAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Ports/SuccessCondition/SuccessCondition.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Types/Types.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/ComQueue/ComQueue.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Svc/ComQueue/ComQueueComponentAi.xml: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/ComQueue/ComQueueComponentAi.xml

F-Prime/Svc/ComQueue/ComQueueDepthArrayAi.xml: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/ComQueue/ComQueueDepthArrayAi.xml

F-Prime/Svc/ComQueue/QueueTypeEnumAi.xml: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/ComQueue/QueueTypeEnumAi.xml

F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/ComQueue/ComQueue.fpp
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp: lib/Darwin/libFw_Com.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp: lib/Darwin/libFw_Log.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp: lib/Darwin/libFw_Ports_SuccessCondition.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp: lib/Darwin/libFw_CompQueued.a
F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp: lib/Darwin/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating BuffQueueDepthArrayAc.cpp, BuffQueueDepthArrayAc.hpp, ComQueueComponentAc.cpp, ComQueueComponentAc.hpp, ComQueueDepthArrayAc.cpp, ComQueueDepthArrayAc.hpp, QueueTypeEnumAc.cpp, QueueTypeEnumAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Ports/SuccessCondition/SuccessCondition.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Types/Types.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/ComQueue/ComQueue.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.hpp: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.hpp

F-Prime/Svc/ComQueue/ComQueueComponentAc.cpp: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/ComQueue/ComQueueComponentAc.cpp

F-Prime/Svc/ComQueue/ComQueueComponentAc.hpp: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/ComQueue/ComQueueComponentAc.hpp

F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.cpp: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.cpp

F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.hpp: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.hpp

F-Prime/Svc/ComQueue/QueueTypeEnumAc.cpp: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/ComQueue/QueueTypeEnumAc.cpp

F-Prime/Svc/ComQueue/QueueTypeEnumAc.hpp: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/ComQueue/QueueTypeEnumAc.hpp

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.o: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/flags.make
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/ComQueue/ComQueue.cpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.o: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x74372cb8 -DASSERT_RELATIVE_PATH='"Svc/ComQueue/ComQueue.cpp"' -MD -MT F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.o -MF CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.o.d -o CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/ComQueue/ComQueue.cpp

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x74372cb8 -DASSERT_RELATIVE_PATH='"Svc/ComQueue/ComQueue.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/ComQueue/ComQueue.cpp > CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.i

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x74372cb8 -DASSERT_RELATIVE_PATH='"Svc/ComQueue/ComQueue.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/ComQueue/ComQueue.cpp -o CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.s

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.o: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/flags.make
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.o: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.o: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2d2cd8b1 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp"' -MD -MT F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.o -MF CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.o.d -o CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2d2cd8b1 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp > CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.i

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2d2cd8b1 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp -o CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.s

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.o: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/flags.make
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.o: F-Prime/Svc/ComQueue/ComQueueComponentAc.cpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.o: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x39afa717 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueComponentAc.cpp"' -MD -MT F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.o -MF CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.o.d -o CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueComponentAc.cpp

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x39afa717 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueComponentAc.cpp > CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.i

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x39afa717 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueComponentAc.cpp -o CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.s

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.o: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/flags.make
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.o: F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.cpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.o: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x91a16843 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.cpp"' -MD -MT F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.o -MF CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.o.d -o CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.cpp

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x91a16843 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.cpp > CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.i

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x91a16843 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.cpp -o CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.s

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.o: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/flags.make
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.o: F-Prime/Svc/ComQueue/QueueTypeEnumAc.cpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.o: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4c6bf889 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/QueueTypeEnumAc.cpp"' -MD -MT F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.o -MF CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.o.d -o CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/QueueTypeEnumAc.cpp

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4c6bf889 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/QueueTypeEnumAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/QueueTypeEnumAc.cpp > CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.i

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4c6bf889 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/QueueTypeEnumAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/QueueTypeEnumAc.cpp -o CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.s

# Object files for target Svc_ComQueue
Svc_ComQueue_OBJECTS = \
"CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.o" \
"CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.o" \
"CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.o" \
"CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.o" \
"CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.o"

# External object files for target Svc_ComQueue
Svc_ComQueue_EXTERNAL_OBJECTS =

lib/Darwin/libSvc_ComQueue.a: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueue.cpp.o
lib/Darwin/libSvc_ComQueue.a: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/BuffQueueDepthArrayAc.cpp.o
lib/Darwin/libSvc_ComQueue.a: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueComponentAc.cpp.o
lib/Darwin/libSvc_ComQueue.a: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/ComQueueDepthArrayAc.cpp.o
lib/Darwin/libSvc_ComQueue.a: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/QueueTypeEnumAc.cpp.o
lib/Darwin/libSvc_ComQueue.a: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/build.make
lib/Darwin/libSvc_ComQueue.a: F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library ../../../lib/Darwin/libSvc_ComQueue.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && $(CMAKE_COMMAND) -P CMakeFiles/Svc_ComQueue.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_ComQueue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/build: lib/Darwin/libSvc_ComQueue.a
.PHONY : F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/build

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue && $(CMAKE_COMMAND) -P CMakeFiles/Svc_ComQueue.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/clean

F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.cpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAc.hpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/BuffQueueDepthArrayAi.xml
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/ComQueueComponentAc.cpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/ComQueueComponentAc.hpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/ComQueueComponentAi.xml
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.cpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/ComQueueDepthArrayAc.hpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/ComQueueDepthArrayAi.xml
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/QueueTypeEnumAc.cpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/QueueTypeEnumAc.hpp
F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend: F-Prime/Svc/ComQueue/QueueTypeEnumAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/ComQueue /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/ComQueue/CMakeFiles/Svc_ComQueue.dir/depend

