
add_library(bar STATIC bar.c)
target_include_directories(bar PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})