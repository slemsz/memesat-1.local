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
include F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/flags.make

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.o: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/flags.make
F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/main.cpp
F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.o: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xae65bf2e -DASSERT_RELATIVE_PATH='"Utils/test/ut/main.cpp"' -MD -MT F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.o -MF CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.o.d -o CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/main.cpp

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xae65bf2e -DASSERT_RELATIVE_PATH='"Utils/test/ut/main.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/main.cpp > CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.i

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xae65bf2e -DASSERT_RELATIVE_PATH='"Utils/test/ut/main.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/main.cpp -o CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.s

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.o: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/flags.make
F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/LockGuardTester.cpp
F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.o: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x8ea215b5 -DASSERT_RELATIVE_PATH='"Utils/test/ut/LockGuardTester.cpp"' -MD -MT F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.o -MF CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.o.d -o CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/LockGuardTester.cpp

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x8ea215b5 -DASSERT_RELATIVE_PATH='"Utils/test/ut/LockGuardTester.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/LockGuardTester.cpp > CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.i

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x8ea215b5 -DASSERT_RELATIVE_PATH='"Utils/test/ut/LockGuardTester.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/LockGuardTester.cpp -o CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.s

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.o: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/flags.make
F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/RateLimiterTester.cpp
F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.o: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xeafef71e -DASSERT_RELATIVE_PATH='"Utils/test/ut/RateLimiterTester.cpp"' -MD -MT F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.o -MF CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.o.d -o CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/RateLimiterTester.cpp

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xeafef71e -DASSERT_RELATIVE_PATH='"Utils/test/ut/RateLimiterTester.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/RateLimiterTester.cpp > CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.i

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xeafef71e -DASSERT_RELATIVE_PATH='"Utils/test/ut/RateLimiterTester.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/RateLimiterTester.cpp -o CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.s

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.o: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/flags.make
F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/TokenBucketTester.cpp
F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.o: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xa5a026d8 -DASSERT_RELATIVE_PATH='"Utils/test/ut/TokenBucketTester.cpp"' -MD -MT F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.o -MF CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.o.d -o CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/TokenBucketTester.cpp

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xa5a026d8 -DASSERT_RELATIVE_PATH='"Utils/test/ut/TokenBucketTester.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/TokenBucketTester.cpp > CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.i

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xa5a026d8 -DASSERT_RELATIVE_PATH='"Utils/test/ut/TokenBucketTester.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Utils/test/ut/TokenBucketTester.cpp -o CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.s

# Object files for target Utils_ut_exe
Utils_ut_exe_OBJECTS = \
"CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.o" \
"CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.o" \
"CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.o" \
"CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.o"

# External object files for target Utils_ut_exe
Utils_ut_exe_EXTERNAL_OBJECTS =

bin/Darwin/Utils_ut_exe: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/main.cpp.o
bin/Darwin/Utils_ut_exe: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/LockGuardTester.cpp.o
bin/Darwin/Utils_ut_exe: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/RateLimiterTester.cpp.o
bin/Darwin/Utils_ut_exe: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/test/ut/TokenBucketTester.cpp.o
bin/Darwin/Utils_ut_exe: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/build.make
bin/Darwin/Utils_ut_exe: lib/libgtest_maind.a
bin/Darwin/Utils_ut_exe: lib/Darwin/libUtils.a
bin/Darwin/Utils_ut_exe: lib/Darwin/libFw_Types.a
bin/Darwin/Utils_ut_exe: lib/Darwin/libFw_Time.a
bin/Darwin/Utils_ut_exe: lib/Darwin/libOs.a
bin/Darwin/Utils_ut_exe: lib/libgtestd.a
bin/Darwin/Utils_ut_exe: lib/Darwin/libFw_Port.a
bin/Darwin/Utils_ut_exe: lib/Darwin/libFw_Obj.a
bin/Darwin/Utils_ut_exe: lib/Darwin/libFw_Logger.a
bin/Darwin/Utils_ut_exe: lib/Darwin/libUtils_Hash.a
bin/Darwin/Utils_ut_exe: lib/Darwin/libFw_Types.a
bin/Darwin/Utils_ut_exe: lib/Darwin/libFw_Cfg.a
bin/Darwin/Utils_ut_exe: lib/Darwin/libconfig.a
bin/Darwin/Utils_ut_exe: F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../../bin/Darwin/Utils_ut_exe"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Utils_ut_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/build: bin/Darwin/Utils_ut_exe
.PHONY : F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/build

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils && $(CMAKE_COMMAND) -P CMakeFiles/Utils_ut_exe.dir/cmake_clean.cmake
.PHONY : F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/clean

F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Utils /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Utils/CMakeFiles/Utils_ut_exe.dir/depend

