cmake_minimum_required(VERSION 3.30)
project(Assignment4)

set(CMAKE_CXX_STANDARD 11)


add_executable(testemployee testemployee.cpp employee.cpp
        q3/department.h
        q3/department.cpp)