cmake_minimum_required(VERSION 3.24)
project(LoadBalancer)

set(CMAKE_CXX_STANDARD 17)

add_executable(LoadBalancer main.cpp LoadBalanceStrategy.h RandomLoadBalanceStrategy.h RoundRobinLoadBalanceStrategy.h LoadBalancer.h)
