# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/MergeSortLists.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MergeSortLists.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MergeSortLists.dir/flags.make

CMakeFiles/MergeSortLists.dir/main.c.o: CMakeFiles/MergeSortLists.dir/flags.make
CMakeFiles/MergeSortLists.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MergeSortLists.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MergeSortLists.dir/main.c.o   -c "/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists/main.c"

CMakeFiles/MergeSortLists.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MergeSortLists.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists/main.c" > CMakeFiles/MergeSortLists.dir/main.c.i

CMakeFiles/MergeSortLists.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MergeSortLists.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists/main.c" -o CMakeFiles/MergeSortLists.dir/main.c.s

# Object files for target MergeSortLists
MergeSortLists_OBJECTS = \
"CMakeFiles/MergeSortLists.dir/main.c.o"

# External object files for target MergeSortLists
MergeSortLists_EXTERNAL_OBJECTS =

MergeSortLists: CMakeFiles/MergeSortLists.dir/main.c.o
MergeSortLists: CMakeFiles/MergeSortLists.dir/build.make
MergeSortLists: CMakeFiles/MergeSortLists.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable MergeSortLists"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MergeSortLists.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MergeSortLists.dir/build: MergeSortLists

.PHONY : CMakeFiles/MergeSortLists.dir/build

CMakeFiles/MergeSortLists.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MergeSortLists.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MergeSortLists.dir/clean

CMakeFiles/MergeSortLists.dir/depend:
	cd "/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists" "/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists" "/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists/cmake-build-debug" "/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists/cmake-build-debug" "/Users/rond/Desktop/רון/טכניון/מבוא לתכנות מערכות/hw1/MergeSortLists/cmake-build-debug/CMakeFiles/MergeSortLists.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MergeSortLists.dir/depend

