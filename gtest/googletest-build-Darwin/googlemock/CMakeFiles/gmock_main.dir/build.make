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
include /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/compiler_depend.make

# Include the progress variables for this target.
include /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/progress.make

# Include the compile flags for this target's objects.
include /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/flags.make

/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/flags.make
/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-src/googlemock/src/gmock_main.cc
/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o -MF CMakeFiles/gmock_main.dir/src/gmock_main.cc.o.d -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.o -c /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-src/googlemock/src/gmock_main.cc

/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock_main.cc.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-src/googlemock/src/gmock_main.cc > CMakeFiles/gmock_main.dir/src/gmock_main.cc.i

/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock_main.cc.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-src/googlemock/src/gmock_main.cc -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.s

# Object files for target gmock_main
gmock_main_OBJECTS = \
"CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"

# External object files for target gmock_main
gmock_main_EXTERNAL_OBJECTS =

/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/lib/libgmock_maind.a: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/lib/libgmock_maind.a: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/build.make
/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/lib/libgmock_maind.a: /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/lib/libgmock_maind.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/build: /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/lib/libgmock_maind.a
.PHONY : /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/build

/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean.cmake
.PHONY : /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/clean

/Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-src/googlemock /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin/googlemock/CMakeFiles/gmock_main.dir/depend
