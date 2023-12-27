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
include F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/flags.make

F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/TlmChan/TlmChan.fpp
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Linux/libFw_Com.a
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Linux/libFw_Tlm.a
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Linux/libSvc_Ping.a
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Linux/libSvc_Sched.a
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Linux/libFw_CompQueued.a
F-Prime/Svc/TlmChan/TlmChanComponentAi.xml: lib/Linux/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating TlmChanComponentAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Com/Com.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Ping/Ping.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Sched/Sched.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/TlmChan/TlmChan.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat

F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/TlmChan/TlmChan.fpp
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Linux/libFw_Com.a
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Linux/libFw_Tlm.a
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Linux/libSvc_Ping.a
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Linux/libSvc_Sched.a
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Linux/libFw_CompQueued.a
F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp: lib/Linux/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating TlmChanComponentAc.cpp, TlmChanComponentAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Com/Com.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Ping/Ping.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Sched/Sched.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/TlmChan/TlmChan.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native

F-Prime/Svc/TlmChan/TlmChanComponentAc.hpp: F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/TlmChan/TlmChanComponentAc.hpp

F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.o: F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/flags.make
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/TlmChan/TlmChan.cpp
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.o: F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x47a24f10 -DASSERT_RELATIVE_PATH='"Svc/TlmChan/TlmChan.cpp"' -MD -MT F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.o -MF CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.o.d -o CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/TlmChan/TlmChan.cpp

F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x47a24f10 -DASSERT_RELATIVE_PATH='"Svc/TlmChan/TlmChan.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/TlmChan/TlmChan.cpp > CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.i

F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x47a24f10 -DASSERT_RELATIVE_PATH='"Svc/TlmChan/TlmChan.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/TlmChan/TlmChan.cpp -o CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.s

F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.o: F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/flags.make
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.o: F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.o: F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf64a83d8 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp"' -MD -MT F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.o -MF CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.o.d -o CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp

F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf64a83d8 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp > CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.i

F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf64a83d8 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp -o CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.s

# Object files for target Svc_TlmChan
Svc_TlmChan_OBJECTS = \
"CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.o" \
"CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.o"

# External object files for target Svc_TlmChan
Svc_TlmChan_EXTERNAL_OBJECTS =

lib/Linux/libSvc_TlmChan.a: F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChan.cpp.o
lib/Linux/libSvc_TlmChan.a: F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/TlmChanComponentAc.cpp.o
lib/Linux/libSvc_TlmChan.a: F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/build.make
lib/Linux/libSvc_TlmChan.a: F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libSvc_TlmChan.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan && $(CMAKE_COMMAND) -P CMakeFiles/Svc_TlmChan.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_TlmChan.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/build: lib/Linux/libSvc_TlmChan.a
.PHONY : F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/build

F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan && $(CMAKE_COMMAND) -P CMakeFiles/Svc_TlmChan.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/clean

F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/depend: F-Prime/Svc/TlmChan/TlmChanComponentAc.cpp
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/depend: F-Prime/Svc/TlmChan/TlmChanComponentAc.hpp
F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/depend: F-Prime/Svc/TlmChan/TlmChanComponentAi.xml
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/TlmChan /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/TlmChan/CMakeFiles/Svc_TlmChan.dir/depend

