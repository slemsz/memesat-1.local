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
include F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/flags.make

F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.o: F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/flags.make
F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/CFDP/Checksum/test/ut/Main.cpp
F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.o: F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/CFDP/Checksum && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc7bfe62f -DASSERT_RELATIVE_PATH='"CFDP/Checksum/test/ut/Main.cpp"' -MD -MT F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.o -MF CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.o.d -o CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/CFDP/Checksum/test/ut/Main.cpp

F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/CFDP/Checksum && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc7bfe62f -DASSERT_RELATIVE_PATH='"CFDP/Checksum/test/ut/Main.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/CFDP/Checksum/test/ut/Main.cpp > CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.i

F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/CFDP/Checksum && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xc7bfe62f -DASSERT_RELATIVE_PATH='"CFDP/Checksum/test/ut/Main.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/CFDP/Checksum/test/ut/Main.cpp -o CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.s

# Object files for target CFDP_Checksum_ut_exe
CFDP_Checksum_ut_exe_OBJECTS = \
"CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.o"

# External object files for target CFDP_Checksum_ut_exe
CFDP_Checksum_ut_exe_EXTERNAL_OBJECTS =

bin/Darwin/CFDP_Checksum_ut_exe: F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/test/ut/Main.cpp.o
bin/Darwin/CFDP_Checksum_ut_exe: F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/build.make
bin/Darwin/CFDP_Checksum_ut_exe: lib/libgtest_maind.a
bin/Darwin/CFDP_Checksum_ut_exe: lib/Darwin/libCFDP_Checksum.a
bin/Darwin/CFDP_Checksum_ut_exe: lib/Darwin/libFw_Types.a
bin/Darwin/CFDP_Checksum_ut_exe: lib/libgtestd.a
bin/Darwin/CFDP_Checksum_ut_exe: lib/Darwin/libFw_Cfg.a
bin/Darwin/CFDP_Checksum_ut_exe: lib/Darwin/libconfig.a
bin/Darwin/CFDP_Checksum_ut_exe: F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/Darwin/CFDP_Checksum_ut_exe"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/CFDP/Checksum && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CFDP_Checksum_ut_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/build: bin/Darwin/CFDP_Checksum_ut_exe
.PHONY : F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/build

F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/CFDP/Checksum && $(CMAKE_COMMAND) -P CMakeFiles/CFDP_Checksum_ut_exe.dir/cmake_clean.cmake
.PHONY : F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/clean

F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/CFDP/Checksum /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/CFDP/Checksum /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum_ut_exe.dir/depend
