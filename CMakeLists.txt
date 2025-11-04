cmake_minimum_required(VERSION 4.0)
project(Contact_Book)

set(CMAKE_CXX_STANDARD 20)

add_executable(Contact_Book main.cpp
        Contact.cpp
        Contact.h
        menu.cpp
        Menu.h)
