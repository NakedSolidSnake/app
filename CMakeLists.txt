cmake_minimum_required(VERSION 3.09)

project(APP)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_C_FLAGS "-std=c99 -Wall")
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(mathe)
add_subdirectory(print)

add_executable(app app.c)
target_link_libraries(app  mathe print)