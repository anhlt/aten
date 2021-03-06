# Specify the minimum version for CMake

cmake_minimum_required(VERSION 2.8)

# Project's name

project(aten)
# Set the output folder where your program will be created
set(CMAKE_SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)
set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/local/include)

file(GLOB helloworld_SRC
    "src/*.h"
    "src/*.cpp"
)

add_library(chap9 src/chap9/autoscp.cpp)
add_library(template src/template/stack.cpp)
add_library(vect src/template/vect.cpp)
add_library(stonewt src/template/stonewt.cpp)
add_library(linkedlist src/linkedlist/linkedlist.cpp)



add_executable(helloworld ${helloworld_SRC})
target_link_libraries (helloworld chap9 template vect stonewt linkedlist)
