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
include /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/compiler_depend.make

# Include the progress variables for this target.
include /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/flags.make

/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/flags.make
/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-src/googletest/src/gtest-all.cc
/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o -MF CMakeFiles/gtest.dir/src/gtest-all.cc.o.d -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-src/googletest/src/gtest-all.cc

/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-src/googletest/src/gtest-all.cc > CMakeFiles/gtest.dir/src/gtest-all.cc.i

/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-src/googletest/src/gtest-all.cc -o CMakeFiles/gtest.dir/src/gtest-all.cc.s

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/lib/libgtestd.a: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/lib/libgtestd.a: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/build.make
/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/lib/libgtestd.a: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/lib/libgtestd.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/build: /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/lib/libgtestd.a
.PHONY : /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/build

/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/clean

/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-src/googletest /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googletest/CMakeFiles/gtest.dir/depend

