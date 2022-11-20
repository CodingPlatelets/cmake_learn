cmake_minimum_required(VERSION 3.25.0)

project(BAS VERSION 1.0.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

configure_file(BASConfig.h.in BASConfig.h)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(include)

add_subdirectory(external/glfw)

target_include_directories(${PROJECT_NAME} 
    PUBLIC 
        include
    PUBLIC
        external/glfw/include
    PUBLIC
        ${PROJECT_BINARY_DIR}
)

target_link_directories(${PROJECT_NAME} 
    PUBLIC 
        include
    PRIVATE
        external/glfw/src
)

target_link_libraries(${PROJECT_NAME} adder glfw)

