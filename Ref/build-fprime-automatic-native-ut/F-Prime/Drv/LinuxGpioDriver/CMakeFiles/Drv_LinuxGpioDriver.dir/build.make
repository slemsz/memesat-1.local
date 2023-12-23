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
include F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/flags.make

F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriver.fpp
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/Events.fppi
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: lib/Darwin/libDrv_GpioDriverPorts.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: lib/Darwin/libFw_Log.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: lib/Darwin/libSvc_Cycle.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating LinuxGpioDriverComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/GpioDriverPorts/GpioDriverPorts.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Types/Types.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Cycle/Cycle.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriver.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriver.fpp
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/Events.fppi
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: lib/Darwin/libDrv_GpioDriverPorts.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: lib/Darwin/libFw_Log.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: lib/Darwin/libSvc_Cycle.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating LinuxGpioDriverComponentAc.cpp, LinuxGpioDriverComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/GpioDriverPorts/GpioDriverPorts.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Types/Types.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Cycle/Cycle.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriver.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.hpp: F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.hpp

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/flags.make
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd87f07da -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp"' -MD -MT F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o -MF CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o.d -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd87f07da -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp > CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.i

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd87f07da -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.s

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/flags.make
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplStub.cpp
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2f313b44 -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplStub.cpp"' -MD -MT F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.o -MF CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.o.d -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplStub.cpp

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2f313b44 -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplStub.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplStub.cpp > CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.i

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2f313b44 -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplStub.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplStub.cpp -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.s

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/flags.make
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o: F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x11bb499a -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp"' -MD -MT F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o -MF CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o.d -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x11bb499a -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp > CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.i

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x11bb499a -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.s

# Object files for target Drv_LinuxGpioDriver
Drv_LinuxGpioDriver_OBJECTS = \
"CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o" \
"CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.o" \
"CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o"

# External object files for target Drv_LinuxGpioDriver
Drv_LinuxGpioDriver_EXTERNAL_OBJECTS =

lib/Darwin/libDrv_LinuxGpioDriver.a: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o
lib/Darwin/libDrv_LinuxGpioDriver.a: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplStub.cpp.o
lib/Darwin/libDrv_LinuxGpioDriver.a: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o
lib/Darwin/libDrv_LinuxGpioDriver.a: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/build.make
lib/Darwin/libDrv_LinuxGpioDriver.a: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library ../../../lib/Darwin/libDrv_LinuxGpioDriver.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && $(CMAKE_COMMAND) -P CMakeFiles/Drv_LinuxGpioDriver.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Drv_LinuxGpioDriver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/build: lib/Darwin/libDrv_LinuxGpioDriver.a
.PHONY : F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/build

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver && $(CMAKE_COMMAND) -P CMakeFiles/Drv_LinuxGpioDriver.dir/cmake_clean.cmake
.PHONY : F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/clean

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/depend: F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/depend: F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.hpp
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/depend: F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Drv/LinuxGpioDriver /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/depend

