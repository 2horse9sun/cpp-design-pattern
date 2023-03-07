cmake_minimum_required(VERSION 3.24)
project(AdapterTemplate)

set(CMAKE_CXX_STANDARD 17)

add_executable(AdapterTemplate main.cpp NewAPI.h LegacyAPI.h Adapter.h)
