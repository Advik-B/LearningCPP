cmake_minimum_required(VERSION 3.23)
project(The_Qt_Project)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(The_Qt_Project main.cpp window.h)
target_link_libraries(The_Qt_Project
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

