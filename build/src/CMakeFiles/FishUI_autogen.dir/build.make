# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/tokyo/clone/cuteclone/fishui

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tokyo/clone/cuteclone/fishui/build

# Utility rule file for FishUI_autogen.

# Include the progress variables for this target.
include src/CMakeFiles/FishUI_autogen.dir/progress.make

src/CMakeFiles/FishUI_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/clone/cuteclone/fishui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target FishUI"
	cd /home/tokyo/clone/cuteclone/fishui/build/src && /usr/bin/cmake -E cmake_autogen /home/tokyo/clone/cuteclone/fishui/build/src/CMakeFiles/FishUI_autogen.dir/AutogenInfo.json ""

FishUI_autogen: src/CMakeFiles/FishUI_autogen
FishUI_autogen: src/CMakeFiles/FishUI_autogen.dir/build.make

.PHONY : FishUI_autogen

# Rule to build all files generated by this target.
src/CMakeFiles/FishUI_autogen.dir/build: FishUI_autogen

.PHONY : src/CMakeFiles/FishUI_autogen.dir/build

src/CMakeFiles/FishUI_autogen.dir/clean:
	cd /home/tokyo/clone/cuteclone/fishui/build/src && $(CMAKE_COMMAND) -P CMakeFiles/FishUI_autogen.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/FishUI_autogen.dir/clean

src/CMakeFiles/FishUI_autogen.dir/depend:
	cd /home/tokyo/clone/cuteclone/fishui/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/clone/cuteclone/fishui /home/tokyo/clone/cuteclone/fishui/src /home/tokyo/clone/cuteclone/fishui/build /home/tokyo/clone/cuteclone/fishui/build/src /home/tokyo/clone/cuteclone/fishui/build/src/CMakeFiles/FishUI_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/FishUI_autogen.dir/depend

