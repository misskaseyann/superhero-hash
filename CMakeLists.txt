cmake_minimum_required(VERSION 3.8)
project(hashing)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp include/My_Hash.h include/Superhero.h src/Superhero.cpp include/HashNode.h)
add_executable(hashing ${SOURCE_FILES})