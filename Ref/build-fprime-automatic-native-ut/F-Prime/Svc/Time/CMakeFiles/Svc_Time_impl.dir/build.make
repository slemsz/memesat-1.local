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

# Utility rule file for Svc_Time_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl.dir/progress.make

F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl: F-Prime/Svc/Time/TimeComponentAi.xml
F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl: F-Prime/Svc/Time/TimeComponentAc.cpp
F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl: F-Prime/Svc/Time/TimeComponentAc.hpp
F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/TimeComponentImpl.hpp-template
F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/TimeComponentImpl.cpp-template

F-Prime/Svc/Time/TimeComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/Time.fpp
F-Prime/Svc/Time/TimeComponentAc.cpp: lib/Darwin/libFw_Time.a
F-Prime/Svc/Time/TimeComponentAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating TimeComponentAc.cpp, TimeComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Time && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Time -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/Time.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Svc/Time/TimeComponentAc.hpp: F-Prime/Svc/Time/TimeComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Time/TimeComponentAc.hpp

F-Prime/Svc/Time/TimeComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/Time.fpp
F-Prime/Svc/Time/TimeComponentAi.xml: lib/Darwin/libFw_Time.a
F-Prime/Svc/Time/TimeComponentAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating TimeComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Time && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Time -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/Time.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

/Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/TimeComponentImpl.hpp-template: F-Prime/Svc/Time/TimeComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/TimeComponentImpl.hpp-template, /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/TimeComponentImpl.cpp-template"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Time && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E env PYTHONPATH=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/src:/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/Users/heron/Desktop/memedir/memesat-1.local:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime FPRIME_AC_CONSTANTS_FILE=/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python /Users/heron/Desktop/memedir/fprime-venv/bin/python3 /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time --build_root -t /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Time/TimeComponentAi.xml

/Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/TimeComponentImpl.cpp-template: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/TimeComponentImpl.hpp-template
	@$(CMAKE_COMMAND) -E touch_nocreate /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/TimeComponentImpl.cpp-template

Svc_Time_impl: F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl
Svc_Time_impl: F-Prime/Svc/Time/TimeComponentAc.cpp
Svc_Time_impl: F-Prime/Svc/Time/TimeComponentAc.hpp
Svc_Time_impl: F-Prime/Svc/Time/TimeComponentAi.xml
Svc_Time_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/TimeComponentImpl.cpp-template
Svc_Time_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time/TimeComponentImpl.hpp-template
Svc_Time_impl: F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl.dir/build.make
.PHONY : Svc_Time_impl

# Rule to build all files generated by this target.
F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl.dir/build: Svc_Time_impl
.PHONY : F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl.dir/build

F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Time && $(CMAKE_COMMAND) -P CMakeFiles/Svc_Time_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl.dir/clean

F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/Time /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Time /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/Time/CMakeFiles/Svc_Time_impl.dir/depend

