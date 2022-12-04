cmake_minimum_required(VERSION 3.23)
project(consolevik)

set(CMAKE_CXX_STANDARD 20)

add_library(consolevik SHARED colors.cpp effects.cpp format.cpp)
add_executable(consolevik-test Test.cpp)

include_directories(/opt/homebrew/Cellar/termcolor/2.1.0/include)
target_link_libraries(consolevik-test consolevik)
