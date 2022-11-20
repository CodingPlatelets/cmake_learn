cmake_minimum_required(VERSION 3.23.0)

project(BAS VERSION 1.0.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set(CMAKE_TOOLCHAIN_FILE "/home/platelets/vcpkg/scripts/buildsystems/vcpkg.cmake")

set(CMAKE_PREFIX_PATH "/home/platelets/vcpkg/installed/x64-linux/share")
configure_file(BASConfig.h.in BASConfig.h)

add_executable(${PROJECT_NAME} main.cpp)

find_package(fmt CONFIG REQUIRED)

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

target_link_libraries(${PROJECT_NAME} PRIVATE adder PUBLIC glfw PRIVATE fmt::fmt)