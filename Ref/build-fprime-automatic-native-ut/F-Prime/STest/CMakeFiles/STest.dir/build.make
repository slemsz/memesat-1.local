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
include F-Prime/STest/CMakeFiles/STest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/STest/CMakeFiles/STest.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/STest/CMakeFiles/STest.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/STest/CMakeFiles/STest.dir/flags.make

F-Prime/STest/CMakeFiles/STest.dir/STest/Random/bsd_random.c.o: F-Prime/STest/CMakeFiles/STest.dir/flags.make
F-Prime/STest/CMakeFiles/STest.dir/STest/Random/bsd_random.c.o: /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Random/bsd_random.c
F-Prime/STest/CMakeFiles/STest.dir/STest/Random/bsd_random.c.o: F-Prime/STest/CMakeFiles/STest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object F-Prime/STest/CMakeFiles/STest.dir/STest/Random/bsd_random.c.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT F-Prime/STest/CMakeFiles/STest.dir/STest/Random/bsd_random.c.o -MF CMakeFiles/STest.dir/STest/Random/bsd_random.c.o.d -o CMakeFiles/STest.dir/STest/Random/bsd_random.c.o -c /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Random/bsd_random.c

F-Prime/STest/CMakeFiles/STest.dir/STest/Random/bsd_random.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/STest.dir/STest/Random/bsd_random.c.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Random/bsd_random.c > CMakeFiles/STest.dir/STest/Random/bsd_random.c.i

F-Prime/STest/CMakeFiles/STest.dir/STest/Random/bsd_random.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/STest.dir/STest/Random/bsd_random.c.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Random/bsd_random.c -o CMakeFiles/STest.dir/STest/Random/bsd_random.c.s

F-Prime/STest/CMakeFiles/STest.dir/STest/Random/Random.cpp.o: F-Prime/STest/CMakeFiles/STest.dir/flags.make
F-Prime/STest/CMakeFiles/STest.dir/STest/Random/Random.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Random/Random.cpp
F-Prime/STest/CMakeFiles/STest.dir/STest/Random/Random.cpp.o: F-Prime/STest/CMakeFiles/STest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object F-Prime/STest/CMakeFiles/STest.dir/STest/Random/Random.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT F-Prime/STest/CMakeFiles/STest.dir/STest/Random/Random.cpp.o -MF CMakeFiles/STest.dir/STest/Random/Random.cpp.o.d -o CMakeFiles/STest.dir/STest/Random/Random.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Random/Random.cpp

F-Prime/STest/CMakeFiles/STest.dir/STest/Random/Random.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/STest.dir/STest/Random/Random.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Random/Random.cpp > CMakeFiles/STest.dir/STest/Random/Random.cpp.i

F-Prime/STest/CMakeFiles/STest.dir/STest/Random/Random.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/STest.dir/STest/Random/Random.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Random/Random.cpp -o CMakeFiles/STest.dir/STest/Random/Random.cpp.s

F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.o: F-Prime/STest/CMakeFiles/STest.dir/flags.make
F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Pick/Pick_default.cpp
F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.o: F-Prime/STest/CMakeFiles/STest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.o -MF CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.o.d -o CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Pick/Pick_default.cpp

F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Pick/Pick_default.cpp > CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.i

F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Pick/Pick_default.cpp -o CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.s

F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick.cpp.o: F-Prime/STest/CMakeFiles/STest.dir/flags.make
F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Pick/Pick.cpp
F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick.cpp.o: F-Prime/STest/CMakeFiles/STest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick.cpp.o -MF CMakeFiles/STest.dir/STest/Pick/Pick.cpp.o.d -o CMakeFiles/STest.dir/STest/Pick/Pick.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Pick/Pick.cpp

F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/STest.dir/STest/Pick/Pick.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Pick/Pick.cpp > CMakeFiles/STest.dir/STest/Pick/Pick.cpp.i

F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/STest.dir/STest/Pick/Pick.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/heron/Desktop/memedir/memesat-1.local/STest/STest/Pick/Pick.cpp -o CMakeFiles/STest.dir/STest/Pick/Pick.cpp.s

# Object files for target STest
STest_OBJECTS = \
"CMakeFiles/STest.dir/STest/Random/bsd_random.c.o" \
"CMakeFiles/STest.dir/STest/Random/Random.cpp.o" \
"CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.o" \
"CMakeFiles/STest.dir/STest/Pick/Pick.cpp.o"

# External object files for target STest
STest_EXTERNAL_OBJECTS =

lib/Darwin/libSTest.a: F-Prime/STest/CMakeFiles/STest.dir/STest/Random/bsd_random.c.o
lib/Darwin/libSTest.a: F-Prime/STest/CMakeFiles/STest.dir/STest/Random/Random.cpp.o
lib/Darwin/libSTest.a: F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick_default.cpp.o
lib/Darwin/libSTest.a: F-Prime/STest/CMakeFiles/STest.dir/STest/Pick/Pick.cpp.o
lib/Darwin/libSTest.a: F-Prime/STest/CMakeFiles/STest.dir/build.make
lib/Darwin/libSTest.a: F-Prime/STest/CMakeFiles/STest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../lib/Darwin/libSTest.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && $(CMAKE_COMMAND) -P CMakeFiles/STest.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/STest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/STest/CMakeFiles/STest.dir/build: lib/Darwin/libSTest.a
.PHONY : F-Prime/STest/CMakeFiles/STest.dir/build

F-Prime/STest/CMakeFiles/STest.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest && $(CMAKE_COMMAND) -P CMakeFiles/STest.dir/cmake_clean.cmake
.PHONY : F-Prime/STest/CMakeFiles/STest.dir/clean

F-Prime/STest/CMakeFiles/STest.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/STest /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/STest/CMakeFiles/STest.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/STest/CMakeFiles/STest.dir/depend
