cmake_minimum_required(VERSION 3.25)
project(Oraculo CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(oraculo src/main.cpp)
target_compile_options(oraculo PRIVATE -Wall -Wextra -Werror)
