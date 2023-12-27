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
include F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/flags.make

F-Prime/Drv/TcpClient/TcpClientComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/TcpClient/TcpClient.fpp
F-Prime/Drv/TcpClient/TcpClientComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/Interfaces/ByteStreamDriverInterface.fppi
F-Prime/Drv/TcpClient/TcpClientComponentAi.xml: lib/Linux/libDrv_ByteStreamDriverModel.a
F-Prime/Drv/TcpClient/TcpClientComponentAi.xml: lib/Linux/libOs.a
F-Prime/Drv/TcpClient/TcpClientComponentAi.xml: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating TcpClientComponentAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Buffer/Buffer.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/TcpClient/TcpClient.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat

F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/TcpClient/TcpClient.fpp
F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/Interfaces/ByteStreamDriverInterface.fppi
F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp: lib/Linux/libDrv_ByteStreamDriverModel.a
F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp: lib/Linux/libOs.a
F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating TcpClientComponentAc.cpp, TcpClientComponentAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Buffer/Buffer.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/TcpClient/TcpClient.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native

F-Prime/Drv/TcpClient/TcpClientComponentAc.hpp: F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/TcpClient/TcpClientComponentAc.hpp

F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.o: F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/flags.make
F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/TcpClient/TcpClientComponentImpl.cpp
F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.o: F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2d782c83 -DASSERT_RELATIVE_PATH='"Drv/TcpClient/TcpClientComponentImpl.cpp"' -MD -MT F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.o -MF CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.o.d -o CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/TcpClient/TcpClientComponentImpl.cpp

F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2d782c83 -DASSERT_RELATIVE_PATH='"Drv/TcpClient/TcpClientComponentImpl.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/TcpClient/TcpClientComponentImpl.cpp > CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.i

F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2d782c83 -DASSERT_RELATIVE_PATH='"Drv/TcpClient/TcpClientComponentImpl.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/TcpClient/TcpClientComponentImpl.cpp -o CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.s

F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.o: F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/flags.make
F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.o: F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp
F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.o: F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x310cb89e -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp"' -MD -MT F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.o -MF CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.o.d -o CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp

F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x310cb89e -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp > CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.i

F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x310cb89e -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp -o CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.s

# Object files for target Drv_TcpClient
Drv_TcpClient_OBJECTS = \
"CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.o" \
"CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.o"

# External object files for target Drv_TcpClient
Drv_TcpClient_EXTERNAL_OBJECTS =

lib/Linux/libDrv_TcpClient.a: F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentImpl.cpp.o
lib/Linux/libDrv_TcpClient.a: F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/TcpClientComponentAc.cpp.o
lib/Linux/libDrv_TcpClient.a: F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/build.make
lib/Linux/libDrv_TcpClient.a: F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libDrv_TcpClient.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient && $(CMAKE_COMMAND) -P CMakeFiles/Drv_TcpClient.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Drv_TcpClient.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/build: lib/Linux/libDrv_TcpClient.a
.PHONY : F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/build

F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient && $(CMAKE_COMMAND) -P CMakeFiles/Drv_TcpClient.dir/cmake_clean.cmake
.PHONY : F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/clean

F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/depend: F-Prime/Drv/TcpClient/TcpClientComponentAc.cpp
F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/depend: F-Prime/Drv/TcpClient/TcpClientComponentAc.hpp
F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/depend: F-Prime/Drv/TcpClient/TcpClientComponentAi.xml
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Drv/TcpClient /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Drv/TcpClient/CMakeFiles/Drv_TcpClient.dir/depend
