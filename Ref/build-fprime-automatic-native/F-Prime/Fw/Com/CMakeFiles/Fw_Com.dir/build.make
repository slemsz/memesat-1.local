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

# Include any dependencies generated for this target.
include F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/flags.make

F-Prime/Fw/Com/ComPortAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp
F-Prime/Fw/Com/ComPortAi.xml: lib/Darwin/libFw_Time.a
F-Prime/Fw/Com/ComPortAi.xml: lib/Darwin/libFw_Port.a
F-Prime/Fw/Com/ComPortAi.xml: lib/Darwin/libFw_Types.a
F-Prime/Fw/Com/ComPortAi.xml: lib/Darwin/libFw_Cfg.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ComPortAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Fw/Com/ComPortAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp
F-Prime/Fw/Com/ComPortAc.cpp: lib/Darwin/libFw_Time.a
F-Prime/Fw/Com/ComPortAc.cpp: lib/Darwin/libFw_Port.a
F-Prime/Fw/Com/ComPortAc.cpp: lib/Darwin/libFw_Types.a
F-Prime/Fw/Com/ComPortAc.cpp: lib/Darwin/libFw_Cfg.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ComPortAc.cpp, ComPortAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Fw/Com/ComPortAc.hpp: F-Prime/Fw/Com/ComPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Com/ComPortAc.hpp

F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPacket.cpp.o: F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/flags.make
F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPacket.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/ComPacket.cpp
F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPacket.cpp.o: F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPacket.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf4048466 -DASSERT_RELATIVE_PATH='"Fw/Com/ComPacket.cpp"' -MD -MT F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPacket.cpp.o -MF CMakeFiles/Fw_Com.dir/ComPacket.cpp.o.d -o CMakeFiles/Fw_Com.dir/ComPacket.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/ComPacket.cpp

F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPacket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Com.dir/ComPacket.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf4048466 -DASSERT_RELATIVE_PATH='"Fw/Com/ComPacket.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/ComPacket.cpp > CMakeFiles/Fw_Com.dir/ComPacket.cpp.i

F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPacket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Com.dir/ComPacket.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf4048466 -DASSERT_RELATIVE_PATH='"Fw/Com/ComPacket.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/ComPacket.cpp -o CMakeFiles/Fw_Com.dir/ComPacket.cpp.s

F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComBuffer.cpp.o: F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/flags.make
F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComBuffer.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/ComBuffer.cpp
F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComBuffer.cpp.o: F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComBuffer.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7c24b0ca -DASSERT_RELATIVE_PATH='"Fw/Com/ComBuffer.cpp"' -MD -MT F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComBuffer.cpp.o -MF CMakeFiles/Fw_Com.dir/ComBuffer.cpp.o.d -o CMakeFiles/Fw_Com.dir/ComBuffer.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/ComBuffer.cpp

F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComBuffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Com.dir/ComBuffer.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7c24b0ca -DASSERT_RELATIVE_PATH='"Fw/Com/ComBuffer.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/ComBuffer.cpp > CMakeFiles/Fw_Com.dir/ComBuffer.cpp.i

F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComBuffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Com.dir/ComBuffer.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7c24b0ca -DASSERT_RELATIVE_PATH='"Fw/Com/ComBuffer.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/ComBuffer.cpp -o CMakeFiles/Fw_Com.dir/ComBuffer.cpp.s

F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPortAc.cpp.o: F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/flags.make
F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPortAc.cpp.o: F-Prime/Fw/Com/ComPortAc.cpp
F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPortAc.cpp.o: F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPortAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x1a570bd4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Com/ComPortAc.cpp"' -MD -MT F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPortAc.cpp.o -MF CMakeFiles/Fw_Com.dir/ComPortAc.cpp.o.d -o CMakeFiles/Fw_Com.dir/ComPortAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com/ComPortAc.cpp

F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPortAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Com.dir/ComPortAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x1a570bd4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Com/ComPortAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com/ComPortAc.cpp > CMakeFiles/Fw_Com.dir/ComPortAc.cpp.i

F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPortAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Com.dir/ComPortAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x1a570bd4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Fw/Com/ComPortAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com/ComPortAc.cpp -o CMakeFiles/Fw_Com.dir/ComPortAc.cpp.s

# Object files for target Fw_Com
Fw_Com_OBJECTS = \
"CMakeFiles/Fw_Com.dir/ComPacket.cpp.o" \
"CMakeFiles/Fw_Com.dir/ComBuffer.cpp.o" \
"CMakeFiles/Fw_Com.dir/ComPortAc.cpp.o"

# External object files for target Fw_Com
Fw_Com_EXTERNAL_OBJECTS =

lib/Darwin/libFw_Com.a: F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPacket.cpp.o
lib/Darwin/libFw_Com.a: F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComBuffer.cpp.o
lib/Darwin/libFw_Com.a: F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/ComPortAc.cpp.o
lib/Darwin/libFw_Com.a: F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/build.make
lib/Darwin/libFw_Com.a: F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library ../../../lib/Darwin/libFw_Com.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Com.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fw_Com.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/build: lib/Darwin/libFw_Com.a
.PHONY : F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/build

F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Com.dir/cmake_clean.cmake
.PHONY : F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/clean

F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/depend: F-Prime/Fw/Com/ComPortAc.cpp
F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/depend: F-Prime/Fw/Com/ComPortAc.hpp
F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/depend: F-Prime/Fw/Com/ComPortAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Fw/Com /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Fw/Com/CMakeFiles/Fw_Com.dir/depend

