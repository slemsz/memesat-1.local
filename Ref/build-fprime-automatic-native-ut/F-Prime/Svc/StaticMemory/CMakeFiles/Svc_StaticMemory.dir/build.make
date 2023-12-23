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
include F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/flags.make

F-Prime/Svc/StaticMemory/StaticMemoryComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/StaticMemory/StaticMemory.fpp
F-Prime/Svc/StaticMemory/StaticMemoryComponentAi.xml: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/StaticMemory/StaticMemoryComponentAi.xml: lib/Darwin/libOs.a
F-Prime/Svc/StaticMemory/StaticMemoryComponentAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating StaticMemoryComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/StaticMemory/StaticMemory.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/StaticMemory/StaticMemory.fpp
F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp: lib/Darwin/libOs.a
F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating StaticMemoryComponentAc.cpp, StaticMemoryComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/StaticMemory/StaticMemory.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.hpp: F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.hpp

F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.o: F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/flags.make
F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/StaticMemory/StaticMemoryComponentImpl.cpp
F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.o: F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3a85d046 -DASSERT_RELATIVE_PATH='"Svc/StaticMemory/StaticMemoryComponentImpl.cpp"' -MD -MT F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.o -MF CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.o.d -o CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/StaticMemory/StaticMemoryComponentImpl.cpp

F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3a85d046 -DASSERT_RELATIVE_PATH='"Svc/StaticMemory/StaticMemoryComponentImpl.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/StaticMemory/StaticMemoryComponentImpl.cpp > CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.i

F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3a85d046 -DASSERT_RELATIVE_PATH='"Svc/StaticMemory/StaticMemoryComponentImpl.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/StaticMemory/StaticMemoryComponentImpl.cpp -o CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.s

F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.o: F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/flags.make
F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.o: F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp
F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.o: F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2bb28b21 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp"' -MD -MT F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.o -MF CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.o.d -o CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp

F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2bb28b21 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp > CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.i

F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2bb28b21 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp -o CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.s

# Object files for target Svc_StaticMemory
Svc_StaticMemory_OBJECTS = \
"CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.o" \
"CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.o"

# External object files for target Svc_StaticMemory
Svc_StaticMemory_EXTERNAL_OBJECTS =

lib/Darwin/libSvc_StaticMemory.a: F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentImpl.cpp.o
lib/Darwin/libSvc_StaticMemory.a: F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/StaticMemoryComponentAc.cpp.o
lib/Darwin/libSvc_StaticMemory.a: F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/build.make
lib/Darwin/libSvc_StaticMemory.a: F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Darwin/libSvc_StaticMemory.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory && $(CMAKE_COMMAND) -P CMakeFiles/Svc_StaticMemory.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_StaticMemory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/build: lib/Darwin/libSvc_StaticMemory.a
.PHONY : F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/build

F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory && $(CMAKE_COMMAND) -P CMakeFiles/Svc_StaticMemory.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/clean

F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/depend: F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.cpp
F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/depend: F-Prime/Svc/StaticMemory/StaticMemoryComponentAc.hpp
F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/depend: F-Prime/Svc/StaticMemory/StaticMemoryComponentAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/StaticMemory /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/StaticMemory/CMakeFiles/Svc_StaticMemory.dir/depend

