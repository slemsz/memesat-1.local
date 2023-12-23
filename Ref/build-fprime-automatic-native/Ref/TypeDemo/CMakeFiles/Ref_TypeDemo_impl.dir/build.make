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

# Utility rule file for Ref_TypeDemo_impl.

# Include any custom commands dependencies for this target.
include Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl.dir/progress.make

Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceEnumAi.xml
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ChoicePairSerializableAi.xml
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceSlurrySerializableAi.xml
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/FloatSetArrayAi.xml
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ManyChoicesArrayAi.xml
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/TooManyChoicesArrayAi.xml
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/TypeDemoComponentAi.xml
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceEnumAc.cpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceEnumAc.hpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ChoicePairSerializableAc.cpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ChoicePairSerializableAc.hpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceSlurrySerializableAc.cpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceSlurrySerializableAc.hpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/FloatSetArrayAc.cpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/FloatSetArrayAc.hpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/FppConstantsAc.cpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/FppConstantsAc.hpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ManyChoicesArrayAc.cpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/ManyChoicesArrayAc.hpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/TooManyChoicesArrayAc.cpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/TooManyChoicesArrayAc.hpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/TypeDemoComponentAc.cpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: Ref/TypeDemo/TypeDemoComponentAc.hpp
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemoComponentImpl.hpp-template
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl: /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemoComponentImpl.cpp-template

/Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemoComponentImpl.hpp-template: Ref/TypeDemo/TypeDemoComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemoComponentImpl.hpp-template, /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemoComponentImpl.cpp-template"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/TypeDemo && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E env PYTHONPATH=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/src:/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/utils BUILD_ROOT=/Users/heron/Desktop/memedir/memesat-1.local:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native:/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime FPRIME_AC_CONSTANTS_FILE=/Users/heron/Desktop/memedir/memesat-1.local/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python /Users/heron/Desktop/memedir/fprime-venv/bin/python3 /Users/heron/Desktop/memedir/memesat-1.local/Autocoders/Python/bin/codegen.py -p /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo --build_root -t /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/TypeDemo/TypeDemoComponentAi.xml

/Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemoComponentImpl.cpp-template: /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemoComponentImpl.hpp-template
	@$(CMAKE_COMMAND) -E touch_nocreate /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemoComponentImpl.cpp-template

Ref/TypeDemo/ChoiceEnumAc.cpp: /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemo.fpp
Ref/TypeDemo/ChoiceEnumAc.cpp: lib/Darwin/libFw_Cmd.a
Ref/TypeDemo/ChoiceEnumAc.cpp: lib/Darwin/libFw_Log.a
Ref/TypeDemo/ChoiceEnumAc.cpp: lib/Darwin/libFw_Prm.a
Ref/TypeDemo/ChoiceEnumAc.cpp: lib/Darwin/libFw_Time.a
Ref/TypeDemo/ChoiceEnumAc.cpp: lib/Darwin/libFw_Tlm.a
Ref/TypeDemo/ChoiceEnumAc.cpp: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ChoiceEnumAc.cpp, ChoiceEnumAc.hpp, ChoicePairSerializableAc.cpp, ChoicePairSerializableAc.hpp, ChoiceSlurrySerializableAc.cpp, ChoiceSlurrySerializableAc.hpp, FloatSetArrayAc.cpp, FloatSetArrayAc.hpp, FppConstantsAc.cpp, FppConstantsAc.hpp, ManyChoicesArrayAc.cpp, ManyChoicesArrayAc.hpp, TooManyChoicesArrayAc.cpp, TooManyChoicesArrayAc.hpp, TypeDemoComponentAc.cpp, TypeDemoComponentAc.hpp"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/TypeDemo && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-cpp -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/TypeDemo -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Prm/Prm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemo.fpp -p /Users/heron/Desktop/memedir/memesat-1.local,/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native

Ref/TypeDemo/ChoiceEnumAc.hpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/ChoiceEnumAc.hpp

Ref/TypeDemo/ChoicePairSerializableAc.cpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/ChoicePairSerializableAc.cpp

Ref/TypeDemo/ChoicePairSerializableAc.hpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/ChoicePairSerializableAc.hpp

Ref/TypeDemo/ChoiceSlurrySerializableAc.cpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/ChoiceSlurrySerializableAc.cpp

Ref/TypeDemo/ChoiceSlurrySerializableAc.hpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/ChoiceSlurrySerializableAc.hpp

Ref/TypeDemo/FloatSetArrayAc.cpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/FloatSetArrayAc.cpp

Ref/TypeDemo/FloatSetArrayAc.hpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/FloatSetArrayAc.hpp

Ref/TypeDemo/FppConstantsAc.cpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/FppConstantsAc.cpp

Ref/TypeDemo/FppConstantsAc.hpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/FppConstantsAc.hpp

Ref/TypeDemo/ManyChoicesArrayAc.cpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/ManyChoicesArrayAc.cpp

Ref/TypeDemo/ManyChoicesArrayAc.hpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/ManyChoicesArrayAc.hpp

Ref/TypeDemo/TooManyChoicesArrayAc.cpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/TooManyChoicesArrayAc.cpp

Ref/TypeDemo/TooManyChoicesArrayAc.hpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/TooManyChoicesArrayAc.hpp

Ref/TypeDemo/TypeDemoComponentAc.cpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/TypeDemoComponentAc.cpp

Ref/TypeDemo/TypeDemoComponentAc.hpp: Ref/TypeDemo/ChoiceEnumAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/TypeDemoComponentAc.hpp

Ref/TypeDemo/ChoiceEnumAi.xml: /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemo.fpp
Ref/TypeDemo/ChoiceEnumAi.xml: lib/Darwin/libFw_Cmd.a
Ref/TypeDemo/ChoiceEnumAi.xml: lib/Darwin/libFw_Log.a
Ref/TypeDemo/ChoiceEnumAi.xml: lib/Darwin/libFw_Prm.a
Ref/TypeDemo/ChoiceEnumAi.xml: lib/Darwin/libFw_Time.a
Ref/TypeDemo/ChoiceEnumAi.xml: lib/Darwin/libFw_Tlm.a
Ref/TypeDemo/ChoiceEnumAi.xml: lib/Darwin/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ChoiceEnumAi.xml, ChoicePairSerializableAi.xml, ChoiceSlurrySerializableAi.xml, FloatSetArrayAi.xml, ManyChoicesArrayAi.xml, TooManyChoicesArrayAi.xml, TypeDemoComponentAi.xml"
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/TypeDemo && /Users/heron/Desktop/memedir/fprime-venv/bin/fpp-to-xml -d /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/TypeDemo -i /Users/heron/Desktop/memedir/memesat-1.local/Fw/Cmd/Cmd.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Log/Log.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Prm/Prm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Time/Time.fpp,/Users/heron/Desktop/memedir/memesat-1.local/Fw/Tlm/Tlm.fpp,/Users/heron/Desktop/memedir/memesat-1.local/config/FpConfig.fpp /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemo.fpp -p /Users/heron/Desktop/memedir/memesat-1.local

Ref/TypeDemo/ChoicePairSerializableAi.xml: Ref/TypeDemo/ChoiceEnumAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/ChoicePairSerializableAi.xml

Ref/TypeDemo/ChoiceSlurrySerializableAi.xml: Ref/TypeDemo/ChoiceEnumAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/ChoiceSlurrySerializableAi.xml

Ref/TypeDemo/FloatSetArrayAi.xml: Ref/TypeDemo/ChoiceEnumAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/FloatSetArrayAi.xml

Ref/TypeDemo/ManyChoicesArrayAi.xml: Ref/TypeDemo/ChoiceEnumAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/ManyChoicesArrayAi.xml

Ref/TypeDemo/TooManyChoicesArrayAi.xml: Ref/TypeDemo/ChoiceEnumAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/TooManyChoicesArrayAi.xml

Ref/TypeDemo/TypeDemoComponentAi.xml: Ref/TypeDemo/ChoiceEnumAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate Ref/TypeDemo/TypeDemoComponentAi.xml

Ref_TypeDemo_impl: /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemoComponentImpl.cpp-template
Ref_TypeDemo_impl: /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo/TypeDemoComponentImpl.hpp-template
Ref_TypeDemo_impl: Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl
Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceEnumAc.cpp
Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceEnumAc.hpp
Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceEnumAi.xml
Ref_TypeDemo_impl: Ref/TypeDemo/ChoicePairSerializableAc.cpp
Ref_TypeDemo_impl: Ref/TypeDemo/ChoicePairSerializableAc.hpp
Ref_TypeDemo_impl: Ref/TypeDemo/ChoicePairSerializableAi.xml
Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceSlurrySerializableAc.cpp
Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceSlurrySerializableAc.hpp
Ref_TypeDemo_impl: Ref/TypeDemo/ChoiceSlurrySerializableAi.xml
Ref_TypeDemo_impl: Ref/TypeDemo/FloatSetArrayAc.cpp
Ref_TypeDemo_impl: Ref/TypeDemo/FloatSetArrayAc.hpp
Ref_TypeDemo_impl: Ref/TypeDemo/FloatSetArrayAi.xml
Ref_TypeDemo_impl: Ref/TypeDemo/FppConstantsAc.cpp
Ref_TypeDemo_impl: Ref/TypeDemo/FppConstantsAc.hpp
Ref_TypeDemo_impl: Ref/TypeDemo/ManyChoicesArrayAc.cpp
Ref_TypeDemo_impl: Ref/TypeDemo/ManyChoicesArrayAc.hpp
Ref_TypeDemo_impl: Ref/TypeDemo/ManyChoicesArrayAi.xml
Ref_TypeDemo_impl: Ref/TypeDemo/TooManyChoicesArrayAc.cpp
Ref_TypeDemo_impl: Ref/TypeDemo/TooManyChoicesArrayAc.hpp
Ref_TypeDemo_impl: Ref/TypeDemo/TooManyChoicesArrayAi.xml
Ref_TypeDemo_impl: Ref/TypeDemo/TypeDemoComponentAc.cpp
Ref_TypeDemo_impl: Ref/TypeDemo/TypeDemoComponentAc.hpp
Ref_TypeDemo_impl: Ref/TypeDemo/TypeDemoComponentAi.xml
Ref_TypeDemo_impl: Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl.dir/build.make
.PHONY : Ref_TypeDemo_impl

# Rule to build all files generated by this target.
Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl.dir/build: Ref_TypeDemo_impl
.PHONY : Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl.dir/build

Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl.dir/clean:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/TypeDemo && $(CMAKE_COMMAND) -P CMakeFiles/Ref_TypeDemo_impl.dir/cmake_clean.cmake
.PHONY : Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl.dir/clean

Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref /Users/heron/Desktop/memedir/memesat-1.local/Ref/TypeDemo /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/TypeDemo /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Ref/TypeDemo/CMakeFiles/Ref_TypeDemo_impl.dir/depend

