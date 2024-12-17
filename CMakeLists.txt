cmake_minimum_required(VERSION 3.0)

set(This Calculator)

project(${This} C CXX)
set(CMAKE_C_STANDARD 99)
set (CMAKE_CXX_STANDARD 11)
set (CMAKE_POSITION_INDEPENDENT_CODE ON)


enable_testing()
add_subdirectory(googletest)

set (Headers
    include/Calculator.h
    include/Rectangle.h
)

set (Sources
    src/Calculator.cpp
    src/Rectangle.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)