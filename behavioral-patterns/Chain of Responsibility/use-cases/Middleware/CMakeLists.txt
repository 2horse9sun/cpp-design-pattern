cmake_minimum_required(VERSION 3.24)
project(Middleware)

set(CMAKE_CXX_STANDARD 17)

add_executable(Middleware main.cpp Middleware.h WebApplication.h)
