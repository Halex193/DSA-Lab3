cmake_minimum_required(VERSION 3.10)
project(Lab3)

set(CMAKE_CXX_STANDARD 14)
file(GLOB headerFiles "headers/*.h")
file(GLOB sourceFiles "sources/*.cpp")
file(GLOB testFiles "tests/*")

add_executable(Lab3
        main.cpp
        ${headerFiles}
        ${sourceFiles}
        )
add_executable(Lab3-Test
        ${testFiles}
        ${headerFiles}
        ${sourceFiles}
        )