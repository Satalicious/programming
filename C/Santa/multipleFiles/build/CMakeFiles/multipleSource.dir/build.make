# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_SOURCE_DIR = /home/sata/repos/C/Santa/multipleFiles

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sata/repos/C/Santa/multipleFiles/build

# Include any dependencies generated for this target.
include CMakeFiles/multipleSource.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/multipleSource.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/multipleSource.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/multipleSource.dir/flags.make

CMakeFiles/multipleSource.dir/main.c.o: CMakeFiles/multipleSource.dir/flags.make
CMakeFiles/multipleSource.dir/main.c.o: ../main.c
CMakeFiles/multipleSource.dir/main.c.o: CMakeFiles/multipleSource.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sata/repos/C/Santa/multipleFiles/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/multipleSource.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/multipleSource.dir/main.c.o -MF CMakeFiles/multipleSource.dir/main.c.o.d -o CMakeFiles/multipleSource.dir/main.c.o -c /home/sata/repos/C/Santa/multipleFiles/main.c

CMakeFiles/multipleSource.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/multipleSource.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sata/repos/C/Santa/multipleFiles/main.c > CMakeFiles/multipleSource.dir/main.c.i

CMakeFiles/multipleSource.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/multipleSource.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sata/repos/C/Santa/multipleFiles/main.c -o CMakeFiles/multipleSource.dir/main.c.s

CMakeFiles/multipleSource.dir/circuit.c.o: CMakeFiles/multipleSource.dir/flags.make
CMakeFiles/multipleSource.dir/circuit.c.o: ../circuit.c
CMakeFiles/multipleSource.dir/circuit.c.o: CMakeFiles/multipleSource.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sata/repos/C/Santa/multipleFiles/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/multipleSource.dir/circuit.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/multipleSource.dir/circuit.c.o -MF CMakeFiles/multipleSource.dir/circuit.c.o.d -o CMakeFiles/multipleSource.dir/circuit.c.o -c /home/sata/repos/C/Santa/multipleFiles/circuit.c

CMakeFiles/multipleSource.dir/circuit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/multipleSource.dir/circuit.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sata/repos/C/Santa/multipleFiles/circuit.c > CMakeFiles/multipleSource.dir/circuit.c.i

CMakeFiles/multipleSource.dir/circuit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/multipleSource.dir/circuit.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sata/repos/C/Santa/multipleFiles/circuit.c -o CMakeFiles/multipleSource.dir/circuit.c.s

CMakeFiles/multipleSource.dir/ui.c.o: CMakeFiles/multipleSource.dir/flags.make
CMakeFiles/multipleSource.dir/ui.c.o: ../ui.c
CMakeFiles/multipleSource.dir/ui.c.o: CMakeFiles/multipleSource.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sata/repos/C/Santa/multipleFiles/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/multipleSource.dir/ui.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/multipleSource.dir/ui.c.o -MF CMakeFiles/multipleSource.dir/ui.c.o.d -o CMakeFiles/multipleSource.dir/ui.c.o -c /home/sata/repos/C/Santa/multipleFiles/ui.c

CMakeFiles/multipleSource.dir/ui.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/multipleSource.dir/ui.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sata/repos/C/Santa/multipleFiles/ui.c > CMakeFiles/multipleSource.dir/ui.c.i

CMakeFiles/multipleSource.dir/ui.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/multipleSource.dir/ui.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sata/repos/C/Santa/multipleFiles/ui.c -o CMakeFiles/multipleSource.dir/ui.c.s

CMakeFiles/multipleSource.dir/inventory.c.o: CMakeFiles/multipleSource.dir/flags.make
CMakeFiles/multipleSource.dir/inventory.c.o: ../inventory.c
CMakeFiles/multipleSource.dir/inventory.c.o: CMakeFiles/multipleSource.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sata/repos/C/Santa/multipleFiles/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/multipleSource.dir/inventory.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/multipleSource.dir/inventory.c.o -MF CMakeFiles/multipleSource.dir/inventory.c.o.d -o CMakeFiles/multipleSource.dir/inventory.c.o -c /home/sata/repos/C/Santa/multipleFiles/inventory.c

CMakeFiles/multipleSource.dir/inventory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/multipleSource.dir/inventory.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sata/repos/C/Santa/multipleFiles/inventory.c > CMakeFiles/multipleSource.dir/inventory.c.i

CMakeFiles/multipleSource.dir/inventory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/multipleSource.dir/inventory.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sata/repos/C/Santa/multipleFiles/inventory.c -o CMakeFiles/multipleSource.dir/inventory.c.s

CMakeFiles/multipleSource.dir/interface.c.o: CMakeFiles/multipleSource.dir/flags.make
CMakeFiles/multipleSource.dir/interface.c.o: ../interface.c
CMakeFiles/multipleSource.dir/interface.c.o: CMakeFiles/multipleSource.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sata/repos/C/Santa/multipleFiles/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/multipleSource.dir/interface.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/multipleSource.dir/interface.c.o -MF CMakeFiles/multipleSource.dir/interface.c.o.d -o CMakeFiles/multipleSource.dir/interface.c.o -c /home/sata/repos/C/Santa/multipleFiles/interface.c

CMakeFiles/multipleSource.dir/interface.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/multipleSource.dir/interface.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sata/repos/C/Santa/multipleFiles/interface.c > CMakeFiles/multipleSource.dir/interface.c.i

CMakeFiles/multipleSource.dir/interface.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/multipleSource.dir/interface.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sata/repos/C/Santa/multipleFiles/interface.c -o CMakeFiles/multipleSource.dir/interface.c.s

# Object files for target multipleSource
multipleSource_OBJECTS = \
"CMakeFiles/multipleSource.dir/main.c.o" \
"CMakeFiles/multipleSource.dir/circuit.c.o" \
"CMakeFiles/multipleSource.dir/ui.c.o" \
"CMakeFiles/multipleSource.dir/inventory.c.o" \
"CMakeFiles/multipleSource.dir/interface.c.o"

# External object files for target multipleSource
multipleSource_EXTERNAL_OBJECTS =

multipleSource: CMakeFiles/multipleSource.dir/main.c.o
multipleSource: CMakeFiles/multipleSource.dir/circuit.c.o
multipleSource: CMakeFiles/multipleSource.dir/ui.c.o
multipleSource: CMakeFiles/multipleSource.dir/inventory.c.o
multipleSource: CMakeFiles/multipleSource.dir/interface.c.o
multipleSource: CMakeFiles/multipleSource.dir/build.make
multipleSource: CMakeFiles/multipleSource.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sata/repos/C/Santa/multipleFiles/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable multipleSource"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/multipleSource.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/multipleSource.dir/build: multipleSource
.PHONY : CMakeFiles/multipleSource.dir/build

CMakeFiles/multipleSource.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/multipleSource.dir/cmake_clean.cmake
.PHONY : CMakeFiles/multipleSource.dir/clean

CMakeFiles/multipleSource.dir/depend:
	cd /home/sata/repos/C/Santa/multipleFiles/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sata/repos/C/Santa/multipleFiles /home/sata/repos/C/Santa/multipleFiles /home/sata/repos/C/Santa/multipleFiles/build /home/sata/repos/C/Santa/multipleFiles/build /home/sata/repos/C/Santa/multipleFiles/build/CMakeFiles/multipleSource.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/multipleSource.dir/depend

