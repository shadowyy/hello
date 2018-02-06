cmake_minimum_required(VERSION 3.9)
project(hello)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_TEMPLATES)
set(SOURCE_HEADERS TestJNI.h)
set(SOURCE_FILES TestJNI.cpp)

add_library(hello SHARED ${SOURCE_FILES} ${SOURCE_TEMPLATES} ${SOURCE_HEADERS})

target_link_libraries(hello)