add_library(foo STATIC foo.c)
target_include_directories(foo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})