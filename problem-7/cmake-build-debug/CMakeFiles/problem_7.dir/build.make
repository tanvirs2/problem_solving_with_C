# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\problem_solving\c\problem-7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\problem_solving\c\problem-7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/problem_7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/problem_7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/problem_7.dir/flags.make

CMakeFiles/problem_7.dir/main.c.obj: CMakeFiles/problem_7.dir/flags.make
CMakeFiles/problem_7.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\problem_solving\c\problem-7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/problem_7.dir/main.c.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\problem_7.dir\main.c.obj   -c D:\problem_solving\c\problem-7\main.c

CMakeFiles/problem_7.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/problem_7.dir/main.c.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\problem_solving\c\problem-7\main.c > CMakeFiles\problem_7.dir\main.c.i

CMakeFiles/problem_7.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/problem_7.dir/main.c.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\problem_solving\c\problem-7\main.c -o CMakeFiles\problem_7.dir\main.c.s

# Object files for target problem_7
problem_7_OBJECTS = \
"CMakeFiles/problem_7.dir/main.c.obj"

# External object files for target problem_7
problem_7_EXTERNAL_OBJECTS =

problem_7.exe: CMakeFiles/problem_7.dir/main.c.obj
problem_7.exe: CMakeFiles/problem_7.dir/build.make
problem_7.exe: CMakeFiles/problem_7.dir/linklibs.rsp
problem_7.exe: CMakeFiles/problem_7.dir/objects1.rsp
problem_7.exe: CMakeFiles/problem_7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\problem_solving\c\problem-7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable problem_7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\problem_7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/problem_7.dir/build: problem_7.exe

.PHONY : CMakeFiles/problem_7.dir/build

CMakeFiles/problem_7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\problem_7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/problem_7.dir/clean

CMakeFiles/problem_7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\problem_solving\c\problem-7 D:\problem_solving\c\problem-7 D:\problem_solving\c\problem-7\cmake-build-debug D:\problem_solving\c\problem-7\cmake-build-debug D:\problem_solving\c\problem-7\cmake-build-debug\CMakeFiles\problem_7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/problem_7.dir/depend

