cmake_minimum_required(VERSION 3.24)
project(BuilderTemplate)

set(CMAKE_CXX_STANDARD 17)

add_executable(BuilderTemplate main.cpp Director.h Builder.h Object.h BuildDirector.h)
