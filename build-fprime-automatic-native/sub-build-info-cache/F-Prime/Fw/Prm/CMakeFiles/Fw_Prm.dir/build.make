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
include F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/flags.make

F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.o: F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/flags.make
F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/cmake/empty.cpp
F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.o: F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Prm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.o -MF CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.o.d -o CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/cmake/empty.cpp

F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Prm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/cmake/empty.cpp > CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.i

F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Prm && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/cmake/empty.cpp -o CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.s

# Object files for target Fw_Prm
Fw_Prm_OBJECTS = \
"CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.o"

# External object files for target Fw_Prm
Fw_Prm_EXTERNAL_OBJECTS =

lib/Linux/libFw_Prm.a: F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/__/__/cmake/empty.cpp.o
lib/Linux/libFw_Prm.a: F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/build.make
lib/Linux/libFw_Prm.a: F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/Linux/libFw_Prm.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Prm && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Prm.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Prm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fw_Prm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/build: lib/Linux/libFw_Prm.a
.PHONY : F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/build

F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Prm && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Prm.dir/cmake_clean.cmake
.PHONY : F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/clean

F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/depend:
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Prm /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Prm /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Fw/Prm/CMakeFiles/Fw_Prm.dir/depend
