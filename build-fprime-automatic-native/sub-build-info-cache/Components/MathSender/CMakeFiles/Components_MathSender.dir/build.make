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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache

# Include any dependencies generated for this target.
include Components/MathSender/CMakeFiles/Components_MathSender.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Components/MathSender/CMakeFiles/Components_MathSender.dir/compiler_depend.make

# Include the progress variables for this target.
include Components/MathSender/CMakeFiles/Components_MathSender.dir/progress.make

# Include the compile flags for this target's objects.
include Components/MathSender/CMakeFiles/Components_MathSender.dir/flags.make

Components/MathSender/CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.o: Components/MathSender/CMakeFiles/Components_MathSender.dir/flags.make
Components/MathSender/CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/cmake/empty.cpp
Components/MathSender/CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.o: Components/MathSender/CMakeFiles/Components_MathSender.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Components/MathSender/CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/Components/MathSender && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Components/MathSender/CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.o -MF CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.o.d -o CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/cmake/empty.cpp

Components/MathSender/CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/Components/MathSender && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/cmake/empty.cpp > CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.i

Components/MathSender/CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/Components/MathSender && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/cmake/empty.cpp -o CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.s

# Object files for target Components_MathSender
Components_MathSender_OBJECTS = \
"CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.o"

# External object files for target Components_MathSender
Components_MathSender_EXTERNAL_OBJECTS =

lib/Linux/libComponents_MathSender.a: Components/MathSender/CMakeFiles/Components_MathSender.dir/__/__/fprime/cmake/empty.cpp.o
lib/Linux/libComponents_MathSender.a: Components/MathSender/CMakeFiles/Components_MathSender.dir/build.make
lib/Linux/libComponents_MathSender.a: Components/MathSender/CMakeFiles/Components_MathSender.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/Linux/libComponents_MathSender.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/Components/MathSender && $(CMAKE_COMMAND) -P CMakeFiles/Components_MathSender.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/Components/MathSender && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Components_MathSender.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Components/MathSender/CMakeFiles/Components_MathSender.dir/build: lib/Linux/libComponents_MathSender.a
.PHONY : Components/MathSender/CMakeFiles/Components_MathSender.dir/build

Components/MathSender/CMakeFiles/Components_MathSender.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/Components/MathSender && $(CMAKE_COMMAND) -P CMakeFiles/Components_MathSender.dir/cmake_clean.cmake
.PHONY : Components/MathSender/CMakeFiles/Components_MathSender.dir/clean

Components/MathSender/CMakeFiles/Components_MathSender.dir/depend:
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/Components/MathSender /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/Components/MathSender /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/Components/MathSender/CMakeFiles/Components_MathSender.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Components/MathSender/CMakeFiles/Components_MathSender.dir/depend
