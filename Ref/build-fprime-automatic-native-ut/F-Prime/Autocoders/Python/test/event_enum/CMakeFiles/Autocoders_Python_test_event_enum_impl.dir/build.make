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

# Utility rule file for Autocoders_Python_test_event_enum_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl.dir/progress.make

F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl: /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentImpl.hpp-template
F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl: /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentImpl.cpp-template

/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentImpl.hpp-template: /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentImpl.hpp-template, /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentImpl.cpp-template"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/event_enum && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E env PYTHONPATH=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/src:/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/Users/heron/Desktop/memedir/memesat-1.local:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime FPRIME_AC_CONSTANTS_FILE=/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python /Users/heron/Desktop/memedir/fprime-venv/bin/python3 /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum --build_root -t /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentAi.xml

/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentImpl.cpp-template: /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentImpl.hpp-template
	@$(CMAKE_COMMAND) -E touch_nocreate /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentImpl.cpp-template

Autocoders_Python_test_event_enum_impl: /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentImpl.cpp-template
Autocoders_Python_test_event_enum_impl: /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum/TestComponentImpl.hpp-template
Autocoders_Python_test_event_enum_impl: F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl
Autocoders_Python_test_event_enum_impl: F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl.dir/build.make
.PHONY : Autocoders_Python_test_event_enum_impl

# Rule to build all files generated by this target.
F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl.dir/build: Autocoders_Python_test_event_enum_impl
.PHONY : F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl.dir/build

F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/event_enum && $(CMAKE_COMMAND) -P CMakeFiles/Autocoders_Python_test_event_enum_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl.dir/clean

F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/test/event_enum /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/event_enum /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Autocoders/Python/test/event_enum/CMakeFiles/Autocoders_Python_test_event_enum_impl.dir/depend

