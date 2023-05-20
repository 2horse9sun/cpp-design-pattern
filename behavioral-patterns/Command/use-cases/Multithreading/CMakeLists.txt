cmake_minimum_required(VERSION 3.24)
project(Multithreading)

set(CMAKE_CXX_STANDARD 17)

add_executable(Multithreading main.cpp Runnable.h Thread.h PrintTask.h)
