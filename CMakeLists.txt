cmake_minimum_required(VERSION 3.25.0)

project(BAS)

add_executable(${PROJECT_NAME} mian.cpp )

add_subdirectory(include)

target_include_directories(${PROJECT_NAME} PUBLIC include)
target_link_directories(${PROJECT_NAME} PUBLIC include)
target_link_libraries(${PROJECT_NAME} adder)

