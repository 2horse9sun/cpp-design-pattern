cmake_minimum_required(VERSION 3.24)
project(DecoratorTemplate)

set(CMAKE_CXX_STANDARD 17)

add_executable(DecoratorTemplate main.cpp Object.h Base.h Decorator.h)
