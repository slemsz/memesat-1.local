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
include F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/flags.make

F-Prime/Svc/WatchDog/WatchDogPortAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/WatchDog/WatchDog.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating WatchDogPortAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog /Users/heron/Desktop/memedir/memesat-1.local/Svc/WatchDog/WatchDog.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Svc/WatchDog/WatchDogPortAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/WatchDog/WatchDog.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating WatchDogPortAc.cpp, WatchDogPortAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog /Users/heron/Desktop/memedir/memesat-1.local/Svc/WatchDog/WatchDog.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Svc/WatchDog/WatchDogPortAc.hpp: F-Prime/Svc/WatchDog/WatchDogPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/WatchDog/WatchDogPortAc.hpp

F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.o: F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/flags.make
F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.o: F-Prime/Svc/WatchDog/WatchDogPortAc.cpp
F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.o: F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6135b27a -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog/WatchDogPortAc.cpp"' -MD -MT F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.o -MF CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.o.d -o CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog/WatchDogPortAc.cpp

F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6135b27a -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog/WatchDogPortAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog/WatchDogPortAc.cpp > CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.i

F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6135b27a -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog/WatchDogPortAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog/WatchDogPortAc.cpp -o CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.s

# Object files for target Svc_WatchDog
Svc_WatchDog_OBJECTS = \
"CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.o"

# External object files for target Svc_WatchDog
Svc_WatchDog_EXTERNAL_OBJECTS =

lib/Darwin/libSvc_WatchDog.a: F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/WatchDogPortAc.cpp.o
lib/Darwin/libSvc_WatchDog.a: F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/build.make
lib/Darwin/libSvc_WatchDog.a: F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../../../lib/Darwin/libSvc_WatchDog.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog && $(CMAKE_COMMAND) -P CMakeFiles/Svc_WatchDog.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_WatchDog.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/build: lib/Darwin/libSvc_WatchDog.a
.PHONY : F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/build

F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog && $(CMAKE_COMMAND) -P CMakeFiles/Svc_WatchDog.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/clean

F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/depend: F-Prime/Svc/WatchDog/WatchDogPortAc.cpp
F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/depend: F-Prime/Svc/WatchDog/WatchDogPortAc.hpp
F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/depend: F-Prime/Svc/WatchDog/WatchDogPortAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/WatchDog /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/WatchDog/CMakeFiles/Svc_WatchDog.dir/depend

