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
include F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/flags.make

F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriver.fpp
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/Events.fppi
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/Telemetry.fppi
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAi.xml: lib/Darwin/libDrv_SpiDriverPorts.a
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAi.xml: lib/Darwin/libFw_Log.a
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAi.xml: lib/Darwin/libFw_Tlm.a
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating LinuxSpiDriverComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/SpiDriverPorts/SpiDriverPorts.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriver.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriver.fpp
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/Events.fppi
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/Telemetry.fppi
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp: lib/Darwin/libDrv_SpiDriverPorts.a
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp: lib/Darwin/libFw_Log.a
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp: lib/Darwin/libFw_Tlm.a
F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating LinuxSpiDriverComponentAc.cpp, LinuxSpiDriverComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/SpiDriverPorts/SpiDriverPorts.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriver.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.hpp: F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.hpp

F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.o: F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/flags.make
F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplCommon.cpp
F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.o: F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x06173988 -DASSERT_RELATIVE_PATH='"Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplCommon.cpp"' -MD -MT F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.o -MF CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.o.d -o CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplCommon.cpp

F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x06173988 -DASSERT_RELATIVE_PATH='"Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplCommon.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplCommon.cpp > CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.i

F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x06173988 -DASSERT_RELATIVE_PATH='"Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplCommon.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplCommon.cpp -o CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.s

F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.o: F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/flags.make
F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplStub.cpp
F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.o: F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2602b9d8 -DASSERT_RELATIVE_PATH='"Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplStub.cpp"' -MD -MT F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.o -MF CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.o.d -o CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplStub.cpp

F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2602b9d8 -DASSERT_RELATIVE_PATH='"Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplStub.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplStub.cpp > CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.i

F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2602b9d8 -DASSERT_RELATIVE_PATH='"Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplStub.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver/LinuxSpiDriverComponentImplStub.cpp -o CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.s

F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.o: F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/flags.make
F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.o: F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp
F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.o: F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x86b68ca4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp"' -MD -MT F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.o -MF CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.o.d -o CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp

F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x86b68ca4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp > CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.i

F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x86b68ca4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp -o CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.s

# Object files for target Drv_LinuxSpiDriver
Drv_LinuxSpiDriver_OBJECTS = \
"CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.o" \
"CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.o" \
"CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.o"

# External object files for target Drv_LinuxSpiDriver
Drv_LinuxSpiDriver_EXTERNAL_OBJECTS =

lib/Darwin/libDrv_LinuxSpiDriver.a: F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplCommon.cpp.o
lib/Darwin/libDrv_LinuxSpiDriver.a: F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentImplStub.cpp.o
lib/Darwin/libDrv_LinuxSpiDriver.a: F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/LinuxSpiDriverComponentAc.cpp.o
lib/Darwin/libDrv_LinuxSpiDriver.a: F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/build.make
lib/Darwin/libDrv_LinuxSpiDriver.a: F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library ../../../lib/Darwin/libDrv_LinuxSpiDriver.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && $(CMAKE_COMMAND) -P CMakeFiles/Drv_LinuxSpiDriver.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Drv_LinuxSpiDriver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/build: lib/Darwin/libDrv_LinuxSpiDriver.a
.PHONY : F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/build

F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver && $(CMAKE_COMMAND) -P CMakeFiles/Drv_LinuxSpiDriver.dir/cmake_clean.cmake
.PHONY : F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/clean

F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/depend: F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.cpp
F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/depend: F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAc.hpp
F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/depend: F-Prime/Drv/LinuxSpiDriver/LinuxSpiDriverComponentAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxSpiDriver /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Drv/LinuxSpiDriver/CMakeFiles/Drv_LinuxSpiDriver.dir/depend

