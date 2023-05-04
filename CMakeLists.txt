cmake_minimum_required(VERSION 3.10)
project(TestCMake VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(deps)

add_executable(TestCMake src/main.cpp)

target_include_directories(TestCMake PUBLIC include)

target_link_libraries(TestCMake PRIVATE glfw)
target_link_libraries(TestCMake PRIVATE glad)
target_link_libraries(TestCMake PRIVATE stb_image)
target_link_libraries(TestCMake PRIVATE glm::glm)