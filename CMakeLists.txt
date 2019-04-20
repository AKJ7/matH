project(matH)
cmake_minimum_required(VERSION 3.10)
add_subdirectory(include)

add_executable(mathTest test/test.c)

target_link_libraries(mathTest matH)
include_directories(mathTest include )

