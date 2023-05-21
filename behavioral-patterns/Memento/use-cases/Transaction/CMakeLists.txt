cmake_minimum_required(VERSION 3.24)
project(Transaction)

set(CMAKE_CXX_STANDARD 17)

add_executable(Transaction main.cpp TransactionMemento.h Transaction.h TransactionManager.h)
