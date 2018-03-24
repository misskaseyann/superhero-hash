cmake_minimum_required(VERSION 3.8)
project(hashing)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp include/my_hash.h include/Superhero.h src/Superhero.cpp)
add_executable(hashing ${SOURCE_FILES})