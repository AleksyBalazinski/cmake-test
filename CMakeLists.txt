cmake_minimum_required(VERSION 3.10)

project(TestCMake VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

message(GLFW_HOME ="$ENV{GLFW_HOME}")
find_package(glfw3 3.3 REQUIRED HINTS $ENV{GLFW_HOME})

add_executable(TestCMake main.cpp "${PROJECT_SOURCE_DIR}/glad/src/glad.c")

list(APPEND LOADER_INCLUDES "${PROJECT_SOURCE_DIR}/glad/include")
target_include_directories(TestCMake PUBLIC ${LOADER_INCLUDES})

target_link_libraries(TestCMake glfw)