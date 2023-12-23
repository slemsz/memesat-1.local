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
include Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/compiler_depend.make

# Include the progress variables for this target.
include Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/progress.make

# Include the compile flags for this target's objects.
include Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/flags.make

Ref/SendBuffApp/SendBuffComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Ref/SendBuffApp/SendBuffApp.fpp
Ref/SendBuffApp/SendBuffComponentAi.xml: lib/Darwin/libDrv_DataTypes.a
Ref/SendBuffApp/SendBuffComponentAi.xml: lib/Darwin/libFw_Cmd.a
Ref/SendBuffApp/SendBuffComponentAi.xml: lib/Darwin/libFw_Log.a
Ref/SendBuffApp/SendBuffComponentAi.xml: lib/Darwin/libFw_Prm.a
Ref/SendBuffApp/SendBuffComponentAi.xml: lib/Darwin/libFw_Tlm.a
Ref/SendBuffApp/SendBuffComponentAi.xml: lib/Darwin/libSvc_Sched.a
Ref/SendBuffApp/SendBuffComponentAi.xml: lib/Darwin/libFw_CompQueued.a
Ref/SendBuffApp/SendBuffComponentAi.xml: lib/Darwin/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating SendBuffComponentAi.xml, SendBuff_ActiveStateEnumAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/DataTypes/DataTypes.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Prm/Prm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/SendBuffApp/SendBuffApp.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

Ref/SendBuffApp/SendBuff_ActiveStateEnumAi.xml: Ref/SendBuffApp/SendBuffComponentAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SendBuffApp/SendBuff_ActiveStateEnumAi.xml

Ref/SendBuffApp/SendBuffComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Ref/SendBuffApp/SendBuffApp.fpp
Ref/SendBuffApp/SendBuffComponentAc.cpp: lib/Darwin/libDrv_DataTypes.a
Ref/SendBuffApp/SendBuffComponentAc.cpp: lib/Darwin/libFw_Cmd.a
Ref/SendBuffApp/SendBuffComponentAc.cpp: lib/Darwin/libFw_Log.a
Ref/SendBuffApp/SendBuffComponentAc.cpp: lib/Darwin/libFw_Prm.a
Ref/SendBuffApp/SendBuffComponentAc.cpp: lib/Darwin/libFw_Tlm.a
Ref/SendBuffApp/SendBuffComponentAc.cpp: lib/Darwin/libSvc_Sched.a
Ref/SendBuffApp/SendBuffComponentAc.cpp: lib/Darwin/libFw_CompQueued.a
Ref/SendBuffApp/SendBuffComponentAc.cpp: lib/Darwin/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating SendBuffComponentAc.cpp, SendBuffComponentAc.hpp, SendBuff_ActiveStateEnumAc.cpp, SendBuff_ActiveStateEnumAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/DataTypes/DataTypes.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Prm/Prm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/SendBuffApp/SendBuffApp.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

Ref/SendBuffApp/SendBuffComponentAc.hpp: Ref/SendBuffApp/SendBuffComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SendBuffApp/SendBuffComponentAc.hpp

Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.cpp: Ref/SendBuffApp/SendBuffComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.cpp

Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.hpp: Ref/SendBuffApp/SendBuffComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.hpp

Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.o: Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/flags.make
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Ref/SendBuffApp/SendBuffComponentImpl.cpp
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.o: Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xff8cc7e9 -DASSERT_RELATIVE_PATH='"Ref/SendBuffApp/SendBuffComponentImpl.cpp"' -MD -MT Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.o -MF CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.o.d -o CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/SendBuffApp/SendBuffComponentImpl.cpp

Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xff8cc7e9 -DASSERT_RELATIVE_PATH='"Ref/SendBuffApp/SendBuffComponentImpl.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/SendBuffApp/SendBuffComponentImpl.cpp > CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.i

Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xff8cc7e9 -DASSERT_RELATIVE_PATH='"Ref/SendBuffApp/SendBuffComponentImpl.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/SendBuffApp/SendBuffComponentImpl.cpp -o CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.s

Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.o: Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/flags.make
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.o: Ref/SendBuffApp/SendBuffComponentAc.cpp
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.o: Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6a34bf74 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuffComponentAc.cpp"' -MD -MT Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.o -MF CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.o.d -o CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuffComponentAc.cpp

Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6a34bf74 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuffComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuffComponentAc.cpp > CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.i

Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6a34bf74 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuffComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuffComponentAc.cpp -o CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.s

Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.o: Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/flags.make
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.o: Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.cpp
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.o: Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xa0f413ba -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.cpp"' -MD -MT Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.o -MF CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.o.d -o CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.cpp

Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xa0f413ba -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.cpp > CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.i

Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xa0f413ba -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.cpp -o CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.s

# Object files for target Ref_SendBuffApp
Ref_SendBuffApp_OBJECTS = \
"CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.o" \
"CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.o" \
"CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.o"

# External object files for target Ref_SendBuffApp
Ref_SendBuffApp_EXTERNAL_OBJECTS =

lib/Darwin/libRef_SendBuffApp.a: Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentImpl.cpp.o
lib/Darwin/libRef_SendBuffApp.a: Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuffComponentAc.cpp.o
lib/Darwin/libRef_SendBuffApp.a: Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/SendBuff_ActiveStateEnumAc.cpp.o
lib/Darwin/libRef_SendBuffApp.a: Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/build.make
lib/Darwin/libRef_SendBuffApp.a: Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library ../../lib/Darwin/libRef_SendBuffApp.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && $(CMAKE_COMMAND) -P CMakeFiles/Ref_SendBuffApp.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ref_SendBuffApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/build: lib/Darwin/libRef_SendBuffApp.a
.PHONY : Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/build

Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp && $(CMAKE_COMMAND) -P CMakeFiles/Ref_SendBuffApp.dir/cmake_clean.cmake
.PHONY : Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/clean

Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/depend: Ref/SendBuffApp/SendBuffComponentAc.cpp
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/depend: Ref/SendBuffApp/SendBuffComponentAc.hpp
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/depend: Ref/SendBuffApp/SendBuffComponentAi.xml
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/depend: Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.cpp
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/depend: Ref/SendBuffApp/SendBuff_ActiveStateEnumAc.hpp
Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/depend: Ref/SendBuffApp/SendBuff_ActiveStateEnumAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Ref/SendBuffApp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Ref/SendBuffApp/CMakeFiles/Ref_SendBuffApp.dir/depend
