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
include Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/compiler_depend.make

# Include the progress variables for this target.
include Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/progress.make

# Include the compile flags for this target's objects.
include Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/flags.make

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/flags.make
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o -MF CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o.d -o CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp > CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.i

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/Ref/RecvBuffApp && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp -o CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.s

# Object files for target Ref_RecvBuffApp
Ref_RecvBuffApp_OBJECTS = \
"CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o"

# External object files for target Ref_RecvBuffApp
Ref_RecvBuffApp_EXTERNAL_OBJECTS =

lib/Darwin/libRef_RecvBuffApp.a: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/Users/heron/Desktop/memedir/memesat-1.local/cmake/empty.cpp.o
lib/Darwin/libRef_RecvBuffApp.a: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/build.make
lib/Darwin/libRef_RecvBuffApp.a: Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/Darwin/libRef_RecvBuffApp.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/Ref/RecvBuffApp && $(CMAKE_COMMAND) -P CMakeFiles/Ref_RecvBuffApp.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/Ref/RecvBuffApp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ref_RecvBuffApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/build: lib/Darwin/libRef_RecvBuffApp.a
.PHONY : Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/build

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/Ref/RecvBuffApp && $(CMAKE_COMMAND) -P CMakeFiles/Ref_RecvBuffApp.dir/cmake_clean.cmake
.PHONY : Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/clean

Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Ref/RecvBuffApp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/Ref/RecvBuffApp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/prescan/Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Ref/RecvBuffApp/CMakeFiles/Ref_RecvBuffApp.dir/depend

