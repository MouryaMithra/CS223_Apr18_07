cmake_minimum_required(VERSION 3.1)
project(vm)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(vm 
	bus.cpp
        bus.h
        car.cpp
        car.h
        expense.cpp
        expense.h
        heavy.cpp
        heavy.h
        main.cpp
        JCB.cpp
        JCB.h
        van.cpp
        van.h)

