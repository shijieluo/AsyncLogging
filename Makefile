# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/luoshijie/workspace/AsyncLogging

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luoshijie/workspace/AsyncLogging

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/luoshijie/workspace/AsyncLogging/CMakeFiles /home/luoshijie/workspace/AsyncLogging/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/luoshijie/workspace/AsyncLogging/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named aysnclogging_test

# Build rule for target.
aysnclogging_test: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 aysnclogging_test
.PHONY : aysnclogging_test

# fast build rule for target.
aysnclogging_test/fast:
	$(MAKE) -f CMakeFiles/aysnclogging_test.dir/build.make CMakeFiles/aysnclogging_test.dir/build
.PHONY : aysnclogging_test/fast

#=============================================================================
# Target rules for targets named jlog

# Build rule for target.
jlog: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 jlog
.PHONY : jlog

# fast build rule for target.
jlog/fast:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/build
.PHONY : jlog/fast

src/AsyncLogging.o: src/AsyncLogging.cpp.o

.PHONY : src/AsyncLogging.o

# target to build an object file
src/AsyncLogging.cpp.o:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/AsyncLogging.cpp.o
.PHONY : src/AsyncLogging.cpp.o

src/AsyncLogging.i: src/AsyncLogging.cpp.i

.PHONY : src/AsyncLogging.i

# target to preprocess a source file
src/AsyncLogging.cpp.i:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/AsyncLogging.cpp.i
.PHONY : src/AsyncLogging.cpp.i

src/AsyncLogging.s: src/AsyncLogging.cpp.s

.PHONY : src/AsyncLogging.s

# target to generate assembly for a file
src/AsyncLogging.cpp.s:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/AsyncLogging.cpp.s
.PHONY : src/AsyncLogging.cpp.s

src/Buffer.o: src/Buffer.cpp.o

.PHONY : src/Buffer.o

# target to build an object file
src/Buffer.cpp.o:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Buffer.cpp.o
.PHONY : src/Buffer.cpp.o

src/Buffer.i: src/Buffer.cpp.i

.PHONY : src/Buffer.i

# target to preprocess a source file
src/Buffer.cpp.i:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Buffer.cpp.i
.PHONY : src/Buffer.cpp.i

src/Buffer.s: src/Buffer.cpp.s

.PHONY : src/Buffer.s

# target to generate assembly for a file
src/Buffer.cpp.s:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Buffer.cpp.s
.PHONY : src/Buffer.cpp.s

src/Condition.o: src/Condition.cpp.o

.PHONY : src/Condition.o

# target to build an object file
src/Condition.cpp.o:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Condition.cpp.o
.PHONY : src/Condition.cpp.o

src/Condition.i: src/Condition.cpp.i

.PHONY : src/Condition.i

# target to preprocess a source file
src/Condition.cpp.i:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Condition.cpp.i
.PHONY : src/Condition.cpp.i

src/Condition.s: src/Condition.cpp.s

.PHONY : src/Condition.s

# target to generate assembly for a file
src/Condition.cpp.s:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Condition.cpp.s
.PHONY : src/Condition.cpp.s

src/LogStream.o: src/LogStream.cpp.o

.PHONY : src/LogStream.o

# target to build an object file
src/LogStream.cpp.o:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/LogStream.cpp.o
.PHONY : src/LogStream.cpp.o

src/LogStream.i: src/LogStream.cpp.i

.PHONY : src/LogStream.i

# target to preprocess a source file
src/LogStream.cpp.i:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/LogStream.cpp.i
.PHONY : src/LogStream.cpp.i

src/LogStream.s: src/LogStream.cpp.s

.PHONY : src/LogStream.s

# target to generate assembly for a file
src/LogStream.cpp.s:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/LogStream.cpp.s
.PHONY : src/LogStream.cpp.s

src/Logger.o: src/Logger.cpp.o

.PHONY : src/Logger.o

# target to build an object file
src/Logger.cpp.o:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Logger.cpp.o
.PHONY : src/Logger.cpp.o

src/Logger.i: src/Logger.cpp.i

.PHONY : src/Logger.i

# target to preprocess a source file
src/Logger.cpp.i:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Logger.cpp.i
.PHONY : src/Logger.cpp.i

src/Logger.s: src/Logger.cpp.s

.PHONY : src/Logger.s

# target to generate assembly for a file
src/Logger.cpp.s:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Logger.cpp.s
.PHONY : src/Logger.cpp.s

src/Thread.o: src/Thread.cpp.o

.PHONY : src/Thread.o

# target to build an object file
src/Thread.cpp.o:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Thread.cpp.o
.PHONY : src/Thread.cpp.o

src/Thread.i: src/Thread.cpp.i

.PHONY : src/Thread.i

# target to preprocess a source file
src/Thread.cpp.i:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Thread.cpp.i
.PHONY : src/Thread.cpp.i

src/Thread.s: src/Thread.cpp.s

.PHONY : src/Thread.s

# target to generate assembly for a file
src/Thread.cpp.s:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/Thread.cpp.s
.PHONY : src/Thread.cpp.s

src/jlog.o: src/jlog.cpp.o

.PHONY : src/jlog.o

# target to build an object file
src/jlog.cpp.o:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/jlog.cpp.o
.PHONY : src/jlog.cpp.o

src/jlog.i: src/jlog.cpp.i

.PHONY : src/jlog.i

# target to preprocess a source file
src/jlog.cpp.i:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/jlog.cpp.i
.PHONY : src/jlog.cpp.i

src/jlog.s: src/jlog.cpp.s

.PHONY : src/jlog.s

# target to generate assembly for a file
src/jlog.cpp.s:
	$(MAKE) -f CMakeFiles/jlog.dir/build.make CMakeFiles/jlog.dir/src/jlog.cpp.s
.PHONY : src/jlog.cpp.s

src/tests/AsyncLogging_test.o: src/tests/AsyncLogging_test.cpp.o

.PHONY : src/tests/AsyncLogging_test.o

# target to build an object file
src/tests/AsyncLogging_test.cpp.o:
	$(MAKE) -f CMakeFiles/aysnclogging_test.dir/build.make CMakeFiles/aysnclogging_test.dir/src/tests/AsyncLogging_test.cpp.o
.PHONY : src/tests/AsyncLogging_test.cpp.o

src/tests/AsyncLogging_test.i: src/tests/AsyncLogging_test.cpp.i

.PHONY : src/tests/AsyncLogging_test.i

# target to preprocess a source file
src/tests/AsyncLogging_test.cpp.i:
	$(MAKE) -f CMakeFiles/aysnclogging_test.dir/build.make CMakeFiles/aysnclogging_test.dir/src/tests/AsyncLogging_test.cpp.i
.PHONY : src/tests/AsyncLogging_test.cpp.i

src/tests/AsyncLogging_test.s: src/tests/AsyncLogging_test.cpp.s

.PHONY : src/tests/AsyncLogging_test.s

# target to generate assembly for a file
src/tests/AsyncLogging_test.cpp.s:
	$(MAKE) -f CMakeFiles/aysnclogging_test.dir/build.make CMakeFiles/aysnclogging_test.dir/src/tests/AsyncLogging_test.cpp.s
.PHONY : src/tests/AsyncLogging_test.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... aysnclogging_test"
	@echo "... edit_cache"
	@echo "... jlog"
	@echo "... src/AsyncLogging.o"
	@echo "... src/AsyncLogging.i"
	@echo "... src/AsyncLogging.s"
	@echo "... src/Buffer.o"
	@echo "... src/Buffer.i"
	@echo "... src/Buffer.s"
	@echo "... src/Condition.o"
	@echo "... src/Condition.i"
	@echo "... src/Condition.s"
	@echo "... src/LogStream.o"
	@echo "... src/LogStream.i"
	@echo "... src/LogStream.s"
	@echo "... src/Logger.o"
	@echo "... src/Logger.i"
	@echo "... src/Logger.s"
	@echo "... src/Thread.o"
	@echo "... src/Thread.i"
	@echo "... src/Thread.s"
	@echo "... src/jlog.o"
	@echo "... src/jlog.i"
	@echo "... src/jlog.s"
	@echo "... src/tests/AsyncLogging_test.o"
	@echo "... src/tests/AsyncLogging_test.i"
	@echo "... src/tests/AsyncLogging_test.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

