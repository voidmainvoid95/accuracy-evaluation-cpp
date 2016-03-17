cmake_minimum_required(VERSION 2.8)
project(accuracy_evaluation)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/accuracy_evaluation_example.cpp)
add_executable(accuracy_evaluation ${SOURCE_FILES})