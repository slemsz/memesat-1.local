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
include Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/compiler_depend.make

# Include the progress variables for this target.
include Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/progress.make

# Include the compile flags for this target's objects.
include Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/flags.make

Ref/SchedulerPorts/RunSchedulePortPortAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Ref/SchedulerPorts/SchedulerPorts.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating RunSchedulePortPortAi.xml, ScheduleOpEnumAi.xml, ScheduleStatusEnumAi.xml, SendSchedulePortPortAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts /Users/heron/Desktop/memedir/memesat-1.local/Ref/SchedulerPorts/SchedulerPorts.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

Ref/SchedulerPorts/ScheduleOpEnumAi.xml: Ref/SchedulerPorts/RunSchedulePortPortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SchedulerPorts/ScheduleOpEnumAi.xml

Ref/SchedulerPorts/ScheduleStatusEnumAi.xml: Ref/SchedulerPorts/RunSchedulePortPortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SchedulerPorts/ScheduleStatusEnumAi.xml

Ref/SchedulerPorts/SendSchedulePortPortAi.xml: Ref/SchedulerPorts/RunSchedulePortPortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SchedulerPorts/SendSchedulePortPortAi.xml

Ref/SchedulerPorts/RunSchedulePortPortAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Ref/SchedulerPorts/SchedulerPorts.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating RunSchedulePortPortAc.cpp, RunSchedulePortPortAc.hpp, ScheduleOpEnumAc.cpp, ScheduleOpEnumAc.hpp, ScheduleStatusEnumAc.cpp, ScheduleStatusEnumAc.hpp, SendSchedulePortPortAc.cpp, SendSchedulePortPortAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts /Users/heron/Desktop/memedir/memesat-1.local/Ref/SchedulerPorts/SchedulerPorts.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

Ref/SchedulerPorts/RunSchedulePortPortAc.hpp: Ref/SchedulerPorts/RunSchedulePortPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SchedulerPorts/RunSchedulePortPortAc.hpp

Ref/SchedulerPorts/ScheduleOpEnumAc.cpp: Ref/SchedulerPorts/RunSchedulePortPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SchedulerPorts/ScheduleOpEnumAc.cpp

Ref/SchedulerPorts/ScheduleOpEnumAc.hpp: Ref/SchedulerPorts/RunSchedulePortPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SchedulerPorts/ScheduleOpEnumAc.hpp

Ref/SchedulerPorts/ScheduleStatusEnumAc.cpp: Ref/SchedulerPorts/RunSchedulePortPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SchedulerPorts/ScheduleStatusEnumAc.cpp

Ref/SchedulerPorts/ScheduleStatusEnumAc.hpp: Ref/SchedulerPorts/RunSchedulePortPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SchedulerPorts/ScheduleStatusEnumAc.hpp

Ref/SchedulerPorts/SendSchedulePortPortAc.cpp: Ref/SchedulerPorts/RunSchedulePortPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SchedulerPorts/SendSchedulePortPortAc.cpp

Ref/SchedulerPorts/SendSchedulePortPortAc.hpp: Ref/SchedulerPorts/RunSchedulePortPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/SchedulerPorts/SendSchedulePortPortAc.hpp

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.o: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/flags.make
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.o: Ref/SchedulerPorts/RunSchedulePortPortAc.cpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.o: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x74476b3b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/RunSchedulePortPortAc.cpp"' -MD -MT Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.o -MF CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.o.d -o CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/RunSchedulePortPortAc.cpp

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x74476b3b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/RunSchedulePortPortAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/RunSchedulePortPortAc.cpp > CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.i

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x74476b3b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/RunSchedulePortPortAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/RunSchedulePortPortAc.cpp -o CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.s

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.o: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/flags.make
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.o: Ref/SchedulerPorts/ScheduleOpEnumAc.cpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.o: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0cec8b62 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleOpEnumAc.cpp"' -MD -MT Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.o -MF CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.o.d -o CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleOpEnumAc.cpp

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0cec8b62 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleOpEnumAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleOpEnumAc.cpp > CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.i

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0cec8b62 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleOpEnumAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleOpEnumAc.cpp -o CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.s

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.o: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/flags.make
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.o: Ref/SchedulerPorts/ScheduleStatusEnumAc.cpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.o: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7b5aedf7 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleStatusEnumAc.cpp"' -MD -MT Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.o -MF CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.o.d -o CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleStatusEnumAc.cpp

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7b5aedf7 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleStatusEnumAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleStatusEnumAc.cpp > CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.i

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7b5aedf7 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleStatusEnumAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/ScheduleStatusEnumAc.cpp -o CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.s

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.o: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/flags.make
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.o: Ref/SchedulerPorts/SendSchedulePortPortAc.cpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.o: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0df4582f -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/SendSchedulePortPortAc.cpp"' -MD -MT Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.o -MF CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.o.d -o CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/SendSchedulePortPortAc.cpp

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0df4582f -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/SendSchedulePortPortAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/SendSchedulePortPortAc.cpp > CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.i

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0df4582f -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/Ref/SchedulerPorts/SendSchedulePortPortAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/SendSchedulePortPortAc.cpp -o CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.s

# Object files for target Ref_SchedulerPorts
Ref_SchedulerPorts_OBJECTS = \
"CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.o" \
"CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.o" \
"CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.o" \
"CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.o"

# External object files for target Ref_SchedulerPorts
Ref_SchedulerPorts_EXTERNAL_OBJECTS =

lib/Darwin/libRef_SchedulerPorts.a: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/RunSchedulePortPortAc.cpp.o
lib/Darwin/libRef_SchedulerPorts.a: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleOpEnumAc.cpp.o
lib/Darwin/libRef_SchedulerPorts.a: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/ScheduleStatusEnumAc.cpp.o
lib/Darwin/libRef_SchedulerPorts.a: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/SendSchedulePortPortAc.cpp.o
lib/Darwin/libRef_SchedulerPorts.a: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/build.make
lib/Darwin/libRef_SchedulerPorts.a: Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library ../../lib/Darwin/libRef_SchedulerPorts.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && $(CMAKE_COMMAND) -P CMakeFiles/Ref_SchedulerPorts.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ref_SchedulerPorts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/build: lib/Darwin/libRef_SchedulerPorts.a
.PHONY : Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/build

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts && $(CMAKE_COMMAND) -P CMakeFiles/Ref_SchedulerPorts.dir/cmake_clean.cmake
.PHONY : Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/clean

Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/RunSchedulePortPortAc.cpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/RunSchedulePortPortAc.hpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/RunSchedulePortPortAi.xml
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/ScheduleOpEnumAc.cpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/ScheduleOpEnumAc.hpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/ScheduleOpEnumAi.xml
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/ScheduleStatusEnumAc.cpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/ScheduleStatusEnumAc.hpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/ScheduleStatusEnumAi.xml
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/SendSchedulePortPortAc.cpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/SendSchedulePortPortAc.hpp
Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend: Ref/SchedulerPorts/SendSchedulePortPortAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Ref/SchedulerPorts /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Ref/SchedulerPorts/CMakeFiles/Ref_SchedulerPorts.dir/depend
