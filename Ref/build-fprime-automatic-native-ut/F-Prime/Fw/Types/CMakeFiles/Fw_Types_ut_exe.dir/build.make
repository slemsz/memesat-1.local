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
include F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/flags.make

F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.o: F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/flags.make
F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Fw/Types/test/ut/TypesTest.cpp
F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.o: F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Types && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfafadd08 -DASSERT_RELATIVE_PATH='"Fw/Types/test/ut/TypesTest.cpp"' -MD -MT F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.o -MF CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.o.d -o CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Fw/Types/test/ut/TypesTest.cpp

F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Types && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfafadd08 -DASSERT_RELATIVE_PATH='"Fw/Types/test/ut/TypesTest.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Fw/Types/test/ut/TypesTest.cpp > CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.i

F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Types && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfafadd08 -DASSERT_RELATIVE_PATH='"Fw/Types/test/ut/TypesTest.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Fw/Types/test/ut/TypesTest.cpp -o CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.s

# Object files for target Fw_Types_ut_exe
Fw_Types_ut_exe_OBJECTS = \
"CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.o"

# External object files for target Fw_Types_ut_exe
Fw_Types_ut_exe_EXTERNAL_OBJECTS =

bin/Darwin/Fw_Types_ut_exe: F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/test/ut/TypesTest.cpp.o
bin/Darwin/Fw_Types_ut_exe: F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/build.make
bin/Darwin/Fw_Types_ut_exe: lib/libgtest_maind.a
bin/Darwin/Fw_Types_ut_exe: lib/Darwin/libFw_Types.a
bin/Darwin/Fw_Types_ut_exe: lib/Darwin/libOs.a
bin/Darwin/Fw_Types_ut_exe: lib/libgtestd.a
bin/Darwin/Fw_Types_ut_exe: lib/Darwin/libFw_Logger.a
bin/Darwin/Fw_Types_ut_exe: lib/Darwin/libUtils_Hash.a
bin/Darwin/Fw_Types_ut_exe: lib/Darwin/libFw_Types.a
bin/Darwin/Fw_Types_ut_exe: lib/Darwin/libFw_Cfg.a
bin/Darwin/Fw_Types_ut_exe: lib/Darwin/libconfig.a
bin/Darwin/Fw_Types_ut_exe: F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/Darwin/Fw_Types_ut_exe"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Types && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fw_Types_ut_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/build: bin/Darwin/Fw_Types_ut_exe
.PHONY : F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/build

F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Types && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Types_ut_exe.dir/cmake_clean.cmake
.PHONY : F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/clean

F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Fw/Types /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Types /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Fw/Types/CMakeFiles/Fw_Types_ut_exe.dir/depend
