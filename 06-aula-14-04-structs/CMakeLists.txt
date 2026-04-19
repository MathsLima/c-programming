cmake_minimum_required(VERSION 3.14)
project(06-aula-14-04-structs)

set(CMAKE_C_STANDARD 17)

# Ajusta source e include
include_directories(include)
add_executable(${PROJECT_NAME} src/main.c)
