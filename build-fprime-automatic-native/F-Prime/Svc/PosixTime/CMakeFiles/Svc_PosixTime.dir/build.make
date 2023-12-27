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
include F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/flags.make

F-Prime/Svc/PosixTime/PosixTimeComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/PosixTime/PosixTime.fpp
F-Prime/Svc/PosixTime/PosixTimeComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Interfaces/Time.fppi
F-Prime/Svc/PosixTime/PosixTimeComponentAi.xml: lib/Linux/libFw_Time.a
F-Prime/Svc/PosixTime/PosixTimeComponentAi.xml: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating PosixTimeComponentAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Time/Time.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/PosixTime/PosixTime.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat

F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/PosixTime/PosixTime.fpp
F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/Interfaces/Time.fppi
F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp: lib/Linux/libFw_Time.a
F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating PosixTimeComponentAc.cpp, PosixTimeComponentAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime && /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime -i /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw/Time/Time.fpp /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/PosixTime/PosixTime.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat,/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native

F-Prime/Svc/PosixTime/PosixTimeComponentAc.hpp: F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PosixTime/PosixTimeComponentAc.hpp

F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.o: F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/flags.make
F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.o: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/PosixTime/PosixTime.cpp
F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.o: F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6abbb200 -DASSERT_RELATIVE_PATH='"Svc/PosixTime/PosixTime.cpp"' -MD -MT F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.o -MF CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.o.d -o CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/PosixTime/PosixTime.cpp

F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6abbb200 -DASSERT_RELATIVE_PATH='"Svc/PosixTime/PosixTime.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/PosixTime/PosixTime.cpp > CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.i

F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6abbb200 -DASSERT_RELATIVE_PATH='"Svc/PosixTime/PosixTime.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/PosixTime/PosixTime.cpp -o CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.s

F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.o: F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/flags.make
F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.o: F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp
F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.o: F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x23a3a222 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp"' -MD -MT F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.o -MF CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.o.d -o CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp

F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x23a3a222 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp > CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.i

F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x23a3a222 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-native/F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp -o CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.s

# Object files for target Svc_PosixTime
Svc_PosixTime_OBJECTS = \
"CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.o" \
"CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.o"

# External object files for target Svc_PosixTime
Svc_PosixTime_EXTERNAL_OBJECTS =

lib/Linux/libSvc_PosixTime.a: F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTime.cpp.o
lib/Linux/libSvc_PosixTime.a: F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/PosixTimeComponentAc.cpp.o
lib/Linux/libSvc_PosixTime.a: F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/build.make
lib/Linux/libSvc_PosixTime.a: F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libSvc_PosixTime.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime && $(CMAKE_COMMAND) -P CMakeFiles/Svc_PosixTime.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_PosixTime.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/build: lib/Linux/libSvc_PosixTime.a
.PHONY : F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/build

F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime && $(CMAKE_COMMAND) -P CMakeFiles/Svc_PosixTime.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/clean

F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/depend: F-Prime/Svc/PosixTime/PosixTimeComponentAc.cpp
F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/depend: F-Prime/Svc/PosixTime/PosixTimeComponentAc.hpp
F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/depend: F-Prime/Svc/PosixTime/PosixTimeComponentAi.xml
	cd /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Svc/PosixTime /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/PosixTime/CMakeFiles/Svc_PosixTime.dir/depend
