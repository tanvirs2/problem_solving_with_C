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
CMAKE_SOURCE_DIR = D:\problem_solving\c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\problem_solving\c\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c.dir/flags.make

CMakeFiles/c.dir/main.c.obj: CMakeFiles/c.dir/flags.make
CMakeFiles/c.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\problem_solving\c\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c.dir/main.c.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\c.dir\main.c.obj   -c D:\problem_solving\c\main.c

CMakeFiles/c.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c.dir/main.c.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\problem_solving\c\main.c > CMakeFiles\c.dir\main.c.i

CMakeFiles/c.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c.dir/main.c.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\problem_solving\c\main.c -o CMakeFiles\c.dir\main.c.s

# Object files for target c
c_OBJECTS = \
"CMakeFiles/c.dir/main.c.obj"

# External object files for target c
c_EXTERNAL_OBJECTS =

c.exe: CMakeFiles/c.dir/main.c.obj
c.exe: CMakeFiles/c.dir/build.make
c.exe: CMakeFiles/c.dir/linklibs.rsp
c.exe: CMakeFiles/c.dir/objects1.rsp
c.exe: CMakeFiles/c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\problem_solving\c\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\c.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c.dir/build: c.exe

.PHONY : CMakeFiles/c.dir/build

CMakeFiles/c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\c.dir\cmake_clean.cmake
.PHONY : CMakeFiles/c.dir/clean

CMakeFiles/c.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\problem_solving\c D:\problem_solving\c D:\problem_solving\c\cmake-build-debug D:\problem_solving\c\cmake-build-debug D:\problem_solving\c\cmake-build-debug\CMakeFiles\c.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c.dir/depend

