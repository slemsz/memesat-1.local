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
CMAKE_BINARY_DIR = /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native

# Include any dependencies generated for this target.
include F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/flags.make

F-Prime/Svc/CmdSplitter/CmdSplitterComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/CmdSplitter/CmdSplitter.fpp
F-Prime/Svc/CmdSplitter/CmdSplitterComponentAi.xml: lib/Linux/libFw_Cmd.a
F-Prime/Svc/CmdSplitter/CmdSplitterComponentAi.xml: lib/Linux/libFw_Com.a
F-Prime/Svc/CmdSplitter/CmdSplitterComponentAi.xml: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating CmdSplitterComponentAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Cmd/Cmd.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Com/Com.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/AcConstants.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/CmdSplitter/CmdSplitter.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat

F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/CmdSplitter/CmdSplitter.fpp
F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp: lib/Linux/libFw_Cmd.a
F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp: lib/Linux/libFw_Com.a
F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating CmdSplitterComponentAc.cpp, CmdSplitterComponentAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Cmd/Cmd.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Com/Com.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/AcConstants.fpp,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/config/FpConfig.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/CmdSplitter/CmdSplitter.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native

F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.hpp: F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.hpp

F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.o: F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/flags.make
F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/CmdSplitter/CmdSplitter.cpp
F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.o: F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3af9579c -DASSERT_RELATIVE_PATH='"Svc/CmdSplitter/CmdSplitter.cpp"' -MD -MT F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.o -MF CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.o.d -o CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/CmdSplitter/CmdSplitter.cpp

F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3af9579c -DASSERT_RELATIVE_PATH='"Svc/CmdSplitter/CmdSplitter.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/CmdSplitter/CmdSplitter.cpp > CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.i

F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x3af9579c -DASSERT_RELATIVE_PATH='"Svc/CmdSplitter/CmdSplitter.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/CmdSplitter/CmdSplitter.cpp -o CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.s

F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.o: F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/flags.make
F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.o: F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp
F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.o: F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x588394c9 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp"' -MD -MT F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.o -MF CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.o.d -o CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp

F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x588394c9 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp > CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.i

F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x588394c9 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp -o CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.s

# Object files for target Svc_CmdSplitter
Svc_CmdSplitter_OBJECTS = \
"CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.o" \
"CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.o"

# External object files for target Svc_CmdSplitter
Svc_CmdSplitter_EXTERNAL_OBJECTS =

lib/Linux/libSvc_CmdSplitter.a: F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitter.cpp.o
lib/Linux/libSvc_CmdSplitter.a: F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/CmdSplitterComponentAc.cpp.o
lib/Linux/libSvc_CmdSplitter.a: F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/build.make
lib/Linux/libSvc_CmdSplitter.a: F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libSvc_CmdSplitter.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter && $(CMAKE_COMMAND) -P CMakeFiles/Svc_CmdSplitter.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_CmdSplitter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/build: lib/Linux/libSvc_CmdSplitter.a
.PHONY : F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/build

F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter && $(CMAKE_COMMAND) -P CMakeFiles/Svc_CmdSplitter.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/clean

F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/depend: F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.cpp
F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/depend: F-Prime/Svc/CmdSplitter/CmdSplitterComponentAc.hpp
F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/depend: F-Prime/Svc/CmdSplitter/CmdSplitterComponentAi.xml
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/CmdSplitter /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/CmdSplitter/CMakeFiles/Svc_CmdSplitter.dir/depend
