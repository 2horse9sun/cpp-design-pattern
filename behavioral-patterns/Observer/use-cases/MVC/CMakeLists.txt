cmake_minimum_required(VERSION 3.24)
project(MVC)

set(CMAKE_CXX_STANDARD 17)

add_executable(MVC main.cpp Model.cpp Model.h View.cpp View.h Controller.cpp Controller.h)
