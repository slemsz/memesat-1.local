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
include F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/flags.make

F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/PassiveRateGroup/PassiveRateGroup.fpp
F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAi.xml: lib/Darwin/libFw_Time.a
F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAi.xml: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAi.xml: lib/Darwin/libSvc_Cycle.a
F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAi.xml: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating PassiveRateGroupComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Cycle/Cycle.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/PassiveRateGroup/PassiveRateGroup.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/PassiveRateGroup/PassiveRateGroup.fpp
F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp: lib/Darwin/libFw_Time.a
F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp: lib/Darwin/libSvc_Cycle.a
F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating PassiveRateGroupComponentAc.cpp, PassiveRateGroupComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Cycle/Cycle.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/PassiveRateGroup/PassiveRateGroup.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.hpp: F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.hpp

F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.o: F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/flags.make
F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/PassiveRateGroup/PassiveRateGroup.cpp
F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.o: F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4799ace8 -DASSERT_RELATIVE_PATH='"Svc/PassiveRateGroup/PassiveRateGroup.cpp"' -MD -MT F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.o -MF CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.o.d -o CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/PassiveRateGroup/PassiveRateGroup.cpp

F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4799ace8 -DASSERT_RELATIVE_PATH='"Svc/PassiveRateGroup/PassiveRateGroup.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/PassiveRateGroup/PassiveRateGroup.cpp > CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.i

F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4799ace8 -DASSERT_RELATIVE_PATH='"Svc/PassiveRateGroup/PassiveRateGroup.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/PassiveRateGroup/PassiveRateGroup.cpp -o CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.s

F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.o: F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/flags.make
F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.o: F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp
F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.o: F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xdfeb3f52 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp"' -MD -MT F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.o -MF CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.o.d -o CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp

F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xdfeb3f52 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp > CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.i

F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xdfeb3f52 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp -o CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.s

# Object files for target Svc_PassiveRateGroup
Svc_PassiveRateGroup_OBJECTS = \
"CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.o" \
"CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.o"

# External object files for target Svc_PassiveRateGroup
Svc_PassiveRateGroup_EXTERNAL_OBJECTS =

lib/Darwin/libSvc_PassiveRateGroup.a: F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroup.cpp.o
lib/Darwin/libSvc_PassiveRateGroup.a: F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/PassiveRateGroupComponentAc.cpp.o
lib/Darwin/libSvc_PassiveRateGroup.a: F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/build.make
lib/Darwin/libSvc_PassiveRateGroup.a: F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Darwin/libSvc_PassiveRateGroup.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup && $(CMAKE_COMMAND) -P CMakeFiles/Svc_PassiveRateGroup.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_PassiveRateGroup.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/build: lib/Darwin/libSvc_PassiveRateGroup.a
.PHONY : F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/build

F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup && $(CMAKE_COMMAND) -P CMakeFiles/Svc_PassiveRateGroup.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/clean

F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/depend: F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.cpp
F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/depend: F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAc.hpp
F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/depend: F-Prime/Svc/PassiveRateGroup/PassiveRateGroupComponentAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/PassiveRateGroup /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/PassiveRateGroup/CMakeFiles/Svc_PassiveRateGroup.dir/depend

