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
CMAKE_SOURCE_DIR = /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache

# Utility rule file for fpp_depend_Svc_PassiveConsoleTextLogger.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger.dir/progress.make

F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/stdout.txt
F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/direct.txt
F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/missing.txt
F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/framework.txt
F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/generated.txt
F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/include.txt
F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/unittest.txt
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger && /usr/bin/cmake -E copy_if_different /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/stdout.txt /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/direct.txt /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/missing.txt /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/framework.txt /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/generated.txt /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/include.txt /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/unittest.txt /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache

F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/stdout.txt: /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/PassiveConsoleTextLogger/PassiveConsoleTextLogger.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating fpp-cache/stdout.txt, fpp-cache/direct.txt, fpp-cache/missing.txt, fpp-cache/framework.txt, fpp-cache/generated.txt, fpp-cache/include.txt, fpp-cache/unittest.txt"
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger && /home/krokko/Desktop/MEMEdir/fprime-venv/bin/python3 /home/krokko/Desktop/MEMEdir/memesat-1.local/cmake/target/tools/redirector.py /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/stdout.txt /home/krokko/Desktop/MEMEdir/fprime-venv/bin/fpp-depend /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/locs.fpp -d /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/direct.txt -m /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/missing.txt -f /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/framework.txt -g /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/generated.txt -i /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/include.txt -u /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/unittest.txt -a /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/PassiveConsoleTextLogger/PassiveConsoleTextLogger.fpp

F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/direct.txt: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/stdout.txt
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/direct.txt

F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/missing.txt: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/stdout.txt
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/missing.txt

F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/framework.txt: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/stdout.txt
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/framework.txt

F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/generated.txt: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/stdout.txt
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/generated.txt

F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/include.txt: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/stdout.txt
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/include.txt

F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/unittest.txt: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/stdout.txt
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/unittest.txt

fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger
fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/direct.txt
fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/framework.txt
fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/generated.txt
fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/include.txt
fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/missing.txt
fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/stdout.txt
fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/fpp-cache/unittest.txt
fpp_depend_Svc_PassiveConsoleTextLogger: F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger.dir/build.make
.PHONY : fpp_depend_Svc_PassiveConsoleTextLogger

# Rule to build all files generated by this target.
F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger.dir/build: fpp_depend_Svc_PassiveConsoleTextLogger
.PHONY : F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger.dir/build

F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger.dir/clean:
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger && $(CMAKE_COMMAND) -P CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger.dir/clean

F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger.dir/depend:
	cd /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/MEMEdir/memesat-1.local/Svc/PassiveConsoleTextLogger /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger /home/krokko/Desktop/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/PassiveConsoleTextLogger/CMakeFiles/fpp_depend_Svc_PassiveConsoleTextLogger.dir/depend

