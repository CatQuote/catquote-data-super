cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(catquote_data_super)

option(ENABLE_JSON "Enable Json Support" ON)

if (ENABLE_JSON)
    add_definitions(-DCATQUOTE_COMPILE_FLAGS_ENABLE_JSON)
endif()

add_subdirectory(catquote-data)
add_subdirectory(catquote-data-examples)
