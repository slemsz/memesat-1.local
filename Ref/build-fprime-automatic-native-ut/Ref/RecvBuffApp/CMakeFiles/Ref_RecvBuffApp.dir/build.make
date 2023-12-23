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
include Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/compiler_depend.make

# Include the progress variables for this target.
include Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/progress.make

# Include the compile flags for this target's objects.
include Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/flags.make

Ref/RecvBuffApp/PacketRecvStatusEnumAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Ref/RecvBuffApp/RecvBuffApp.fpp
Ref/RecvBuffApp/PacketRecvStatusEnumAi.xml: lib/Darwin/libDrv_DataTypes.a
Ref/RecvBuffApp/PacketRecvStatusEnumAi.xml: lib/Darwin/libFw_Cmd.a
Ref/RecvBuffApp/PacketRecvStatusEnumAi.xml: lib/Darwin/libFw_Log.a
Ref/RecvBuffApp/PacketRecvStatusEnumAi.xml: lib/Darwin/libFw_Prm.a
Ref/RecvBuffApp/PacketRecvStatusEnumAi.xml: lib/Darwin/libFw_Tlm.a
Ref/RecvBuffApp/PacketRecvStatusEnumAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating PacketRecvStatusEnumAi.xml, PacketStatSerializableAi.xml, RecvBuffComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/DataTypes/DataTypes.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Prm/Prm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/RecvBuffApp/RecvBuffApp.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

Ref/RecvBuffApp/PacketStatSerializableAi.xml: Ref/RecvBuffApp/PacketRecvStatusEnumAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/RecvBuffApp/PacketStatSerializableAi.xml

Ref/RecvBuffApp/RecvBuffComponentAi.xml: Ref/RecvBuffApp/PacketRecvStatusEnumAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/RecvBuffApp/RecvBuffComponentAi.xml

Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Ref/RecvBuffApp/RecvBuffApp.fpp
Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp: lib/Darwin/libDrv_DataTypes.a
Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp: lib/Darwin/libFw_Cmd.a
Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp: lib/Darwin/libFw_Log.a
Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp: lib/Darwin/libFw_Prm.a
Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp: lib/Darwin/libFw_Tlm.a
Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating PacketRecvStatusEnumAc.cpp, PacketRecvStatusEnumAc.hpp, PacketStatSerializableAc.cpp, PacketStatSerializableAc.hpp, RecvBuffComponentAc.cpp, RecvBuffComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/DataTypes/DataTypes.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Prm/Prm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/RecvBuffApp/RecvBuffApp.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

Ref/RecvBuffApp/PacketRecvStatusEnumAc.hpp: Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/RecvBuffApp/PacketRecvStatusEnumAc.hpp

Ref/RecvBuffApp/PacketStatSerializableAc.cpp: Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/RecvBuffApp/PacketStatSerializableAc.cpp

Ref/RecvBuffApp/PacketStatSerializableAc.hpp: Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/RecvBuffApp/PacketStatSerializableAc.hpp

Ref/RecvBuffApp/RecvBuffComponentAc.cpp: Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/RecvBuffApp/RecvBuffComponentAc.cpp

Ref/RecvBuffApp/RecvBuffComponentAc.hpp: Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/RecvBuffApp/RecvBuffComponentAc.hpp

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.o: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/flags.make
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Ref/RecvBuffApp/RecvBuffComponentImpl.cpp
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.o: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x8c26c837 -DASSERT_RELATIVE_PATH='"Ref/RecvBuffApp/RecvBuffComponentImpl.cpp"' -MD -MT Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.o -MF CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.o.d -o CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/RecvBuffApp/RecvBuffComponentImpl.cpp

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x8c26c837 -DASSERT_RELATIVE_PATH='"Ref/RecvBuffApp/RecvBuffComponentImpl.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/RecvBuffApp/RecvBuffComponentImpl.cpp > CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.i

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x8c26c837 -DASSERT_RELATIVE_PATH='"Ref/RecvBuffApp/RecvBuffComponentImpl.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/RecvBuffApp/RecvBuffComponentImpl.cpp -o CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.s

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.o: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/flags.make
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.o: Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.o: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x22123b60 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp"' -MD -MT Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.o -MF CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.o.d -o CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x22123b60 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp > CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.i

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x22123b60 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp -o CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.s

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.o: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/flags.make
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.o: Ref/RecvBuffApp/PacketStatSerializableAc.cpp
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.o: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x40da5fb9 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketStatSerializableAc.cpp"' -MD -MT Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.o -MF CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.o.d -o CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketStatSerializableAc.cpp

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x40da5fb9 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketStatSerializableAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketStatSerializableAc.cpp > CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.i

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x40da5fb9 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketStatSerializableAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/PacketStatSerializableAc.cpp -o CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.s

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.o: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/flags.make
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.o: Ref/RecvBuffApp/RecvBuffComponentAc.cpp
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.o: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x827bdb81 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/RecvBuffComponentAc.cpp"' -MD -MT Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.o -MF CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.o.d -o CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/RecvBuffComponentAc.cpp

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x827bdb81 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/RecvBuffComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/RecvBuffComponentAc.cpp > CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.i

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x827bdb81 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/RecvBuffComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/RecvBuffComponentAc.cpp -o CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.s

# Object files for target Ref_RecvBuffApp
Ref_RecvBuffApp_OBJECTS = \
"CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.o" \
"CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.o" \
"CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.o" \
"CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.o"

# External object files for target Ref_RecvBuffApp
Ref_RecvBuffApp_EXTERNAL_OBJECTS =

lib/Darwin/libRef_RecvBuffApp.a: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentImpl.cpp.o
lib/Darwin/libRef_RecvBuffApp.a: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketRecvStatusEnumAc.cpp.o
lib/Darwin/libRef_RecvBuffApp.a: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/PacketStatSerializableAc.cpp.o
lib/Darwin/libRef_RecvBuffApp.a: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/RecvBuffComponentAc.cpp.o
lib/Darwin/libRef_RecvBuffApp.a: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/build.make
lib/Darwin/libRef_RecvBuffApp.a: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library ../../lib/Darwin/libRef_RecvBuffApp.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && $(CMAKE_COMMAND) -P CMakeFiles/Ref_RecvBuffApp.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ref_RecvBuffApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/build: lib/Darwin/libRef_RecvBuffApp.a
.PHONY : Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/build

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp && $(CMAKE_COMMAND) -P CMakeFiles/Ref_RecvBuffApp.dir/cmake_clean.cmake
.PHONY : Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/clean

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend: Ref/RecvBuffApp/PacketRecvStatusEnumAc.cpp
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend: Ref/RecvBuffApp/PacketRecvStatusEnumAc.hpp
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend: Ref/RecvBuffApp/PacketRecvStatusEnumAi.xml
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend: Ref/RecvBuffApp/PacketStatSerializableAc.cpp
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend: Ref/RecvBuffApp/PacketStatSerializableAc.hpp
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend: Ref/RecvBuffApp/PacketStatSerializableAi.xml
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend: Ref/RecvBuffApp/RecvBuffComponentAc.cpp
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend: Ref/RecvBuffApp/RecvBuffComponentAc.hpp
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend: Ref/RecvBuffApp/RecvBuffComponentAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Ref/RecvBuffApp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend

