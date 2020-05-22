cmake_minimum_required(VERSION 3.10)
project(callback_classes)

set(CMAKE_CXX_STANDARD 14)

add_executable(callback
        main.cpp
        callback.h
        printer.cpp printer.h
        list.cpp list.h
        linkedlist.h linkedlist.cpp
        object.h object.cpp
        person.h person.cpp)