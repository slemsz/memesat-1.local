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

# Utility rule file for Svc_Deframer_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl.dir/progress.make

F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl: F-Prime/Svc/Deframer/DeframerComponentAi.xml
F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl: F-Prime/Svc/Deframer/DeframerComponentAc.cpp
F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl: F-Prime/Svc/Deframer/DeframerComponentAc.hpp
F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/DeframerComponentImpl.hpp-template
F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/DeframerComponentImpl.cpp-template

F-Prime/Svc/Deframer/DeframerComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/Deframer.fpp
F-Prime/Svc/Deframer/DeframerComponentAc.cpp: lib/Darwin/libDrv_ByteStreamDriverModel.a
F-Prime/Svc/Deframer/DeframerComponentAc.cpp: lib/Darwin/libFw_Cmd.a
F-Prime/Svc/Deframer/DeframerComponentAc.cpp: lib/Darwin/libFw_Com.a
F-Prime/Svc/Deframer/DeframerComponentAc.cpp: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/Deframer/DeframerComponentAc.cpp: lib/Darwin/libOs.a
F-Prime/Svc/Deframer/DeframerComponentAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating DeframerComponentAc.cpp, DeframerComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Deframer && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Deframer -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/Deframer.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Svc/Deframer/DeframerComponentAc.hpp: F-Prime/Svc/Deframer/DeframerComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Deframer/DeframerComponentAc.hpp

F-Prime/Svc/Deframer/DeframerComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/Deframer.fpp
F-Prime/Svc/Deframer/DeframerComponentAi.xml: lib/Darwin/libDrv_ByteStreamDriverModel.a
F-Prime/Svc/Deframer/DeframerComponentAi.xml: lib/Darwin/libFw_Cmd.a
F-Prime/Svc/Deframer/DeframerComponentAi.xml: lib/Darwin/libFw_Com.a
F-Prime/Svc/Deframer/DeframerComponentAi.xml: lib/Darwin/libSvc_Sched.a
F-Prime/Svc/Deframer/DeframerComponentAi.xml: lib/Darwin/libOs.a
F-Prime/Svc/Deframer/DeframerComponentAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating DeframerComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Deframer && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Deframer -i /Users/heron/Desktop/memedir/memesat-1.local/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Com/Com.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Svc/Sched/Sched.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/Deframer.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

/Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/DeframerComponentImpl.hpp-template: F-Prime/Svc/Deframer/DeframerComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/DeframerComponentImpl.hpp-template, /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/DeframerComponentImpl.cpp-template"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Deframer && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E env PYTHONPATH=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/src:/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/Users/heron/Desktop/memedir/memesat-1.local:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime FPRIME_AC_CONSTANTS_FILE=/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python /Users/heron/Desktop/memedir/fprime-venv/bin/python3 /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer --build_root -t /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Deframer/DeframerComponentAi.xml

/Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/DeframerComponentImpl.cpp-template: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/DeframerComponentImpl.hpp-template
	@$(CMAKE_COMMAND) -E touch_nocreate /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/DeframerComponentImpl.cpp-template

Svc_Deframer_impl: F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl
Svc_Deframer_impl: F-Prime/Svc/Deframer/DeframerComponentAc.cpp
Svc_Deframer_impl: F-Prime/Svc/Deframer/DeframerComponentAc.hpp
Svc_Deframer_impl: F-Prime/Svc/Deframer/DeframerComponentAi.xml
Svc_Deframer_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/DeframerComponentImpl.cpp-template
Svc_Deframer_impl: /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer/DeframerComponentImpl.hpp-template
Svc_Deframer_impl: F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl.dir/build.make
.PHONY : Svc_Deframer_impl

# Rule to build all files generated by this target.
F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl.dir/build: Svc_Deframer_impl
.PHONY : F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl.dir/build

F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Deframer && $(CMAKE_COMMAND) -P CMakeFiles/Svc_Deframer_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl.dir/clean

F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/Deframer /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Deframer /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/Deframer/CMakeFiles/Svc_Deframer_impl.dir/depend

