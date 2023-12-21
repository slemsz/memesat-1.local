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
include F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/flags.make

F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/GroundInterface/GroundInterface.fpp
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/GroundInterface/Events.fppi
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Linux/libFw_Buffer.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Linux/libFw_Com.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Linux/libFw_Log.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Linux/libSvc_Sched.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Linux/libOs.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating GroundInterfaceComponentAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface && /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface -i /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Buffer/Buffer.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Com/Com.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Log/Log.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Sched/Sched.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/GroundInterface/GroundInterface.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local

F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/GroundInterface/GroundInterface.fpp
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/GroundInterface/Events.fppi
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Linux/libFw_Buffer.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Linux/libFw_Com.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Linux/libFw_Log.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Linux/libSvc_Sched.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Linux/libOs.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating GroundInterfaceComponentAc.cpp, GroundInterfaceComponentAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface && /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface -i /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Buffer/Buffer.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Com/Com.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Log/Log.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Sched/Sched.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/GroundInterface/GroundInterface.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.hpp: F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.hpp

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/flags.make
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/GroundInterface/GroundInterface.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xb828566e -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/GroundInterface.cpp"' -MD -MT F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.o -MF CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.o.d -o CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/GroundInterface/GroundInterface.cpp

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xb828566e -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/GroundInterface.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/GroundInterface/GroundInterface.cpp > CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.i

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xb828566e -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/GroundInterface.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/GroundInterface/GroundInterface.cpp -o CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.s

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/flags.make
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.o: F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x5248ae9b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp"' -MD -MT F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.o -MF CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.o.d -o CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x5248ae9b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp > CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.i

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x5248ae9b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp -o CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.s

# Object files for target Svc_GroundInterface
Svc_GroundInterface_OBJECTS = \
"CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.o" \
"CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.o"

# External object files for target Svc_GroundInterface
Svc_GroundInterface_EXTERNAL_OBJECTS =

lib/Linux/libSvc_GroundInterface.a: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterface.cpp.o
lib/Linux/libSvc_GroundInterface.a: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/GroundInterfaceComponentAc.cpp.o
lib/Linux/libSvc_GroundInterface.a: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/build.make
lib/Linux/libSvc_GroundInterface.a: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libSvc_GroundInterface.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface && $(CMAKE_COMMAND) -P CMakeFiles/Svc_GroundInterface.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_GroundInterface.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/build: lib/Linux/libSvc_GroundInterface.a
.PHONY : F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/build

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface && $(CMAKE_COMMAND) -P CMakeFiles/Svc_GroundInterface.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/clean

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/depend: F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/depend: F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.hpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/depend: F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/GroundInterface /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface.dir/depend

