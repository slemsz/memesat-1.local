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
include F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/flags.make

F-Prime/Svc/Seq/CmdSeqCancelPortAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Seq/Seq.fpp
F-Prime/Svc/Seq/CmdSeqCancelPortAi.xml: lib/Linux/libFw_Types.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating CmdSeqCancelPortAi.xml, CmdSeqInPortAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Types/Types.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Seq/Seq.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat

F-Prime/Svc/Seq/CmdSeqInPortAi.xml: F-Prime/Svc/Seq/CmdSeqCancelPortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Seq/CmdSeqInPortAi.xml

F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Seq/Seq.fpp
F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp: lib/Linux/libFw_Types.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating CmdSeqCancelPortAc.cpp, CmdSeqCancelPortAc.hpp, CmdSeqInPortAc.cpp, CmdSeqInPortAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Types/Types.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Seq/Seq.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native

F-Prime/Svc/Seq/CmdSeqCancelPortAc.hpp: F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Seq/CmdSeqCancelPortAc.hpp

F-Prime/Svc/Seq/CmdSeqInPortAc.cpp: F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Seq/CmdSeqInPortAc.cpp

F-Prime/Svc/Seq/CmdSeqInPortAc.hpp: F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Seq/CmdSeqInPortAc.hpp

F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.o: F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/flags.make
F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.o: F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp
F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.o: F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf5c70e9f -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp"' -MD -MT F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.o -MF CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.o.d -o CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp

F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf5c70e9f -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp > CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.i

F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xf5c70e9f -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp -o CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.s

F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.o: F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/flags.make
F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.o: F-Prime/Svc/Seq/CmdSeqInPortAc.cpp
F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.o: F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7d112357 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqInPortAc.cpp"' -MD -MT F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.o -MF CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.o.d -o CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqInPortAc.cpp

F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7d112357 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqInPortAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqInPortAc.cpp > CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.i

F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7d112357 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqInPortAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq/CmdSeqInPortAc.cpp -o CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.s

# Object files for target Svc_Seq
Svc_Seq_OBJECTS = \
"CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.o" \
"CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.o"

# External object files for target Svc_Seq
Svc_Seq_EXTERNAL_OBJECTS =

lib/Linux/libSvc_Seq.a: F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqCancelPortAc.cpp.o
lib/Linux/libSvc_Seq.a: F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/CmdSeqInPortAc.cpp.o
lib/Linux/libSvc_Seq.a: F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/build.make
lib/Linux/libSvc_Seq.a: F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libSvc_Seq.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq && $(CMAKE_COMMAND) -P CMakeFiles/Svc_Seq.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_Seq.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/build: lib/Linux/libSvc_Seq.a
.PHONY : F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/build

F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq && $(CMAKE_COMMAND) -P CMakeFiles/Svc_Seq.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/clean

F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/depend: F-Prime/Svc/Seq/CmdSeqCancelPortAc.cpp
F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/depend: F-Prime/Svc/Seq/CmdSeqCancelPortAc.hpp
F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/depend: F-Prime/Svc/Seq/CmdSeqCancelPortAi.xml
F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/depend: F-Prime/Svc/Seq/CmdSeqInPortAc.cpp
F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/depend: F-Prime/Svc/Seq/CmdSeqInPortAc.hpp
F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/depend: F-Prime/Svc/Seq/CmdSeqInPortAi.xml
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Seq /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/Seq/CMakeFiles/Svc_Seq.dir/depend

