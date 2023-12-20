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
include F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/flags.make

F-Prime/Fw/Log/LogPortAi.xml: /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/Log.fpp
F-Prime/Fw/Log/LogPortAi.xml: lib/Linux/libFw_Time.a
F-Prime/Fw/Log/LogPortAi.xml: lib/Linux/libFw_Tlm.a
F-Prime/Fw/Log/LogPortAi.xml: lib/Linux/libFw_Com.a
F-Prime/Fw/Log/LogPortAi.xml: lib/Linux/libFw_Port.a
F-Prime/Fw/Log/LogPortAi.xml: lib/Linux/libFw_Types.a
F-Prime/Fw/Log/LogPortAi.xml: lib/Linux/libFw_Cfg.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating LogPortAi.xml, LogSeverityEnumAi.xml, LogTextPortAi.xml"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /home/krokko/Desktop/MEMEdir/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log -i /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/Log.fpp -p /home/krokko/Desktop/MEMEdir/memesat-1.local

F-Prime/Fw/Log/LogSeverityEnumAi.xml: F-Prime/Fw/Log/LogPortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Log/LogSeverityEnumAi.xml

F-Prime/Fw/Log/LogTextPortAi.xml: F-Prime/Fw/Log/LogPortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Log/LogTextPortAi.xml

F-Prime/Fw/Log/LogPortAc.cpp: /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/Log.fpp
F-Prime/Fw/Log/LogPortAc.cpp: lib/Linux/libFw_Time.a
F-Prime/Fw/Log/LogPortAc.cpp: lib/Linux/libFw_Tlm.a
F-Prime/Fw/Log/LogPortAc.cpp: lib/Linux/libFw_Com.a
F-Prime/Fw/Log/LogPortAc.cpp: lib/Linux/libFw_Port.a
F-Prime/Fw/Log/LogPortAc.cpp: lib/Linux/libFw_Types.a
F-Prime/Fw/Log/LogPortAc.cpp: lib/Linux/libFw_Cfg.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating LogPortAc.cpp, LogPortAc.hpp, LogSeverityEnumAc.cpp, LogSeverityEnumAc.hpp, LogTextPortAc.cpp, LogTextPortAc.hpp"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /home/krokko/Desktop/MEMEdir/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log -i /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/Log.fpp -p /home/krokko/Desktop/MEMEdir/memesat-1.local,/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Fw/Log/LogPortAc.hpp: F-Prime/Fw/Log/LogPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Log/LogPortAc.hpp

F-Prime/Fw/Log/LogSeverityEnumAc.cpp: F-Prime/Fw/Log/LogPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Log/LogSeverityEnumAc.cpp

F-Prime/Fw/Log/LogSeverityEnumAc.hpp: F-Prime/Fw/Log/LogPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Log/LogSeverityEnumAc.hpp

F-Prime/Fw/Log/LogTextPortAc.cpp: F-Prime/Fw/Log/LogPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Log/LogTextPortAc.cpp

F-Prime/Fw/Log/LogTextPortAc.hpp: F-Prime/Fw/Log/LogPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Log/LogTextPortAc.hpp

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogBuffer.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/flags.make
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogBuffer.cpp.o: /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogBuffer.cpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogBuffer.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogBuffer.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xba51d394 -DASSERT_RELATIVE_PATH='"Fw/Log/LogBuffer.cpp"' -MD -MT F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogBuffer.cpp.o -MF CMakeFiles/Fw_Log.dir/LogBuffer.cpp.o.d -o CMakeFiles/Fw_Log.dir/LogBuffer.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogBuffer.cpp

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogBuffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Log.dir/LogBuffer.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xba51d394 -DASSERT_RELATIVE_PATH='"Fw/Log/LogBuffer.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogBuffer.cpp > CMakeFiles/Fw_Log.dir/LogBuffer.cpp.i

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogBuffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Log.dir/LogBuffer.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xba51d394 -DASSERT_RELATIVE_PATH='"Fw/Log/LogBuffer.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogBuffer.cpp -o CMakeFiles/Fw_Log.dir/LogBuffer.cpp.s

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPacket.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/flags.make
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPacket.cpp.o: /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogPacket.cpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPacket.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPacket.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfe80c6ee -DASSERT_RELATIVE_PATH='"Fw/Log/LogPacket.cpp"' -MD -MT F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPacket.cpp.o -MF CMakeFiles/Fw_Log.dir/LogPacket.cpp.o.d -o CMakeFiles/Fw_Log.dir/LogPacket.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogPacket.cpp

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPacket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Log.dir/LogPacket.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfe80c6ee -DASSERT_RELATIVE_PATH='"Fw/Log/LogPacket.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogPacket.cpp > CMakeFiles/Fw_Log.dir/LogPacket.cpp.i

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPacket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Log.dir/LogPacket.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfe80c6ee -DASSERT_RELATIVE_PATH='"Fw/Log/LogPacket.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogPacket.cpp -o CMakeFiles/Fw_Log.dir/LogPacket.cpp.s

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogString.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/flags.make
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogString.cpp.o: /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogString.cpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogString.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogString.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2f9c6d6c -DASSERT_RELATIVE_PATH='"Fw/Log/LogString.cpp"' -MD -MT F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogString.cpp.o -MF CMakeFiles/Fw_Log.dir/LogString.cpp.o.d -o CMakeFiles/Fw_Log.dir/LogString.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogString.cpp

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Log.dir/LogString.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2f9c6d6c -DASSERT_RELATIVE_PATH='"Fw/Log/LogString.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogString.cpp > CMakeFiles/Fw_Log.dir/LogString.cpp.i

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Log.dir/LogString.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2f9c6d6c -DASSERT_RELATIVE_PATH='"Fw/Log/LogString.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/LogString.cpp -o CMakeFiles/Fw_Log.dir/LogString.cpp.s

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/TextLogString.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/flags.make
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/TextLogString.cpp.o: /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/TextLogString.cpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/TextLogString.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/TextLogString.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xbbb3cd96 -DASSERT_RELATIVE_PATH='"Fw/Log/TextLogString.cpp"' -MD -MT F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/TextLogString.cpp.o -MF CMakeFiles/Fw_Log.dir/TextLogString.cpp.o.d -o CMakeFiles/Fw_Log.dir/TextLogString.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/TextLogString.cpp

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/TextLogString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Log.dir/TextLogString.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xbbb3cd96 -DASSERT_RELATIVE_PATH='"Fw/Log/TextLogString.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/TextLogString.cpp > CMakeFiles/Fw_Log.dir/TextLogString.cpp.i

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/TextLogString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Log.dir/TextLogString.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xbbb3cd96 -DASSERT_RELATIVE_PATH='"Fw/Log/TextLogString.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log/TextLogString.cpp -o CMakeFiles/Fw_Log.dir/TextLogString.cpp.s

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPortAc.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/flags.make
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPortAc.cpp.o: F-Prime/Fw/Log/LogPortAc.cpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPortAc.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPortAc.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc14761e4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogPortAc.cpp"' -MD -MT F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPortAc.cpp.o -MF CMakeFiles/Fw_Log.dir/LogPortAc.cpp.o.d -o CMakeFiles/Fw_Log.dir/LogPortAc.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogPortAc.cpp

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPortAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Log.dir/LogPortAc.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc14761e4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogPortAc.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogPortAc.cpp > CMakeFiles/Fw_Log.dir/LogPortAc.cpp.i

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPortAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Log.dir/LogPortAc.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc14761e4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogPortAc.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogPortAc.cpp -o CMakeFiles/Fw_Log.dir/LogPortAc.cpp.s

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/flags.make
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.o: F-Prime/Fw/Log/LogSeverityEnumAc.cpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xccb0976b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogSeverityEnumAc.cpp"' -MD -MT F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.o -MF CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.o.d -o CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogSeverityEnumAc.cpp

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xccb0976b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogSeverityEnumAc.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogSeverityEnumAc.cpp > CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.i

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xccb0976b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogSeverityEnumAc.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogSeverityEnumAc.cpp -o CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.s

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/flags.make
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.o: F-Prime/Fw/Log/LogTextPortAc.cpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xb6c224fc -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogTextPortAc.cpp"' -MD -MT F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.o -MF CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.o.d -o CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogTextPortAc.cpp

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xb6c224fc -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogTextPortAc.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogTextPortAc.cpp > CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.i

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xb6c224fc -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogTextPortAc.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log/LogTextPortAc.cpp -o CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.s

# Object files for target Fw_Log
Fw_Log_OBJECTS = \
"CMakeFiles/Fw_Log.dir/LogBuffer.cpp.o" \
"CMakeFiles/Fw_Log.dir/LogPacket.cpp.o" \
"CMakeFiles/Fw_Log.dir/LogString.cpp.o" \
"CMakeFiles/Fw_Log.dir/TextLogString.cpp.o" \
"CMakeFiles/Fw_Log.dir/LogPortAc.cpp.o" \
"CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.o" \
"CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.o"

# External object files for target Fw_Log
Fw_Log_EXTERNAL_OBJECTS =

lib/Linux/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogBuffer.cpp.o
lib/Linux/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPacket.cpp.o
lib/Linux/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogString.cpp.o
lib/Linux/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/TextLogString.cpp.o
lib/Linux/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogPortAc.cpp.o
lib/Linux/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogSeverityEnumAc.cpp.o
lib/Linux/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/LogTextPortAc.cpp.o
lib/Linux/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/build.make
lib/Linux/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library ../../../lib/Linux/libFw_Log.a"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Log.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fw_Log.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/build: lib/Linux/libFw_Log.a
.PHONY : F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/build

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/clean:
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Log.dir/cmake_clean.cmake
.PHONY : F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/clean

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend: F-Prime/Fw/Log/LogPortAc.cpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend: F-Prime/Fw/Log/LogPortAc.hpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend: F-Prime/Fw/Log/LogPortAi.xml
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend: F-Prime/Fw/Log/LogSeverityEnumAc.cpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend: F-Prime/Fw/Log/LogSeverityEnumAc.hpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend: F-Prime/Fw/Log/LogSeverityEnumAi.xml
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend: F-Prime/Fw/Log/LogTextPortAc.cpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend: F-Prime/Fw/Log/LogTextPortAc.hpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend: F-Prime/Fw/Log/LogTextPortAi.xml
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Log /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend

