cmake_minimum_required(VERSION 3.24)
project(FileSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(FileSystem main.cpp FileNode.h Directory.h File.h)
