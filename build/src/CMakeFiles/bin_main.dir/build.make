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
CMAKE_COMMAND = /snap/cmake/1366/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1366/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/Documents/LoggerCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/Documents/LoggerCode/build

# Include any dependencies generated for this target.
include src/CMakeFiles/bin_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/bin_main.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/bin_main.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/bin_main.dir/flags.make

src/CMakeFiles/bin_main.dir/main.cpp.o: src/CMakeFiles/bin_main.dir/flags.make
src/CMakeFiles/bin_main.dir/main.cpp.o: /home/ubuntu/Documents/LoggerCode/src/main.cpp
src/CMakeFiles/bin_main.dir/main.cpp.o: src/CMakeFiles/bin_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ubuntu/Documents/LoggerCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/bin_main.dir/main.cpp.o"
	cd /home/ubuntu/Documents/LoggerCode/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/bin_main.dir/main.cpp.o -MF CMakeFiles/bin_main.dir/main.cpp.o.d -o CMakeFiles/bin_main.dir/main.cpp.o -c /home/ubuntu/Documents/LoggerCode/src/main.cpp

src/CMakeFiles/bin_main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/bin_main.dir/main.cpp.i"
	cd /home/ubuntu/Documents/LoggerCode/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/Documents/LoggerCode/src/main.cpp > CMakeFiles/bin_main.dir/main.cpp.i

src/CMakeFiles/bin_main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/bin_main.dir/main.cpp.s"
	cd /home/ubuntu/Documents/LoggerCode/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/Documents/LoggerCode/src/main.cpp -o CMakeFiles/bin_main.dir/main.cpp.s

# Object files for target bin_main
bin_main_OBJECTS = \
"CMakeFiles/bin_main.dir/main.cpp.o"

# External object files for target bin_main
bin_main_EXTERNAL_OBJECTS =

src/bin_main: src/CMakeFiles/bin_main.dir/main.cpp.o
src/bin_main: src/CMakeFiles/bin_main.dir/build.make
src/bin_main: src/liblib_base.a
src/bin_main: src/liblib_terminal.a
src/bin_main: src/liblib_file.a
src/bin_main: src/liblib_log.a
src/bin_main: src/liblib_terminal.a
src/bin_main: src/liblib_file.a
src/bin_main: src/liblib_base.a
src/bin_main: src/CMakeFiles/bin_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ubuntu/Documents/LoggerCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin_main"
	cd /home/ubuntu/Documents/LoggerCode/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bin_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/bin_main.dir/build: src/bin_main
.PHONY : src/CMakeFiles/bin_main.dir/build

src/CMakeFiles/bin_main.dir/clean:
	cd /home/ubuntu/Documents/LoggerCode/build/src && $(CMAKE_COMMAND) -P CMakeFiles/bin_main.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/bin_main.dir/clean

src/CMakeFiles/bin_main.dir/depend:
	cd /home/ubuntu/Documents/LoggerCode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/Documents/LoggerCode /home/ubuntu/Documents/LoggerCode/src /home/ubuntu/Documents/LoggerCode/build /home/ubuntu/Documents/LoggerCode/build/src /home/ubuntu/Documents/LoggerCode/build/src/CMakeFiles/bin_main.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/bin_main.dir/depend

