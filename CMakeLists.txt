cmake_minimum_required(VERSION 3.9)
project(gcovr_cmake_test C)

set(GCOV_LINK_FLAGS "--coverage")
set(GCOV_C_FLAGS "-g -O0 --coverage -fprofile-arcs -ftest-coverage")

set(CMAKE_EXE_LINKER_FLAGS "${GCOV_LINK_FLAGS}" CACHE STRING "" FORCE)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -O0 -Wall -fprofile-arcs -ftest-coverage" CACHE STRING "" FORCE)
set(CMAKE_C_STANDARD 99)

add_subdirectory(libs)
add_subdirectory(test)