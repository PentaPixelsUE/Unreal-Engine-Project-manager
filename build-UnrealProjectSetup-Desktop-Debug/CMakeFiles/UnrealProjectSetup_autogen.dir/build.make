# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /media/saif/a6fc8aae-38f2-48da-bac6-fb7a12b6f241/Plugins/UnrealProjectSetup

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/saif/a6fc8aae-38f2-48da-bac6-fb7a12b6f241/Plugins/build-UnrealProjectSetup-Desktop-Debug

# Utility rule file for UnrealProjectSetup_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/UnrealProjectSetup_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/UnrealProjectSetup_autogen.dir/progress.make

CMakeFiles/UnrealProjectSetup_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/media/saif/a6fc8aae-38f2-48da-bac6-fb7a12b6f241/Plugins/build-UnrealProjectSetup-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target UnrealProjectSetup"
	/usr/bin/cmake -E cmake_autogen /media/saif/a6fc8aae-38f2-48da-bac6-fb7a12b6f241/Plugins/build-UnrealProjectSetup-Desktop-Debug/CMakeFiles/UnrealProjectSetup_autogen.dir/AutogenInfo.json Debug

UnrealProjectSetup_autogen: CMakeFiles/UnrealProjectSetup_autogen
UnrealProjectSetup_autogen: CMakeFiles/UnrealProjectSetup_autogen.dir/build.make
.PHONY : UnrealProjectSetup_autogen

# Rule to build all files generated by this target.
CMakeFiles/UnrealProjectSetup_autogen.dir/build: UnrealProjectSetup_autogen
.PHONY : CMakeFiles/UnrealProjectSetup_autogen.dir/build

CMakeFiles/UnrealProjectSetup_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UnrealProjectSetup_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UnrealProjectSetup_autogen.dir/clean

CMakeFiles/UnrealProjectSetup_autogen.dir/depend:
	cd /media/saif/a6fc8aae-38f2-48da-bac6-fb7a12b6f241/Plugins/build-UnrealProjectSetup-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/saif/a6fc8aae-38f2-48da-bac6-fb7a12b6f241/Plugins/UnrealProjectSetup /media/saif/a6fc8aae-38f2-48da-bac6-fb7a12b6f241/Plugins/UnrealProjectSetup /media/saif/a6fc8aae-38f2-48da-bac6-fb7a12b6f241/Plugins/build-UnrealProjectSetup-Desktop-Debug /media/saif/a6fc8aae-38f2-48da-bac6-fb7a12b6f241/Plugins/build-UnrealProjectSetup-Desktop-Debug /media/saif/a6fc8aae-38f2-48da-bac6-fb7a12b6f241/Plugins/build-UnrealProjectSetup-Desktop-Debug/CMakeFiles/UnrealProjectSetup_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/UnrealProjectSetup_autogen.dir/depend

