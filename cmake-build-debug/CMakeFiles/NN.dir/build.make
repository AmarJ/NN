# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Amar Jasarbasic\workspace\NN"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Amar Jasarbasic\workspace\NN\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/NN.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NN.dir/flags.make

CMakeFiles/NN.dir/main.cpp.obj: CMakeFiles/NN.dir/flags.make
CMakeFiles/NN.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Amar Jasarbasic\workspace\NN\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NN.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\NN.dir\main.cpp.obj -c "C:\Users\Amar Jasarbasic\workspace\NN\main.cpp"

CMakeFiles/NN.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NN.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Amar Jasarbasic\workspace\NN\main.cpp" > CMakeFiles\NN.dir\main.cpp.i

CMakeFiles/NN.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NN.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Amar Jasarbasic\workspace\NN\main.cpp" -o CMakeFiles\NN.dir\main.cpp.s

CMakeFiles/NN.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/NN.dir/main.cpp.obj.requires

CMakeFiles/NN.dir/main.cpp.obj.provides: CMakeFiles/NN.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\NN.dir\build.make CMakeFiles/NN.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/NN.dir/main.cpp.obj.provides

CMakeFiles/NN.dir/main.cpp.obj.provides.build: CMakeFiles/NN.dir/main.cpp.obj


CMakeFiles/NN.dir/Matrix.cpp.obj: CMakeFiles/NN.dir/flags.make
CMakeFiles/NN.dir/Matrix.cpp.obj: ../Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Amar Jasarbasic\workspace\NN\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/NN.dir/Matrix.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\NN.dir\Matrix.cpp.obj -c "C:\Users\Amar Jasarbasic\workspace\NN\Matrix.cpp"

CMakeFiles/NN.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NN.dir/Matrix.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Amar Jasarbasic\workspace\NN\Matrix.cpp" > CMakeFiles\NN.dir\Matrix.cpp.i

CMakeFiles/NN.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NN.dir/Matrix.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Amar Jasarbasic\workspace\NN\Matrix.cpp" -o CMakeFiles\NN.dir\Matrix.cpp.s

CMakeFiles/NN.dir/Matrix.cpp.obj.requires:

.PHONY : CMakeFiles/NN.dir/Matrix.cpp.obj.requires

CMakeFiles/NN.dir/Matrix.cpp.obj.provides: CMakeFiles/NN.dir/Matrix.cpp.obj.requires
	$(MAKE) -f CMakeFiles\NN.dir\build.make CMakeFiles/NN.dir/Matrix.cpp.obj.provides.build
.PHONY : CMakeFiles/NN.dir/Matrix.cpp.obj.provides

CMakeFiles/NN.dir/Matrix.cpp.obj.provides.build: CMakeFiles/NN.dir/Matrix.cpp.obj


# Object files for target NN
NN_OBJECTS = \
"CMakeFiles/NN.dir/main.cpp.obj" \
"CMakeFiles/NN.dir/Matrix.cpp.obj"

# External object files for target NN
NN_EXTERNAL_OBJECTS =

NN.exe: CMakeFiles/NN.dir/main.cpp.obj
NN.exe: CMakeFiles/NN.dir/Matrix.cpp.obj
NN.exe: CMakeFiles/NN.dir/build.make
NN.exe: CMakeFiles/NN.dir/linklibs.rsp
NN.exe: CMakeFiles/NN.dir/objects1.rsp
NN.exe: CMakeFiles/NN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Amar Jasarbasic\workspace\NN\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable NN.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\NN.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NN.dir/build: NN.exe

.PHONY : CMakeFiles/NN.dir/build

CMakeFiles/NN.dir/requires: CMakeFiles/NN.dir/main.cpp.obj.requires
CMakeFiles/NN.dir/requires: CMakeFiles/NN.dir/Matrix.cpp.obj.requires

.PHONY : CMakeFiles/NN.dir/requires

CMakeFiles/NN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\NN.dir\cmake_clean.cmake
.PHONY : CMakeFiles/NN.dir/clean

CMakeFiles/NN.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Amar Jasarbasic\workspace\NN" "C:\Users\Amar Jasarbasic\workspace\NN" "C:\Users\Amar Jasarbasic\workspace\NN\cmake-build-debug" "C:\Users\Amar Jasarbasic\workspace\NN\cmake-build-debug" "C:\Users\Amar Jasarbasic\workspace\NN\cmake-build-debug\CMakeFiles\NN.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/NN.dir/depend

