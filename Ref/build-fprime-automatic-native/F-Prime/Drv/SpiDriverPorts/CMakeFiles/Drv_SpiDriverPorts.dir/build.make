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
include F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/flags.make

F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAi.xml: /home/krokko/Desktop/MEMEdir/memesat-1.local/Drv/SpiDriverPorts/SpiDriverPorts.fpp
F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAi.xml: lib/Linux/libFw_Buffer.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating SpiReadWritePortAi.xml"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts && /home/krokko/Desktop/MEMEdir/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts -i /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Buffer/Buffer.fpp /home/krokko/Desktop/MEMEdir/memesat-1.local/Drv/SpiDriverPorts/SpiDriverPorts.fpp -p /home/krokko/Desktop/MEMEdir/memesat-1.local

F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp: /home/krokko/Desktop/MEMEdir/memesat-1.local/Drv/SpiDriverPorts/SpiDriverPorts.fpp
F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp: lib/Linux/libFw_Buffer.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating SpiReadWritePortAc.cpp, SpiReadWritePortAc.hpp"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts && /home/krokko/Desktop/MEMEdir/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts -i /home/krokko/Desktop/MEMEdir/memesat-1.local/Fw/Buffer/Buffer.fpp /home/krokko/Desktop/MEMEdir/memesat-1.local/Drv/SpiDriverPorts/SpiDriverPorts.fpp -p /home/krokko/Desktop/MEMEdir/memesat-1.local,/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.hpp: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.hpp

F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.o: F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/flags.make
F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.o: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp
F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.o: F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.o"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc0573f02 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp"' -MD -MT F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.o -MF CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.o.d -o CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.o -c /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp

F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.i"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc0573f02 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp"' -E /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp > CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.i

F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.s"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc0573f02 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp"' -S /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp -o CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.s

# Object files for target Drv_SpiDriverPorts
Drv_SpiDriverPorts_OBJECTS = \
"CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.o"

# External object files for target Drv_SpiDriverPorts
Drv_SpiDriverPorts_EXTERNAL_OBJECTS =

lib/Linux/libDrv_SpiDriverPorts.a: F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/SpiReadWritePortAc.cpp.o
lib/Linux/libDrv_SpiDriverPorts.a: F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/build.make
lib/Linux/libDrv_SpiDriverPorts.a: F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../../../lib/Linux/libDrv_SpiDriverPorts.a"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts && $(CMAKE_COMMAND) -P CMakeFiles/Drv_SpiDriverPorts.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Drv_SpiDriverPorts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/build: lib/Linux/libDrv_SpiDriverPorts.a
.PHONY : F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/build

F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/clean:
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts && $(CMAKE_COMMAND) -P CMakeFiles/Drv_SpiDriverPorts.dir/cmake_clean.cmake
.PHONY : F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/clean

F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/depend: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp
F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/depend: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.hpp
F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/depend: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAi.xml
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/MEMEdir/memesat-1.local/Drv/SpiDriverPorts /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts.dir/depend

