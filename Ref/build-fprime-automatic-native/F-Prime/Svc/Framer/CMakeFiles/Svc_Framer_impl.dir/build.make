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
CMAKE_SOURCE_DIR = /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

# Utility rule file for Svc_Framer_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl.dir/progress.make

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl: F-Prime/Svc/Framer/FramerComponentAi.xml
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl: F-Prime/Svc/Framer/FramerComponentAc.cpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl: F-Prime/Svc/Framer/FramerComponentAc.hpp
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/FramerComponentImpl.hpp-template
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/FramerComponentImpl.cpp-template

F-Prime/Svc/Framer/FramerComponentAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/Framer.fpp
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Linux/libDrv_ByteStreamDriverModel.a
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Linux/libFw_Buffer.a
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Linux/libFw_Com.a
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Linux/libFw_Ports_SuccessCondition.a
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Linux/libOs.a
F-Prime/Svc/Framer/FramerComponentAc.cpp: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating FramerComponentAc.cpp, FramerComponentAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/Framer && /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/Framer -i /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Buffer/Buffer.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Com/Com.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Ports/SuccessCondition/SuccessCondition.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Types/Types.fpp /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/Framer.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Svc/Framer/FramerComponentAc.hpp: F-Prime/Svc/Framer/FramerComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Framer/FramerComponentAc.hpp

F-Prime/Svc/Framer/FramerComponentAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/Framer.fpp
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Linux/libDrv_ByteStreamDriverModel.a
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Linux/libFw_Buffer.a
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Linux/libFw_Com.a
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Linux/libFw_Ports_SuccessCondition.a
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Linux/libOs.a
F-Prime/Svc/Framer/FramerComponentAi.xml: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating FramerComponentAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/Framer && /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/Framer -i /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Buffer/Buffer.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Com/Com.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Ports/SuccessCondition/SuccessCondition.fpp,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Fw/Types/Types.fpp /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/Framer.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local

/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/FramerComponentImpl.hpp-template: F-Prime/Svc/Framer/FramerComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/FramerComponentImpl.hpp-template, /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/FramerComponentImpl.cpp-template"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/Framer && /usr/bin/cmake -E env PYTHONPATH=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Autocoders/Python/src:/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local:/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native:/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime FPRIME_AC_CONSTANTS_FILE=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Autocoders/Python /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/python3 /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer --build_root -t /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/Framer/FramerComponentAi.xml

/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/FramerComponentImpl.cpp-template: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/FramerComponentImpl.hpp-template
	@$(CMAKE_COMMAND) -E touch_nocreate /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/FramerComponentImpl.cpp-template

Svc_Framer_impl: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl
Svc_Framer_impl: F-Prime/Svc/Framer/FramerComponentAc.cpp
Svc_Framer_impl: F-Prime/Svc/Framer/FramerComponentAc.hpp
Svc_Framer_impl: F-Prime/Svc/Framer/FramerComponentAi.xml
Svc_Framer_impl: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/FramerComponentImpl.cpp-template
Svc_Framer_impl: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer/FramerComponentImpl.hpp-template
Svc_Framer_impl: F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl.dir/build.make
.PHONY : Svc_Framer_impl

# Rule to build all files generated by this target.
F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl.dir/build: Svc_Framer_impl
.PHONY : F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl.dir/build

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/Framer && $(CMAKE_COMMAND) -P CMakeFiles/Svc_Framer_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl.dir/clean

F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl.dir/depend:
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/Framer /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/Framer /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/Framer/CMakeFiles/Svc_Framer_impl.dir/depend

