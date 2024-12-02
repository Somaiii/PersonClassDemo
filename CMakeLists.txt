cmake_minimum_required(VERSION 3.27)
project(Person_Demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(Person_Demo main.cpp
        Person.cpp
        Person.h)
