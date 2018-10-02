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
include_directories("${PROJECT_SOURCE_DIR}")
include_directories(/usr/local/include)

file(GLOB helloworld_SRC
    "src/*.h"
    "src/*.cpp"
)

add_executable(helloworld ${helloworld_SRC})