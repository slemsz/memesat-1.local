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
CMAKE_BINARY_DIR = /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan

# Include any dependencies generated for this target.
include F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/flags.make

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/flags.make
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/F-Prime/Fw/Log && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o -MF CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o.d -o CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/F-Prime/Fw/Log && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp > CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.i

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/F-Prime/Fw/Log && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp -o CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.s

# Object files for target Fw_Log
Fw_Log_OBJECTS = \
"CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o"

# External object files for target Fw_Log
Fw_Log_EXTERNAL_OBJECTS =

lib/Darwin/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o
lib/Darwin/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/build.make
lib/Darwin/libFw_Log.a: F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/Darwin/libFw_Log.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/F-Prime/Fw/Log && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Log.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/F-Prime/Fw/Log && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fw_Log.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/build: lib/Darwin/libFw_Log.a
.PHONY : F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/build

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/F-Prime/Fw/Log && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Log.dir/cmake_clean.cmake
.PHONY : F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/clean

F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Fw/Log /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/F-Prime/Fw/Log /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Fw/Log/CMakeFiles/Fw_Log.dir/depend

