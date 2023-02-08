# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.10.2)
add_library(UseSo SHARED src/main/cpp/UseSo.cpp)
add_library( hello
             SHARED
             IMPORTED )
set_target_properties(
             hello
             PROPERTIES IMPORTED_LOCATION
             ${CMAKE_SOURCE_DIR}/src/main/jniLibs/armeabi-v7a/libhello.so )

#指明头文件路径，不然会提示找不到 so 的方法
include_directories(src/main/cpp/)
target_link_libraries(UseSo hello ${log-lib})