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
CMAKE_SOURCE_DIR = /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download

# Utility rule file for googletest.

# Include any custom commands dependencies for this target.
include CMakeFiles/googletest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/googletest.dir/progress.make

CMakeFiles/googletest: CMakeFiles/googletest-complete

CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-install
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-mkdir
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-download
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-update
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-patch
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-configure
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-build
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-install
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-test
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'googletest'"
	/Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E make_directory /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles
	/Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E touch /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles/googletest-complete
	/Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E touch /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/googletest-prefix/src/googletest-stamp/googletest-done

googletest-prefix/src/googletest-stamp/googletest-build: googletest-prefix/src/googletest-stamp/googletest-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'googletest'"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E echo_append
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E touch /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/googletest-prefix/src/googletest-stamp/googletest-build

googletest-prefix/src/googletest-stamp/googletest-configure: googletest-prefix/tmp/googletest-cfgcmd.txt
googletest-prefix/src/googletest-stamp/googletest-configure: googletest-prefix/src/googletest-stamp/googletest-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'googletest'"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E echo_append
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E touch /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/googletest-prefix/src/googletest-stamp/googletest-configure

googletest-prefix/src/googletest-stamp/googletest-download: googletest-prefix/src/googletest-stamp/googletest-gitinfo.txt
googletest-prefix/src/googletest-stamp/googletest-download: googletest-prefix/src/googletest-stamp/googletest-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'googletest'"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -P /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/googletest-prefix/tmp/googletest-gitclone.cmake
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E touch /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/googletest-prefix/src/googletest-stamp/googletest-download

googletest-prefix/src/googletest-stamp/googletest-install: googletest-prefix/src/googletest-stamp/googletest-build
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'googletest'"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E echo_append
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E touch /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/googletest-prefix/src/googletest-stamp/googletest-install

googletest-prefix/src/googletest-stamp/googletest-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'googletest'"
	/Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -Dcfgdir= -P /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/googletest-prefix/tmp/googletest-mkdirs.cmake
	/Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E touch /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/googletest-prefix/src/googletest-stamp/googletest-mkdir

googletest-prefix/src/googletest-stamp/googletest-patch: googletest-prefix/src/googletest-stamp/googletest-patch-info.txt
googletest-prefix/src/googletest-stamp/googletest-patch: googletest-prefix/src/googletest-stamp/googletest-update
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'googletest'"
	/Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E echo_append
	/Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E touch /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/googletest-prefix/src/googletest-stamp/googletest-patch

googletest-prefix/src/googletest-stamp/googletest-test: googletest-prefix/src/googletest-stamp/googletest-install
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'googletest'"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E echo_append
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-build-Darwin && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -E touch /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/googletest-prefix/src/googletest-stamp/googletest-test

googletest-prefix/src/googletest-stamp/googletest-update: googletest-prefix/tmp/googletest-gitupdate.cmake
googletest-prefix/src/googletest-stamp/googletest-update: googletest-prefix/src/googletest-stamp/googletest-update-info.txt
googletest-prefix/src/googletest-stamp/googletest-update: googletest-prefix/src/googletest-stamp/googletest-download
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'googletest'"
	cd /Users/heron/Desktop/memedir/memesat-1.local/gtest/googletest-src && /Users/heron/Library/Python/3.9/lib/python/site-packages/cmake/data/bin/cmake -Dcan_fetch=YES -P /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/googletest-prefix/tmp/googletest-gitupdate.cmake

googletest: CMakeFiles/googletest
googletest: CMakeFiles/googletest-complete
googletest: googletest-prefix/src/googletest-stamp/googletest-build
googletest: googletest-prefix/src/googletest-stamp/googletest-configure
googletest: googletest-prefix/src/googletest-stamp/googletest-download
googletest: googletest-prefix/src/googletest-stamp/googletest-install
googletest: googletest-prefix/src/googletest-stamp/googletest-mkdir
googletest: googletest-prefix/src/googletest-stamp/googletest-patch
googletest: googletest-prefix/src/googletest-stamp/googletest-test
googletest: googletest-prefix/src/googletest-stamp/googletest-update
googletest: CMakeFiles/googletest.dir/build.make
.PHONY : googletest

# Rule to build all files generated by this target.
CMakeFiles/googletest.dir/build: googletest
.PHONY : CMakeFiles/googletest.dir/build

CMakeFiles/googletest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/googletest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/googletest.dir/clean

CMakeFiles/googletest.dir/depend:
	cd /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download /Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native-ut/googletest-download/CMakeFiles/googletest.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/googletest.dir/depend
