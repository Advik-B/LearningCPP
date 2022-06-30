# CMakeList.txt : CMake project for IfStatement2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("IfStatement2")

# Add source to this project's executable.
add_executable (IfStatement2 "IfStatement2.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET IfStatement2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
