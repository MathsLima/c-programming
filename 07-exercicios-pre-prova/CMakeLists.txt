cmake_minimum_required(VERSION 3.14)
project(07-exercicios-pre-prova)

set(CMAKE_C_STANDARD 17)

# Ajusta source e include
include_directories(include)
add_executable(${PROJECT_NAME} src/main.c)
