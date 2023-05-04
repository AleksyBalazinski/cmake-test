cmake_minimum_required(VERSION 3.10)
project(TestCMake VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(deps)

add_executable(TestCMake src/main.cpp)

target_include_directories(TestCMake PUBLIC include)

target_link_libraries(TestCMake PRIVATE glfw)
target_link_libraries(TestCMake PRIVATE glad)
target_link_libraries(TestCMake PRIVATE stb_image)
# https://github.com/g-truc/glm/blob/master/manual.md#-15-finding-glm-with-cmake
target_include_directories(TestCMake PRIVATE deps/glm)

# WARNING: this doesn't update target after resources or shaders change!!!
file(COPY resources DESTINATION ${CMAKE_BINARY_DIR})
file(COPY shaders DESTINATION ${CMAKE_BINARY_DIR})