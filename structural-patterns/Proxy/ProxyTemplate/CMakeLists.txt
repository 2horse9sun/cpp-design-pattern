cmake_minimum_required(VERSION 3.24)
project(ProxyTemplate)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProxyTemplate main.cpp Object.h ObjectProxy.h Base.h)
