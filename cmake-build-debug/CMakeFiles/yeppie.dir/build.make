# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Ricky\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Ricky\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/yeppie.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/yeppie.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/yeppie.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/yeppie.dir/flags.make

qrc_resources.cpp: C:/iCloudDrive/Documents/Programeerimine/Programeerimine\ C++/win/yeppie/resources.qrc
qrc_resources.cpp: C:/iCloudDrive/Documents/Programeerimine/Programeerimine\ C++/win/yeppie/images/duck_loading.gif
qrc_resources.cpp: C:/iCloudDrive/Documents/Programeerimine/Programeerimine\ C++/win/yeppie/images/car_loading.gif
qrc_resources.cpp: C:/iCloudDrive/Documents/Programeerimine/Programeerimine\ C++/win/yeppie/images/weridLoading.gif
qrc_resources.cpp: C:/iCloudDrive/Documents/Programeerimine/Programeerimine\ C++/win/yeppie/images/green_check.png
qrc_resources.cpp: C:/iCloudDrive/Documents/Programeerimine/Programeerimine\ C++/win/yeppie/images/loadingDuck.mp4
qrc_resources.cpp: resources.qrc.depends
qrc_resources.cpp: C:/Qt/6.7.0/mingw_64/./bin/rcc.exe
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_resources.cpp"
	C:\Qt\6.7.0\mingw_64\bin\rcc.exe --no-zstd --name resources --output "C:/iCloudDrive/Documents/Programeerimine/Programeerimine C++/win/yeppie/cmake-build-debug/qrc_resources.cpp" "C:/iCloudDrive/Documents/Programeerimine/Programeerimine C++/win/yeppie/resources.qrc"

CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.obj: CMakeFiles/yeppie.dir/flags.make
CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.obj: CMakeFiles/yeppie.dir/includes_CXX.rsp
CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.obj: yeppie_autogen/mocs_compilation.cpp
CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.obj: CMakeFiles/yeppie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\yeppie.dir\yeppie_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\yeppie.dir\yeppie_autogen\mocs_compilation.cpp.obj -c "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\yeppie_autogen\mocs_compilation.cpp"

CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\yeppie_autogen\mocs_compilation.cpp" > CMakeFiles\yeppie.dir\yeppie_autogen\mocs_compilation.cpp.i

CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\yeppie_autogen\mocs_compilation.cpp" -o CMakeFiles\yeppie.dir\yeppie_autogen\mocs_compilation.cpp.s

CMakeFiles/yeppie.dir/main.cpp.obj: CMakeFiles/yeppie.dir/flags.make
CMakeFiles/yeppie.dir/main.cpp.obj: CMakeFiles/yeppie.dir/includes_CXX.rsp
CMakeFiles/yeppie.dir/main.cpp.obj: C:/iCloudDrive/Documents/Programeerimine/Programeerimine\ C++/win/yeppie/main.cpp
CMakeFiles/yeppie.dir/main.cpp.obj: CMakeFiles/yeppie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/yeppie.dir/main.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/yeppie.dir/main.cpp.obj -MF CMakeFiles\yeppie.dir\main.cpp.obj.d -o CMakeFiles\yeppie.dir\main.cpp.obj -c "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\main.cpp"

CMakeFiles/yeppie.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/yeppie.dir/main.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\main.cpp" > CMakeFiles\yeppie.dir\main.cpp.i

CMakeFiles/yeppie.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/yeppie.dir/main.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\main.cpp" -o CMakeFiles\yeppie.dir\main.cpp.s

CMakeFiles/yeppie.dir/mainwindow.cpp.obj: CMakeFiles/yeppie.dir/flags.make
CMakeFiles/yeppie.dir/mainwindow.cpp.obj: CMakeFiles/yeppie.dir/includes_CXX.rsp
CMakeFiles/yeppie.dir/mainwindow.cpp.obj: C:/iCloudDrive/Documents/Programeerimine/Programeerimine\ C++/win/yeppie/mainwindow.cpp
CMakeFiles/yeppie.dir/mainwindow.cpp.obj: CMakeFiles/yeppie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/yeppie.dir/mainwindow.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/yeppie.dir/mainwindow.cpp.obj -MF CMakeFiles\yeppie.dir\mainwindow.cpp.obj.d -o CMakeFiles\yeppie.dir\mainwindow.cpp.obj -c "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\mainwindow.cpp"

CMakeFiles/yeppie.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/yeppie.dir/mainwindow.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\mainwindow.cpp" > CMakeFiles\yeppie.dir\mainwindow.cpp.i

CMakeFiles/yeppie.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/yeppie.dir/mainwindow.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\mainwindow.cpp" -o CMakeFiles\yeppie.dir\mainwindow.cpp.s

CMakeFiles/yeppie.dir/MainCPPport.cpp.obj: CMakeFiles/yeppie.dir/flags.make
CMakeFiles/yeppie.dir/MainCPPport.cpp.obj: CMakeFiles/yeppie.dir/includes_CXX.rsp
CMakeFiles/yeppie.dir/MainCPPport.cpp.obj: C:/iCloudDrive/Documents/Programeerimine/Programeerimine\ C++/win/yeppie/MainCPPport.cpp
CMakeFiles/yeppie.dir/MainCPPport.cpp.obj: CMakeFiles/yeppie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/yeppie.dir/MainCPPport.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/yeppie.dir/MainCPPport.cpp.obj -MF CMakeFiles\yeppie.dir\MainCPPport.cpp.obj.d -o CMakeFiles\yeppie.dir\MainCPPport.cpp.obj -c "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\MainCPPport.cpp"

CMakeFiles/yeppie.dir/MainCPPport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/yeppie.dir/MainCPPport.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\MainCPPport.cpp" > CMakeFiles\yeppie.dir\MainCPPport.cpp.i

CMakeFiles/yeppie.dir/MainCPPport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/yeppie.dir/MainCPPport.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\MainCPPport.cpp" -o CMakeFiles\yeppie.dir\MainCPPport.cpp.s

CMakeFiles/yeppie.dir/MainPortThread.cpp.obj: CMakeFiles/yeppie.dir/flags.make
CMakeFiles/yeppie.dir/MainPortThread.cpp.obj: CMakeFiles/yeppie.dir/includes_CXX.rsp
CMakeFiles/yeppie.dir/MainPortThread.cpp.obj: C:/iCloudDrive/Documents/Programeerimine/Programeerimine\ C++/win/yeppie/MainPortThread.cpp
CMakeFiles/yeppie.dir/MainPortThread.cpp.obj: CMakeFiles/yeppie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/yeppie.dir/MainPortThread.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/yeppie.dir/MainPortThread.cpp.obj -MF CMakeFiles\yeppie.dir\MainPortThread.cpp.obj.d -o CMakeFiles\yeppie.dir\MainPortThread.cpp.obj -c "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\MainPortThread.cpp"

CMakeFiles/yeppie.dir/MainPortThread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/yeppie.dir/MainPortThread.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\MainPortThread.cpp" > CMakeFiles\yeppie.dir\MainPortThread.cpp.i

CMakeFiles/yeppie.dir/MainPortThread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/yeppie.dir/MainPortThread.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\MainPortThread.cpp" -o CMakeFiles\yeppie.dir\MainPortThread.cpp.s

CMakeFiles/yeppie.dir/qrc_resources.cpp.obj: CMakeFiles/yeppie.dir/flags.make
CMakeFiles/yeppie.dir/qrc_resources.cpp.obj: CMakeFiles/yeppie.dir/includes_CXX.rsp
CMakeFiles/yeppie.dir/qrc_resources.cpp.obj: qrc_resources.cpp
CMakeFiles/yeppie.dir/qrc_resources.cpp.obj: CMakeFiles/yeppie.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/yeppie.dir/qrc_resources.cpp.obj"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/yeppie.dir/qrc_resources.cpp.obj -MF CMakeFiles\yeppie.dir\qrc_resources.cpp.obj.d -o CMakeFiles\yeppie.dir\qrc_resources.cpp.obj -c "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\qrc_resources.cpp"

CMakeFiles/yeppie.dir/qrc_resources.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/yeppie.dir/qrc_resources.cpp.i"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\qrc_resources.cpp" > CMakeFiles\yeppie.dir\qrc_resources.cpp.i

CMakeFiles/yeppie.dir/qrc_resources.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/yeppie.dir/qrc_resources.cpp.s"
	C:\Qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\qrc_resources.cpp" -o CMakeFiles\yeppie.dir\qrc_resources.cpp.s

# Object files for target yeppie
yeppie_OBJECTS = \
"CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/yeppie.dir/main.cpp.obj" \
"CMakeFiles/yeppie.dir/mainwindow.cpp.obj" \
"CMakeFiles/yeppie.dir/MainCPPport.cpp.obj" \
"CMakeFiles/yeppie.dir/MainPortThread.cpp.obj" \
"CMakeFiles/yeppie.dir/qrc_resources.cpp.obj"

# External object files for target yeppie
yeppie_EXTERNAL_OBJECTS =

plugins/imageformats/yeppie.exe: CMakeFiles/yeppie.dir/yeppie_autogen/mocs_compilation.cpp.obj
plugins/imageformats/yeppie.exe: CMakeFiles/yeppie.dir/main.cpp.obj
plugins/imageformats/yeppie.exe: CMakeFiles/yeppie.dir/mainwindow.cpp.obj
plugins/imageformats/yeppie.exe: CMakeFiles/yeppie.dir/MainCPPport.cpp.obj
plugins/imageformats/yeppie.exe: CMakeFiles/yeppie.dir/MainPortThread.cpp.obj
plugins/imageformats/yeppie.exe: CMakeFiles/yeppie.dir/qrc_resources.cpp.obj
plugins/imageformats/yeppie.exe: CMakeFiles/yeppie.dir/build.make
plugins/imageformats/yeppie.exe: C:/Qt/6.7.0/mingw_64/lib/libQt6MultimediaWidgets.a
plugins/imageformats/yeppie.exe: C:/Qt/6.7.0/mingw_64/lib/libQt6Widgets.a
plugins/imageformats/yeppie.exe: C:/Qt/6.7.0/mingw_64/lib/libQt6Multimedia.a
plugins/imageformats/yeppie.exe: C:/Qt/6.7.0/mingw_64/lib/libQt6Gui.a
plugins/imageformats/yeppie.exe: C:/Qt/6.7.0/mingw_64/lib/libQt6Network.a
plugins/imageformats/yeppie.exe: C:/Qt/6.7.0/mingw_64/lib/libQt6Core.a
plugins/imageformats/yeppie.exe: CMakeFiles/yeppie.dir/linkLibs.rsp
plugins/imageformats/yeppie.exe: CMakeFiles/yeppie.dir/objects1.rsp
plugins/imageformats/yeppie.exe: CMakeFiles/yeppie.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable plugins\imageformats\yeppie.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\yeppie.dir\link.txt --verbose=$(VERBOSE)
	C:\Users\Ricky\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E copy_directory C:\Qt\6.7.0\mingw_64/plugins/imageformats "C:/iCloudDrive/Documents/Programeerimine/Programeerimine C++/win/yeppie/cmake-build-debug/plugins/imageformats/plugins/imageformats"
	C:\Users\Ricky\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E make_directory "C:/iCloudDrive/Documents/Programeerimine/Programeerimine C++/win/yeppie/cmake-build-debug/plugins/imageformats/plugins/platforms/"
	C:\Users\Ricky\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E copy C:\Qt\6.7.0\mingw_64/plugins/platforms/qwindows.dll "C:/iCloudDrive/Documents/Programeerimine/Programeerimine C++/win/yeppie/cmake-build-debug/plugins/imageformats/plugins/platforms/"
	C:\Users\Ricky\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E copy C:\Qt\6.7.0\mingw_64/bin/Qt6Core.dll "C:/iCloudDrive/Documents/Programeerimine/Programeerimine C++/win/yeppie/cmake-build-debug/plugins/imageformats"
	C:\Users\Ricky\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E copy C:\Qt\6.7.0\mingw_64/bin/Qt6Gui.dll "C:/iCloudDrive/Documents/Programeerimine/Programeerimine C++/win/yeppie/cmake-build-debug/plugins/imageformats"
	C:\Users\Ricky\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E copy C:\Qt\6.7.0\mingw_64/bin/Qt6Widgets.dll "C:/iCloudDrive/Documents/Programeerimine/Programeerimine C++/win/yeppie/cmake-build-debug/plugins/imageformats"

# Rule to build all files generated by this target.
CMakeFiles/yeppie.dir/build: plugins/imageformats/yeppie.exe
.PHONY : CMakeFiles/yeppie.dir/build

CMakeFiles/yeppie.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\yeppie.dir\cmake_clean.cmake
.PHONY : CMakeFiles/yeppie.dir/clean

CMakeFiles/yeppie.dir/depend: qrc_resources.cpp
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie" "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie" "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug" "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug" "C:\iCloudDrive\Documents\Programeerimine\Programeerimine C++\win\yeppie\cmake-build-debug\CMakeFiles\yeppie.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/yeppie.dir/depend
