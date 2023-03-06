cmake_minimum_required(VERSION 3.24)
project(ObserverTemplate)

set(CMAKE_CXX_STANDARD 17)

add_executable(ObserverTemplate main.cpp Observer.cpp Observer.h Subject.cpp Subject.h)
