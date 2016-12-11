cmake_minimum_required(VERSION 3.6)
project(c-lang-demo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES hello-world/void-helloworld.c)
add_executable(c-lang-demo ${SOURCE_FILES})