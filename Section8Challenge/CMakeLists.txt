# CMakeList.txt : CMake project for Section8Challenge, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Section8Challenge")

# Add source to this project's executable.
add_executable (Section8Challenge "Section8Challenge.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Section8Challenge PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
