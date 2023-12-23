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
include F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/flags.make

F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.fpp
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libFw_Cmd.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libFw_Log.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libFw_Time.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libOs.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating SystemResourceEnabledEnumAi.xml, SystemResourcesComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Svc/SystemResources/SystemResourcesComponentAi.xml: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/SystemResources/SystemResourcesComponentAi.xml

F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.fpp
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libFw_Cmd.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libFw_Log.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libFw_Time.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libFw_Tlm.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libOs.a
F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating SystemResourceEnabledEnumAc.cpp, SystemResourceEnabledEnumAc.hpp, SystemResourcesComponentAc.cpp, SystemResourcesComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.hpp: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.hpp

F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp

F-Prime/Svc/SystemResources/SystemResourcesComponentAc.hpp: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/SystemResources/SystemResourcesComponentAc.hpp

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.o: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/flags.make
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.cpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.o: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xce6dcc30 -DASSERT_RELATIVE_PATH='"Svc/SystemResources/SystemResources.cpp"' -MD -MT F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.o -MF CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.o.d -o CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.cpp

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xce6dcc30 -DASSERT_RELATIVE_PATH='"Svc/SystemResources/SystemResources.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.cpp > CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.i

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xce6dcc30 -DASSERT_RELATIVE_PATH='"Svc/SystemResources/SystemResources.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources/SystemResources.cpp -o CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.s

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.o: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/flags.make
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.o: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.o: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x31dce8f3 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp"' -MD -MT F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.o -MF CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.o.d -o CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x31dce8f3 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp > CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.i

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x31dce8f3 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp -o CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.s

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.o: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/flags.make
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.o: F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.o: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd1bb3ab0 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp"' -MD -MT F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.o -MF CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.o.d -o CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd1bb3ab0 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp > CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.i

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd1bb3ab0 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp -o CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.s

# Object files for target Svc_SystemResources
Svc_SystemResources_OBJECTS = \
"CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.o" \
"CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.o" \
"CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.o"

# External object files for target Svc_SystemResources
Svc_SystemResources_EXTERNAL_OBJECTS =

lib/Darwin/libSvc_SystemResources.a: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResources.cpp.o
lib/Darwin/libSvc_SystemResources.a: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourceEnabledEnumAc.cpp.o
lib/Darwin/libSvc_SystemResources.a: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/SystemResourcesComponentAc.cpp.o
lib/Darwin/libSvc_SystemResources.a: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/build.make
lib/Darwin/libSvc_SystemResources.a: F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library ../../../lib/Darwin/libSvc_SystemResources.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && $(CMAKE_COMMAND) -P CMakeFiles/Svc_SystemResources.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_SystemResources.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/build: lib/Darwin/libSvc_SystemResources.a
.PHONY : F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/build

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources && $(CMAKE_COMMAND) -P CMakeFiles/Svc_SystemResources.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/clean

F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/depend: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.cpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/depend: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAc.hpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/depend: F-Prime/Svc/SystemResources/SystemResourceEnabledEnumAi.xml
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/depend: F-Prime/Svc/SystemResources/SystemResourcesComponentAc.cpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/depend: F-Prime/Svc/SystemResources/SystemResourcesComponentAc.hpp
F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/depend: F-Prime/Svc/SystemResources/SystemResourcesComponentAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/SystemResources /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/SystemResources/CMakeFiles/Svc_SystemResources.dir/depend
