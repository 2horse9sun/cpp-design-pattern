cmake_minimum_required(VERSION 3.24)
project(NetworkConnection)

set(CMAKE_CXX_STANDARD 17)

add_executable(NetworkConnection main.cpp ConnectionState.h Connection.h ConnectionState.cpp Connection.cpp)
