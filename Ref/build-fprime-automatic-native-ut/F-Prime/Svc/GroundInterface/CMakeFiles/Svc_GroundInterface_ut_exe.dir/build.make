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
include F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/flags.make

F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/GroundInterface.fpp
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/Events.fppi
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Darwin/libFw_Com.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Darwin/libFw_Log.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Darwin/libOs.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating GroundInterfaceComponentAc.cpp, GroundInterfaceComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/GroundInterface.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.hpp: F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.hpp

F-Prime/Svc/GroundInterface/TesterBase.cpp: F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating TesterBase.cpp, TesterBase.hpp, GTestBase.cpp, GTestBase.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E env PYTHONPATH=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/src:/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/Users/heron/Desktop/memedir/memesat-1.local:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime FPRIME_AC_CONSTANTS_FILE=/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python /Users/heron/Desktop/memedir/fprime-venv/bin/python3 /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface --build_root -u /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E remove /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/Tester.hpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/Tester.cpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/TestMain.cpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/TesterHelpers.cpp

F-Prime/Svc/GroundInterface/TesterBase.hpp: F-Prime/Svc/GroundInterface/TesterBase.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/GroundInterface/TesterBase.hpp

F-Prime/Svc/GroundInterface/GTestBase.cpp: F-Prime/Svc/GroundInterface/TesterBase.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/GroundInterface/GTestBase.cpp

F-Prime/Svc/GroundInterface/GTestBase.hpp: F-Prime/Svc/GroundInterface/TesterBase.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/GroundInterface/GTestBase.hpp

F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/GroundInterface.fpp
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/Events.fppi
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Darwin/libFw_Com.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Darwin/libFw_Log.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Darwin/libOs.a
F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating GroundInterfaceComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/GroundInterface.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/flags.make
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/Tester.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xeb03b834 -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/test/ut/Tester.cpp"' -MD -MT F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.o -MF CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.o.d -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/Tester.cpp

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xeb03b834 -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/test/ut/Tester.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/Tester.cpp > CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.i

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xeb03b834 -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/test/ut/Tester.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/Tester.cpp -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.s

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/flags.make
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/TestMain.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2dd541d3 -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/test/ut/TestMain.cpp"' -MD -MT F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.o -MF CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.o.d -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/TestMain.cpp

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2dd541d3 -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/test/ut/TestMain.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/TestMain.cpp > CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.i

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x2dd541d3 -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/test/ut/TestMain.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/TestMain.cpp -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.s

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/flags.make
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/GroundInterfaceRules.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xccae12a6 -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/test/ut/GroundInterfaceRules.cpp"' -MD -MT F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.o -MF CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.o.d -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/GroundInterfaceRules.cpp

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xccae12a6 -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/test/ut/GroundInterfaceRules.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/GroundInterfaceRules.cpp > CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.i

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xccae12a6 -DASSERT_RELATIVE_PATH='"Svc/GroundInterface/test/ut/GroundInterfaceRules.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface/test/ut/GroundInterfaceRules.cpp -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.s

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/flags.make
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.o: F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfd2b2a36 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp"' -MD -MT F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.o -MF CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.o.d -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfd2b2a36 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp > CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.i

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfd2b2a36 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.s

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/flags.make
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.o: F-Prime/Svc/GroundInterface/TesterBase.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3b9bfbeb -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/TesterBase.cpp"' -MD -MT F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.o -MF CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.o.d -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/TesterBase.cpp

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3b9bfbeb -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/TesterBase.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/TesterBase.cpp > CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.i

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3b9bfbeb -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/TesterBase.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/TesterBase.cpp -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.s

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/flags.make
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.o: F-Prime/Svc/GroundInterface/GTestBase.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.o: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4c2253ac -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GTestBase.cpp"' -MD -MT F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.o -MF CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.o.d -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GTestBase.cpp

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4c2253ac -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GTestBase.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GTestBase.cpp > CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.i

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4c2253ac -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GTestBase.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/GTestBase.cpp -o CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.s

# Object files for target Svc_GroundInterface_ut_exe
Svc_GroundInterface_ut_exe_OBJECTS = \
"CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.o" \
"CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.o" \
"CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.o" \
"CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.o" \
"CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.o" \
"CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.o"

# External object files for target Svc_GroundInterface_ut_exe
Svc_GroundInterface_ut_exe_EXTERNAL_OBJECTS =

bin/Darwin/Svc_GroundInterface_ut_exe: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/Tester.cpp.o
bin/Darwin/Svc_GroundInterface_ut_exe: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/TestMain.cpp.o
bin/Darwin/Svc_GroundInterface_ut_exe: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/test/ut/GroundInterfaceRules.cpp.o
bin/Darwin/Svc_GroundInterface_ut_exe: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GroundInterfaceComponentAc.cpp.o
bin/Darwin/Svc_GroundInterface_ut_exe: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/TesterBase.cpp.o
bin/Darwin/Svc_GroundInterface_ut_exe: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/GTestBase.cpp.o
bin/Darwin/Svc_GroundInterface_ut_exe: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/build.make
bin/Darwin/Svc_GroundInterface_ut_exe: lib/libgtest_maind.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libSvc_GroundInterface.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libSTest.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Types.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Buffer.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Com.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Log.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libSvc_Sched.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libOs.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Comp.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/libgtestd.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Prm.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Cmd.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Log.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Tlm.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Com.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Time.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libUtils_Hash.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Port.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Obj.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Logger.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libUtils_Types.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Types.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libFw_Cfg.a
bin/Darwin/Svc_GroundInterface_ut_exe: lib/Darwin/libconfig.a
bin/Darwin/Svc_GroundInterface_ut_exe: F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable ../../../bin/Darwin/Svc_GroundInterface_ut_exe"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_GroundInterface_ut_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/build: bin/Darwin/Svc_GroundInterface_ut_exe
.PHONY : F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/build

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface && $(CMAKE_COMMAND) -P CMakeFiles/Svc_GroundInterface_ut_exe.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/clean

F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/depend: F-Prime/Svc/GroundInterface/GTestBase.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/depend: F-Prime/Svc/GroundInterface/GTestBase.hpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/depend: F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/depend: F-Prime/Svc/GroundInterface/GroundInterfaceComponentAc.hpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/depend: F-Prime/Svc/GroundInterface/GroundInterfaceComponentAi.xml
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/depend: F-Prime/Svc/GroundInterface/TesterBase.cpp
F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/depend: F-Prime/Svc/GroundInterface/TesterBase.hpp
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/GroundInterface /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/GroundInterface/CMakeFiles/Svc_GroundInterface_ut_exe.dir/depend

