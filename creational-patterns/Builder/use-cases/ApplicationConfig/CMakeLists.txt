cmake_minimum_required(VERSION 3.24)
project(ApplicationConfig)

set(CMAKE_CXX_STANDARD 17)

add_executable(ApplicationConfig main.cpp ApplicationConfig.h ApplicationConfigBuilder.h SimpleApplicationConfigBuildDirector.h ComplexApplicationBuildDirector.h)
