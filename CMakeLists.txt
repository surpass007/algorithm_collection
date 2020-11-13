cmake_minimum_required(VERSION 3.10)
project(algorithm_collection)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11 -pthread")
SET(EXECUTABLE_OUTPUT_PATH
    ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH
    ${PROJECT_BINARY_DIR}/lib)

link_directories(${PROJECT_BINARY_DIR}/lib)

add_executable(
    union_find

    src/test_union_find.cpp
)