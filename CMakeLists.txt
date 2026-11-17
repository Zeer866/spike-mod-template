cmake_minimum_required(VERSION 3.22.1)

# Cambia el nombre de tu mod aqui
set(MOD_NAME "MiMod")
project(${MOD_NAME})

add_library(${MOD_NAME} SHARED src/mod.cpp)
target_include_directories(${MOD_NAME} PRIVATE include)

find_library(log-lib log)
target_link_libraries(${MOD_NAME} ${log-lib})
