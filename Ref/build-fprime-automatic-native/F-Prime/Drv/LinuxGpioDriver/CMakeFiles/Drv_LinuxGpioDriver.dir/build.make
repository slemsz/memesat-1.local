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
CMAKE_SOURCE_DIR = /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

# Include any dependencies generated for this target.
include F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/flags.make

F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriver.fpp
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/Events.fppi
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: lib/Linux/libDrv_GpioDriverPorts.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: lib/Linux/libFw_Log.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: lib/Linux/libSvc_Cycle.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating LinuxGpioDriverComponentAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver -i /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/GpioDriverPorts/GpioDriverPorts.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Log/Log.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Types/Types.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Cycle/Cycle.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriver.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local

F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriver.fpp
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/Events.fppi
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: lib/Linux/libDrv_GpioDriverPorts.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: lib/Linux/libFw_Log.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: lib/Linux/libSvc_Cycle.a
F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating LinuxGpioDriverComponentAc.cpp, LinuxGpioDriverComponentAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver -i /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/GpioDriverPorts/GpioDriverPorts.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Log/Log.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Types/Types.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Cycle/Cycle.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriver.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.hpp: F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.hpp

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/flags.make
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd87f07da -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp"' -MD -MT F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o -MF CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o.d -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd87f07da -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp > CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.i

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd87f07da -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImplCommon.cpp -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.s

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/flags.make
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImpl.cpp
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x1a4e9526 -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImpl.cpp"' -MD -MT F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.o -MF CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.o.d -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImpl.cpp

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x1a4e9526 -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImpl.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImpl.cpp > CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.i

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x1a4e9526 -DASSERT_RELATIVE_PATH='"Drv/LinuxGpioDriver/LinuxGpioDriverComponentImpl.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver/LinuxGpioDriverComponentImpl.cpp -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.s

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/flags.make
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o: F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6a5bf1e4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp"' -MD -MT F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o -MF CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o.d -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6a5bf1e4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp > CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.i

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6a5bf1e4 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp -o CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.s

# Object files for target Drv_LinuxGpioDriver
Drv_LinuxGpioDriver_OBJECTS = \
"CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o" \
"CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.o" \
"CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o"

# External object files for target Drv_LinuxGpioDriver
Drv_LinuxGpioDriver_EXTERNAL_OBJECTS =

lib/Linux/libDrv_LinuxGpioDriver.a: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImplCommon.cpp.o
lib/Linux/libDrv_LinuxGpioDriver.a: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentImpl.cpp.o
lib/Linux/libDrv_LinuxGpioDriver.a: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/LinuxGpioDriverComponentAc.cpp.o
lib/Linux/libDrv_LinuxGpioDriver.a: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/build.make
lib/Linux/libDrv_LinuxGpioDriver.a: F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library ../../../lib/Linux/libDrv_LinuxGpioDriver.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && $(CMAKE_COMMAND) -P CMakeFiles/Drv_LinuxGpioDriver.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Drv_LinuxGpioDriver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/build: lib/Linux/libDrv_LinuxGpioDriver.a
.PHONY : F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/build

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver && $(CMAKE_COMMAND) -P CMakeFiles/Drv_LinuxGpioDriver.dir/cmake_clean.cmake
.PHONY : F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/clean

F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/depend: F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.cpp
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/depend: F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAc.hpp
F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/depend: F-Prime/Drv/LinuxGpioDriver/LinuxGpioDriverComponentAi.xml
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/LinuxGpioDriver /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Drv/LinuxGpioDriver/CMakeFiles/Drv_LinuxGpioDriver.dir/depend

