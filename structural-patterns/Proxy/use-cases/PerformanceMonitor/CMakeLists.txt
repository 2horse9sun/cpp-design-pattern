cmake_minimum_required(VERSION 3.24)
project(PerformanceMonitor)

set(CMAKE_CXX_STANDARD 17)

add_executable(CachingProxy main.cpp PerformanceMonitor.h WindowsPerformanceMonitor.cpp WindowsPerformanceMonitor.h WindowsPerformanceMonitorProxy.cpp WindowsPerformanceMonitorProxy.h)
