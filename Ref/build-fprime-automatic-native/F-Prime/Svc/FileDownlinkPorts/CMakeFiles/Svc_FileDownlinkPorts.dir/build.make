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

# Include any dependencies generated for this target.
include F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/flags.make

F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAi.xml: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/FileDownlinkPorts/FileDownlinkPorts.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating SendFileCompletePortAi.xml, SendFileRequestPortAi.xml, SendFileResponseSerializableAi.xml, SendFileStatusEnumAi.xml"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/fpp-to-xml -d /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/FileDownlinkPorts/FileDownlinkPorts.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local

F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAi.xml: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAi.xml

F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAi.xml: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAi.xml

F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAi.xml: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAi.xml

F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp: /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/FileDownlinkPorts/FileDownlinkPorts.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating SendFileCompletePortAc.cpp, SendFileCompletePortAc.hpp, SendFileRequestPortAc.cpp, SendFileRequestPortAc.hpp, SendFileResponseSerializableAc.cpp, SendFileResponseSerializableAc.hpp, SendFileStatusEnumAc.cpp, SendFileStatusEnumAc.hpp"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /home/krokko/Desktop/ssrl/MEMEdir/fprime-venv/bin/fpp-to-cpp -d /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/FileDownlinkPorts/FileDownlinkPorts.fpp -p /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local,/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.hpp: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.hpp

F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.cpp: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.cpp

F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.hpp: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.hpp

F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.cpp: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.cpp

F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.hpp: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.hpp

F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.cpp: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.cpp

F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.hpp: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.hpp

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/flags.make
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd61361a2 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp"' -MD -MT F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.o -MF CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.o.d -o CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd61361a2 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp > CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.i

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd61361a2 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp -o CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.s

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/flags.make
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.cpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfd65374b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.cpp"' -MD -MT F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.o -MF CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.o.d -o CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.cpp

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfd65374b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.cpp > CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.i

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xfd65374b -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.cpp -o CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.s

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/flags.make
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.cpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x80b75963 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.cpp"' -MD -MT F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.o -MF CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.o.d -o CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.cpp

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x80b75963 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.cpp > CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.i

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x80b75963 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.cpp -o CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.s

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/flags.make
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.cpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.o: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.o"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xac4dce03 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.cpp"' -MD -MT F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.o -MF CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.o.d -o CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.o -c /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.cpp

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.i"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xac4dce03 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.cpp"' -E /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.cpp > CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.i

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.s"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xac4dce03 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.cpp"' -S /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.cpp -o CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.s

# Object files for target Svc_FileDownlinkPorts
Svc_FileDownlinkPorts_OBJECTS = \
"CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.o" \
"CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.o" \
"CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.o" \
"CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.o"

# External object files for target Svc_FileDownlinkPorts
Svc_FileDownlinkPorts_EXTERNAL_OBJECTS =

lib/Linux/libSvc_FileDownlinkPorts.a: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileCompletePortAc.cpp.o
lib/Linux/libSvc_FileDownlinkPorts.a: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileRequestPortAc.cpp.o
lib/Linux/libSvc_FileDownlinkPorts.a: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileResponseSerializableAc.cpp.o
lib/Linux/libSvc_FileDownlinkPorts.a: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/SendFileStatusEnumAc.cpp.o
lib/Linux/libSvc_FileDownlinkPorts.a: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/build.make
lib/Linux/libSvc_FileDownlinkPorts.a: F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library ../../../lib/Linux/libSvc_FileDownlinkPorts.a"
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && $(CMAKE_COMMAND) -P CMakeFiles/Svc_FileDownlinkPorts.dir/cmake_clean_target.cmake
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_FileDownlinkPorts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/build: lib/Linux/libSvc_FileDownlinkPorts.a
.PHONY : F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/build

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/clean:
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts && $(CMAKE_COMMAND) -P CMakeFiles/Svc_FileDownlinkPorts.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/clean

F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.cpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAc.hpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileCompletePortAi.xml
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.cpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAc.hpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileRequestPortAi.xml
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.cpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAc.hpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileResponseSerializableAi.xml
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.cpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAc.hpp
F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend: F-Prime/Svc/FileDownlinkPorts/SendFileStatusEnumAi.xml
	cd /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Svc/FileDownlinkPorts /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts /home/krokko/Desktop/ssrl/MEMEdir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/FileDownlinkPorts/CMakeFiles/Svc_FileDownlinkPorts.dir/depend

