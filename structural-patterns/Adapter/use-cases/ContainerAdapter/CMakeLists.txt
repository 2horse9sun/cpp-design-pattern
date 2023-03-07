cmake_minimum_required(VERSION 3.24)
project(ContainerAdapter)

set(CMAKE_CXX_STANDARD 17)

add_executable(ContainerAdapter main.cpp Deque.h Stack.h Queue.h)
