cmake_minimum_required(VERSION 3.25.0)

project(BAS)

add_executable(${PROJECT_NAME} mian.cpp )

add_subdirectory(include)
add_subdirectory(external/glfw)

target_include_directories(${PROJECT_NAME} 
    PUBLIC 
        include
    PUBLIC
        external/glfw/include
)

target_link_directories(${PROJECT_NAME} 
    PUBLIC 
        include
    PRIVATE
        external/glfw/src
)

target_link_libraries(${PROJECT_NAME} adder glfw)

