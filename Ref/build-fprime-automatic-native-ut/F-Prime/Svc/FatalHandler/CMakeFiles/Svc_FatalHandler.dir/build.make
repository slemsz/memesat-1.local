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

# Include any dependencies generated for this target.
include F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/flags.make

F-Prime/Svc/FatalHandler/FatalHandlerComponentAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandler.fpp
F-Prime/Svc/FatalHandler/FatalHandlerComponentAi.xml: lib/Darwin/libSvc_Fatal.a
F-Prime/Svc/FatalHandler/FatalHandlerComponentAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating FatalHandlerComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler -i /Users/heron/Desktop/memedir/memesat-1.local/Svc/Fatal/Fatal.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandler.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandler.fpp
F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp: lib/Darwin/libSvc_Fatal.a
F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating FatalHandlerComponentAc.cpp, FatalHandlerComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler -i /Users/heron/Desktop/memedir/memesat-1.local/Svc/Fatal/Fatal.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandler.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut

F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.hpp: F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.hpp

F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.o: F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/flags.make
F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandlerComponentCommonImpl.cpp
F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.o: F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6b463fe1 -DASSERT_RELATIVE_PATH='"Svc/FatalHandler/FatalHandlerComponentCommonImpl.cpp"' -MD -MT F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.o -MF CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.o.d -o CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandlerComponentCommonImpl.cpp

F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6b463fe1 -DASSERT_RELATIVE_PATH='"Svc/FatalHandler/FatalHandlerComponentCommonImpl.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandlerComponentCommonImpl.cpp > CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.i

F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x6b463fe1 -DASSERT_RELATIVE_PATH='"Svc/FatalHandler/FatalHandlerComponentCommonImpl.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandlerComponentCommonImpl.cpp -o CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.s

F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.o: F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/flags.make
F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.o: /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandlerComponentLinuxImpl.cpp
F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.o: F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7ea1ee03 -DASSERT_RELATIVE_PATH='"Svc/FatalHandler/FatalHandlerComponentLinuxImpl.cpp"' -MD -MT F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.o -MF CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.o.d -o CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandlerComponentLinuxImpl.cpp

F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7ea1ee03 -DASSERT_RELATIVE_PATH='"Svc/FatalHandler/FatalHandlerComponentLinuxImpl.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandlerComponentLinuxImpl.cpp > CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.i

F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7ea1ee03 -DASSERT_RELATIVE_PATH='"Svc/FatalHandler/FatalHandlerComponentLinuxImpl.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler/FatalHandlerComponentLinuxImpl.cpp -o CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.s

F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.o: F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/flags.make
F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.o: F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp
F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.o: F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.o"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4140a373 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp"' -MD -MT F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.o -MF CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.o.d -o CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.o -c /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp

F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.i"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4140a373 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp"' -E /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp > CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.i

F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.s"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4140a373 -DASSERT_RELATIVE_PATH='"Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp"' -S /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp -o CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.s

# Object files for target Svc_FatalHandler
Svc_FatalHandler_OBJECTS = \
"CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.o" \
"CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.o" \
"CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.o"

# External object files for target Svc_FatalHandler
Svc_FatalHandler_EXTERNAL_OBJECTS =

lib/Darwin/libSvc_FatalHandler.a: F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentCommonImpl.cpp.o
lib/Darwin/libSvc_FatalHandler.a: F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentLinuxImpl.cpp.o
lib/Darwin/libSvc_FatalHandler.a: F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/FatalHandlerComponentAc.cpp.o
lib/Darwin/libSvc_FatalHandler.a: F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/build.make
lib/Darwin/libSvc_FatalHandler.a: F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library ../../../lib/Darwin/libSvc_FatalHandler.a"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && $(CMAKE_COMMAND) -P CMakeFiles/Svc_FatalHandler.dir/cmake_clean_target.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_FatalHandler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/build: lib/Darwin/libSvc_FatalHandler.a
.PHONY : F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/build

F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler && $(CMAKE_COMMAND) -P CMakeFiles/Svc_FatalHandler.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/clean

F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/depend: F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.cpp
F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/depend: F-Prime/Svc/FatalHandler/FatalHandlerComponentAc.hpp
F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/depend: F-Prime/Svc/FatalHandler/FatalHandlerComponentAi.xml
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Svc/FatalHandler /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/FatalHandler/CMakeFiles/Svc_FatalHandler.dir/depend

