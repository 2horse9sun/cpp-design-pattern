cmake_minimum_required(VERSION 3.24)
project(FactoryTemplate)

set(CMAKE_CXX_STANDARD 17)

add_executable(FactoryTemplate main.cpp AbstractItem.h Item.h AbstractFactory.h ConcreteFactory.h)
