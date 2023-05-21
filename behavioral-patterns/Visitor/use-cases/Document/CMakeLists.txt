cmake_minimum_required(VERSION 3.24)
project(Document)

set(CMAKE_CXX_STANDARD 17)

add_executable(Document main.cpp DocumentElement.cpp DocumentElement.h DocumentVisitor.cpp DocumentVisitor.h Document.h)
