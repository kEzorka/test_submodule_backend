cmake_minimum_required(VERSION 3.10.0)
project(test_submodule_backend VERSION 0.1.0 LANGUAGES C CXX)

add_executable(test_submodule_backend 
        include/child.h
        source/child.cpp
        main.cpp
)

add_library(backend_core
    source/child.cpp
    include/child.h
)
target_include_directories(backend_core PUBLIC include)