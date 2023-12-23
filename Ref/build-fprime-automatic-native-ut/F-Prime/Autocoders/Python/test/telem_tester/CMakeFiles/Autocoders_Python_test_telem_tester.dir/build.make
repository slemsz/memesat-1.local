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
include F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/flags.make

F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.hpp: /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/telem_tester/TelemTestComponentAi.xml
F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.hpp: lib/Darwin/libFw_Comp.a
F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.hpp: lib/Darwin/libFw_Tlm.a
F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.hpp: lib/Darwin/libFw_Port.a
F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.hpp: lib/Darwin/libFw_Types.a
F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.hpp: lib/Darwin/libFw_Cfg.a
F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.hpp: /Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating TelemTestComponentAc.hpp, TelemTestComponentAc.cpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E env PYTHONPATH=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/src:/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/Users/heron/Desktop/memedir/memesat-1.local:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime FPRIME_AC_CONSTANTS_FILE=/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python /Users/heron/Desktop/memedir/fprime-venv/bin/python3 /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester --build_root /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/telem_tester/TelemTestComponentAi.xml

F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.cpp: F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.cpp

F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.o: F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/flags.make
F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.o: F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.cpp
F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.o: F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x565caf3a -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.cpp"' -MD -MT F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.o -MF CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.o.d -o CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.cpp

F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x565caf3a -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.cpp > CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.i

F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x565caf3a -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.cpp -o CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.s

# Object files for target Autocoders_Python_test_telem_tester
Autocoders_Python_test_telem_tester_OBJECTS = \
"CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.o"

# External object files for target Autocoders_Python_test_telem_tester
Autocoders_Python_test_telem_tester_EXTERNAL_OBJECTS =

lib/Darwin/libAutocoders_Python_test_telem_tester.a: F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/TelemTestComponentAc.cpp.o
lib/Darwin/libAutocoders_Python_test_telem_tester.a: F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/build.make
lib/Darwin/libAutocoders_Python_test_telem_tester.a: F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../../../../../lib/Darwin/libAutocoders_Python_test_telem_tester.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester && $(CMAKE_COMMAND) -P CMakeFiles/Autocoders_Python_test_telem_tester.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Autocoders_Python_test_telem_tester.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/build: lib/Darwin/libAutocoders_Python_test_telem_tester.a
.PHONY : F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/build

F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester && $(CMAKE_COMMAND) -P CMakeFiles/Autocoders_Python_test_telem_tester.dir/cmake_clean.cmake
.PHONY : F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/clean

F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/depend: F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.cpp
F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/depend: F-Prime/Autocoders/Python/test/telem_tester/TelemTestComponentAc.hpp
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/telem_tester /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Autocoders/Python/test/telem_tester/CMakeFiles/Autocoders_Python_test_telem_tester.dir/depend

