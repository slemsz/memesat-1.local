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
include F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/flags.make

F-Prime/Svc/Health/HealthComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/Health.fpp
F-Prime/Svc/Health/HealthComponentAi.xml: lib/Linux/libFw_Cmd.a
F-Prime/Svc/Health/HealthComponentAi.xml: lib/Linux/libFw_Log.a
F-Prime/Svc/Health/HealthComponentAi.xml: lib/Linux/libFw_Tlm.a
F-Prime/Svc/Health/HealthComponentAi.xml: lib/Linux/libFw_Types.a
F-Prime/Svc/Health/HealthComponentAi.xml: lib/Linux/libSvc_Ping.a
F-Prime/Svc/Health/HealthComponentAi.xml: lib/Linux/libSvc_Sched.a
F-Prime/Svc/Health/HealthComponentAi.xml: lib/Linux/libSvc_WatchDog.a
F-Prime/Svc/Health/HealthComponentAi.xml: lib/Linux/libFw_CompQueued.a
F-Prime/Svc/Health/HealthComponentAi.xml: lib/Linux/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating HealthComponentAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Cmd/Cmd.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Log/Log.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Types/Types.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Ping/Ping.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Sched/Sched.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/WatchDog/WatchDog.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/AcConstants.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/Health.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat

F-Prime/Svc/Health/HealthComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/Health.fpp
F-Prime/Svc/Health/HealthComponentAc.cpp: lib/Linux/libFw_Cmd.a
F-Prime/Svc/Health/HealthComponentAc.cpp: lib/Linux/libFw_Log.a
F-Prime/Svc/Health/HealthComponentAc.cpp: lib/Linux/libFw_Tlm.a
F-Prime/Svc/Health/HealthComponentAc.cpp: lib/Linux/libFw_Types.a
F-Prime/Svc/Health/HealthComponentAc.cpp: lib/Linux/libSvc_Ping.a
F-Prime/Svc/Health/HealthComponentAc.cpp: lib/Linux/libSvc_Sched.a
F-Prime/Svc/Health/HealthComponentAc.cpp: lib/Linux/libSvc_WatchDog.a
F-Prime/Svc/Health/HealthComponentAc.cpp: lib/Linux/libFw_CompQueued.a
F-Prime/Svc/Health/HealthComponentAc.cpp: lib/Linux/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating HealthComponentAc.cpp, HealthComponentAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Cmd/Cmd.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Log/Log.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Time/Time.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Tlm/Tlm.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Types/Types.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Ping/Ping.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Sched/Sched.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/WatchDog/WatchDog.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/AcConstants.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/Health.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native

F-Prime/Svc/Health/HealthComponentAc.hpp: F-Prime/Svc/Health/HealthComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Health/HealthComponentAc.hpp

F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.o: F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/flags.make
F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/HealthComponentImpl.cpp
F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.o: F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x98094677 -DASSERT_RELATIVE_PATH='"Svc/Health/HealthComponentImpl.cpp"' -MD -MT F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.o -MF CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.o.d -o CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/HealthComponentImpl.cpp

F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x98094677 -DASSERT_RELATIVE_PATH='"Svc/Health/HealthComponentImpl.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/HealthComponentImpl.cpp > CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.i

F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x98094677 -DASSERT_RELATIVE_PATH='"Svc/Health/HealthComponentImpl.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/HealthComponentImpl.cpp -o CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.s

F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.o: F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/flags.make
F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/Stub/HealthComponentStubChecks.cpp
F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.o: F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x72918621 -DASSERT_RELATIVE_PATH='"Svc/Health/Stub/HealthComponentStubChecks.cpp"' -MD -MT F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.o -MF CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.o.d -o CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/Stub/HealthComponentStubChecks.cpp

F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x72918621 -DASSERT_RELATIVE_PATH='"Svc/Health/Stub/HealthComponentStubChecks.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/Stub/HealthComponentStubChecks.cpp > CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.i

F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x72918621 -DASSERT_RELATIVE_PATH='"Svc/Health/Stub/HealthComponentStubChecks.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health/Stub/HealthComponentStubChecks.cpp -o CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.s

F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.o: F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/flags.make
F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.o: F-Prime/Svc/Health/HealthComponentAc.cpp
F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.o: F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3ebfcc9d -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/Health/HealthComponentAc.cpp"' -MD -MT F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.o -MF CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.o.d -o CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health/HealthComponentAc.cpp

F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3ebfcc9d -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/Health/HealthComponentAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health/HealthComponentAc.cpp > CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.i

F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3ebfcc9d -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/Health/HealthComponentAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health/HealthComponentAc.cpp -o CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.s

# Object files for target Svc_Health
Svc_Health_OBJECTS = \
"CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.o" \
"CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.o" \
"CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.o"

# External object files for target Svc_Health
Svc_Health_EXTERNAL_OBJECTS =

lib/Linux/libSvc_Health.a: F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentImpl.cpp.o
lib/Linux/libSvc_Health.a: F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/Stub/HealthComponentStubChecks.cpp.o
lib/Linux/libSvc_Health.a: F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/HealthComponentAc.cpp.o
lib/Linux/libSvc_Health.a: F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/build.make
lib/Linux/libSvc_Health.a: F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library ../../../lib/Linux/libSvc_Health.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && $(CMAKE_COMMAND) -P CMakeFiles/Svc_Health.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_Health.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/build: lib/Linux/libSvc_Health.a
.PHONY : F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/build

F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health && $(CMAKE_COMMAND) -P CMakeFiles/Svc_Health.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/clean

F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/depend: F-Prime/Svc/Health/HealthComponentAc.cpp
F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/depend: F-Prime/Svc/Health/HealthComponentAc.hpp
F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/depend: F-Prime/Svc/Health/HealthComponentAi.xml
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Health /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/Health/CMakeFiles/Svc_Health.dir/depend

