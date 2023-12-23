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
CMAKE_BINARY_DIR = /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

# Include any dependencies generated for this target.
include F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/flags.make

F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/BufferRepeater/BufferRepeater.fpp
F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAi.xml: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAi.xml: lib/Darwin/libFw_Log.a
F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating BufferRepeaterComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/BufferRepeater/BufferRepeater.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/BufferRepeater/BufferRepeater.fpp
F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp: lib/Darwin/libFw_Buffer.a
F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp: lib/Darwin/libFw_Log.a
F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating BufferRepeaterComponentAc.cpp, BufferRepeaterComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Buffer/Buffer.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/BufferRepeater/BufferRepeater.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.hpp: F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.hpp

F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.o: F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/flags.make
F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/BufferRepeater/BufferRepeater.cpp
F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.o: F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x1bdd05ca -DASSERT_RELATIVE_PATH='"Svc/BufferRepeater/BufferRepeater.cpp"' -MD -MT F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.o -MF CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.o.d -o CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/BufferRepeater/BufferRepeater.cpp

F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x1bdd05ca -DASSERT_RELATIVE_PATH='"Svc/BufferRepeater/BufferRepeater.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/BufferRepeater/BufferRepeater.cpp > CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.i

F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x1bdd05ca -DASSERT_RELATIVE_PATH='"Svc/BufferRepeater/BufferRepeater.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/BufferRepeater/BufferRepeater.cpp -o CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.s

F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.o: F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/flags.make
F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.o: F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp
F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.o: F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xae2466f9 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp"' -MD -MT F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.o -MF CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.o.d -o CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp

F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xae2466f9 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp > CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.i

F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xae2466f9 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp -o CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.s

# Object files for target Svc_BufferRepeater
Svc_BufferRepeater_OBJECTS = \
"CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.o" \
"CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.o"

# External object files for target Svc_BufferRepeater
Svc_BufferRepeater_EXTERNAL_OBJECTS =

lib/Darwin/libSvc_BufferRepeater.a: F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeater.cpp.o
lib/Darwin/libSvc_BufferRepeater.a: F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/BufferRepeaterComponentAc.cpp.o
lib/Darwin/libSvc_BufferRepeater.a: F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/build.make
lib/Darwin/libSvc_BufferRepeater.a: F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Darwin/libSvc_BufferRepeater.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater && $(CMAKE_COMMAND) -P CMakeFiles/Svc_BufferRepeater.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_BufferRepeater.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/build: lib/Darwin/libSvc_BufferRepeater.a
.PHONY : F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/build

F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater && $(CMAKE_COMMAND) -P CMakeFiles/Svc_BufferRepeater.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/clean

F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/depend: F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.cpp
F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/depend: F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAc.hpp
F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/depend: F-Prime/Svc/BufferRepeater/BufferRepeaterComponentAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/BufferRepeater /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/BufferRepeater/CMakeFiles/Svc_BufferRepeater.dir/depend

