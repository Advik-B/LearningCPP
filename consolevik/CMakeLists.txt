cmake_minimum_required(VERSION 3.23)
project(consolevik)

set(CMAKE_CXX_STANDARD 20)

add_library(consolevik SHARED colors.cpp)
add_executable(consolevik-test Test.cpp)
