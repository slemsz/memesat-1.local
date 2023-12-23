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
include F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/flags.make

F-Prime/Svc/Framer/FramerComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/Framer.fpp
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Darwin/libDrv_ByteStreamDriverModel.a
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Darwin/libFw_Com.a
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Darwin/libFw_Ports_SuccessCondition.a
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Darwin/libOs.a
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating FramerComponentAc.cpp, FramerComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Ports/SuccessCondition/SuccessCondition.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Types/Types.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/Framer.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Svc/Framer/FramerComponentAc.hpp: F-Prime/Svc/Framer/FramerComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Framer/FramerComponentAc.hpp

F-Prime/Svc/Framer/TesterBase.cpp: F-Prime/Svc/Framer/FramerComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating TesterBase.cpp, TesterBase.hpp, GTestBase.cpp, GTestBase.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E env PYTHONPATH=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/src:/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/Users/heron/Desktop/memedir/memesat-1.local:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime FPRIME_AC_CONSTANTS_FILE=/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python /Users/heron/Desktop/memedir/fprime-venv/bin/python3 /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer --build_root -u /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/FramerComponentAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E remove /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/Tester.hpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/Tester.cpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/TestMain.cpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/TesterHelpers.cpp

F-Prime/Svc/Framer/TesterBase.hpp: F-Prime/Svc/Framer/TesterBase.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Framer/TesterBase.hpp

F-Prime/Svc/Framer/GTestBase.cpp: F-Prime/Svc/Framer/TesterBase.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Framer/GTestBase.cpp

F-Prime/Svc/Framer/GTestBase.hpp: F-Prime/Svc/Framer/TesterBase.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Framer/GTestBase.hpp

F-Prime/Svc/Framer/FramerComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/Framer.fpp
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Darwin/libDrv_ByteStreamDriverModel.a
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Darwin/libFw_Com.a
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Darwin/libFw_Ports_SuccessCondition.a
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Darwin/libOs.a
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating FramerComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Ports/SuccessCondition/SuccessCondition.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Types/Types.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/Framer.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.o: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/flags.make
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/test/ut/Tester.cpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.o: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x77c110cf -DASSERT_RELATIVE_PATH='"Svc/Framer/test/ut/Tester.cpp"' -MD -MT F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.o -MF CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.o.d -o CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/test/ut/Tester.cpp

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x77c110cf -DASSERT_RELATIVE_PATH='"Svc/Framer/test/ut/Tester.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/test/ut/Tester.cpp > CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.i

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x77c110cf -DASSERT_RELATIVE_PATH='"Svc/Framer/test/ut/Tester.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/test/ut/Tester.cpp -o CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.s

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.o: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/flags.make
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/test/ut/TestMain.cpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.o: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf94b8670 -DASSERT_RELATIVE_PATH='"Svc/Framer/test/ut/TestMain.cpp"' -MD -MT F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.o -MF CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.o.d -o CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/test/ut/TestMain.cpp

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf94b8670 -DASSERT_RELATIVE_PATH='"Svc/Framer/test/ut/TestMain.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/test/ut/TestMain.cpp > CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.i

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf94b8670 -DASSERT_RELATIVE_PATH='"Svc/Framer/test/ut/TestMain.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer/test/ut/TestMain.cpp -o CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.s

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.o: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/flags.make
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.o: F-Prime/Svc/Framer/FramerComponentAc.cpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.o: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x832f5b86 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/FramerComponentAc.cpp"' -MD -MT F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.o -MF CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.o.d -o CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/FramerComponentAc.cpp

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x832f5b86 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/FramerComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/FramerComponentAc.cpp > CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.i

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x832f5b86 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/FramerComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/FramerComponentAc.cpp -o CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.s

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.o: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/flags.make
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.o: F-Prime/Svc/Framer/TesterBase.cpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.o: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x9f978979 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/TesterBase.cpp"' -MD -MT F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.o -MF CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.o.d -o CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/TesterBase.cpp

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x9f978979 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/TesterBase.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/TesterBase.cpp > CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.i

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x9f978979 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/TesterBase.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/TesterBase.cpp -o CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.s

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.o: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/flags.make
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.o: F-Prime/Svc/Framer/GTestBase.cpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.o: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x01bb6cd3 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/GTestBase.cpp"' -MD -MT F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.o -MF CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.o.d -o CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/GTestBase.cpp

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x01bb6cd3 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/GTestBase.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/GTestBase.cpp > CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.i

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x01bb6cd3 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/GTestBase.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/GTestBase.cpp -o CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.s

# Object files for target Svc_Framer_ut_exe
Svc_Framer_ut_exe_OBJECTS = \
"CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.o" \
"CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.o" \
"CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.o" \
"CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.o" \
"CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.o"

# External object files for target Svc_Framer_ut_exe
Svc_Framer_ut_exe_EXTERNAL_OBJECTS =

bin/Darwin/Svc_Framer_ut_exe: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/Tester.cpp.o
bin/Darwin/Svc_Framer_ut_exe: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/test/ut/TestMain.cpp.o
bin/Darwin/Svc_Framer_ut_exe: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/FramerComponentAc.cpp.o
bin/Darwin/Svc_Framer_ut_exe: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/TesterBase.cpp.o
bin/Darwin/Svc_Framer_ut_exe: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/GTestBase.cpp.o
bin/Darwin/Svc_Framer_ut_exe: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/build.make
bin/Darwin/Svc_Framer_ut_exe: lib/libgtest_maind.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libSvc_Framer.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libDrv_ByteStreamDriverModel.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Buffer.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Com.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Ports_SuccessCondition.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libOs.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Comp.a
bin/Darwin/Svc_Framer_ut_exe: lib/libgtestd.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libSvc_FramingProtocol.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Buffer.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Prm.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Cmd.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Log.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Tlm.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Com.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Time.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Port.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Obj.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Logger.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libUtils_Hash.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libUtils_Types.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Types.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libFw_Cfg.a
bin/Darwin/Svc_Framer_ut_exe: lib/Darwin/libconfig.a
bin/Darwin/Svc_Framer_ut_exe: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable ../../../bin/Darwin/Svc_Framer_ut_exe"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_Framer_ut_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/build: bin/Darwin/Svc_Framer_ut_exe
.PHONY : F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/build

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer && $(CMAKE_COMMAND) -P CMakeFiles/Svc_Framer_ut_exe.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/clean

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/depend: F-Prime/Svc/Framer/FramerComponentAc.cpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/depend: F-Prime/Svc/Framer/FramerComponentAc.hpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/depend: F-Prime/Svc/Framer/FramerComponentAi.xml
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/depend: F-Prime/Svc/Framer/GTestBase.cpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/depend: F-Prime/Svc/Framer/GTestBase.hpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/depend: F-Prime/Svc/Framer/TesterBase.cpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/depend: F-Prime/Svc/Framer/TesterBase.hpp
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/Framer /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_ut_exe.dir/depend

