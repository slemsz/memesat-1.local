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
include F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/flags.make

F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.o: F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/flags.make
F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Os/Stubs/Linux/FileStub.cpp
F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.o: F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Os/Stubs && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x611338b9 -DASSERT_RELATIVE_PATH='"Os/Stubs/Linux/FileStub.cpp"' -MD -MT F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.o -MF CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.o.d -o CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Os/Stubs/Linux/FileStub.cpp

F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Os/Stubs && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x611338b9 -DASSERT_RELATIVE_PATH='"Os/Stubs/Linux/FileStub.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Os/Stubs/Linux/FileStub.cpp > CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.i

F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Os/Stubs && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x611338b9 -DASSERT_RELATIVE_PATH='"Os/Stubs/Linux/FileStub.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Os/Stubs/Linux/FileStub.cpp -o CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.s

# Object files for target Os_Stubs
Os_Stubs_OBJECTS = \
"CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.o"

# External object files for target Os_Stubs
Os_Stubs_EXTERNAL_OBJECTS =

lib/Darwin/libOs_Stubs.a: F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/Linux/FileStub.cpp.o
lib/Darwin/libOs_Stubs.a: F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/build.make
lib/Darwin/libOs_Stubs.a: F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/Darwin/libOs_Stubs.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Os/Stubs && $(CMAKE_COMMAND) -P CMakeFiles/Os_Stubs.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Os/Stubs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Os_Stubs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/build: lib/Darwin/libOs_Stubs.a
.PHONY : F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/build

F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Os/Stubs && $(CMAKE_COMMAND) -P CMakeFiles/Os_Stubs.dir/cmake_clean.cmake
.PHONY : F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/clean

F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Os/Stubs /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Os/Stubs /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Os/Stubs/CMakeFiles/Os_Stubs.dir/depend

