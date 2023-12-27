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
CMAKE_SOURCE_DIR = /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native

# Include any dependencies generated for this target.
include F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/flags.make

F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/LinuxUartDriver.fpp
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/Interfaces/ByteStreamDriverInterface.fppi
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/Events.fppi
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/Telemetry.fppi
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAi.xml: lib/Linux/libDrv_ByteStreamDriverModel.a
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAi.xml: lib/Linux/libFw_Log.a
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAi.xml: lib/Linux/libFw_Tlm.a
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAi.xml: lib/Linux/libOs.a
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAi.xml: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating LinuxUartDriverComponentAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Buffer/Buffer.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Log/Log.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/LinuxUartDriver.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat

F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/LinuxUartDriver.fpp
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/Interfaces/ByteStreamDriverInterface.fppi
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/Events.fppi
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/Telemetry.fppi
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp: lib/Linux/libDrv_ByteStreamDriverModel.a
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp: lib/Linux/libFw_Log.a
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp: lib/Linux/libFw_Tlm.a
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp: lib/Linux/libOs.a
F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating LinuxUartDriverComponentAc.cpp, LinuxUartDriverComponentAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Buffer/Buffer.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Log/Log.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/LinuxUartDriver.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native

F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.hpp: F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.hpp

F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.o: F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/flags.make
F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/LinuxUartDriver.cpp
F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.o: F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0b9f9b33 -DASSERT_RELATIVE_PATH='"Drv/LinuxUartDriver/LinuxUartDriver.cpp"' -MD -MT F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.o -MF CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.o.d -o CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/LinuxUartDriver.cpp

F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0b9f9b33 -DASSERT_RELATIVE_PATH='"Drv/LinuxUartDriver/LinuxUartDriver.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/LinuxUartDriver.cpp > CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.i

F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0b9f9b33 -DASSERT_RELATIVE_PATH='"Drv/LinuxUartDriver/LinuxUartDriver.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver/LinuxUartDriver.cpp -o CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.s

F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.o: F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/flags.make
F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.o: F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp
F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.o: F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x9712bf04 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp"' -MD -MT F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.o -MF CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.o.d -o CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp

F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x9712bf04 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp > CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.i

F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x9712bf04 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp -o CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.s

# Object files for target Drv_LinuxUartDriver
Drv_LinuxUartDriver_OBJECTS = \
"CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.o" \
"CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.o"

# External object files for target Drv_LinuxUartDriver
Drv_LinuxUartDriver_EXTERNAL_OBJECTS =

lib/Linux/libDrv_LinuxUartDriver.a: F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriver.cpp.o
lib/Linux/libDrv_LinuxUartDriver.a: F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/LinuxUartDriverComponentAc.cpp.o
lib/Linux/libDrv_LinuxUartDriver.a: F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/build.make
lib/Linux/libDrv_LinuxUartDriver.a: F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libDrv_LinuxUartDriver.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver && $(CMAKE_COMMAND) -P CMakeFiles/Drv_LinuxUartDriver.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Drv_LinuxUartDriver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/build: lib/Linux/libDrv_LinuxUartDriver.a
.PHONY : F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/build

F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver && $(CMAKE_COMMAND) -P CMakeFiles/Drv_LinuxUartDriver.dir/cmake_clean.cmake
.PHONY : F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/clean

F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/depend: F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.cpp
F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/depend: F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAc.hpp
F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/depend: F-Prime/Drv/LinuxUartDriver/LinuxUartDriverComponentAi.xml
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/LinuxUartDriver /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Drv/LinuxUartDriver/CMakeFiles/Drv_LinuxUartDriver.dir/depend

