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

# Utility rule file for Svc_Fatal_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl.dir/progress.make

F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl: F-Prime/Svc/Fatal/FatalEventPortAi.xml
F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl: F-Prime/Svc/Fatal/FatalEventPortAc.cpp
F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl: F-Prime/Svc/Fatal/FatalEventPortAc.hpp

F-Prime/Svc/Fatal/FatalEventPortAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Fatal/Fatal.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating FatalEventPortAc.cpp, FatalEventPortAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Fatal && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Fatal -i /Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/Fatal/Fatal.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Svc/Fatal/FatalEventPortAc.hpp: F-Prime/Svc/Fatal/FatalEventPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Fatal/FatalEventPortAc.hpp

F-Prime/Svc/Fatal/FatalEventPortAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Fatal/Fatal.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating FatalEventPortAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Fatal && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Fatal -i /Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/Fatal/Fatal.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

Svc_Fatal_impl: F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl
Svc_Fatal_impl: F-Prime/Svc/Fatal/FatalEventPortAc.cpp
Svc_Fatal_impl: F-Prime/Svc/Fatal/FatalEventPortAc.hpp
Svc_Fatal_impl: F-Prime/Svc/Fatal/FatalEventPortAi.xml
Svc_Fatal_impl: F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl.dir/build.make
.PHONY : Svc_Fatal_impl

# Rule to build all files generated by this target.
F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl.dir/build: Svc_Fatal_impl
.PHONY : F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl.dir/build

F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Fatal && $(CMAKE_COMMAND) -P CMakeFiles/Svc_Fatal_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl.dir/clean

F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/Fatal /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Fatal /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/Fatal/CMakeFiles/Svc_Fatal_impl.dir/depend

