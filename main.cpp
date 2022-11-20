/*
 * @LastEditors: platelets wenkanedward@gmail.com
 * @Date: 2022-11-20 01:06:53
 * @LastEditTime: 2022-11-20 16:05:09
 * Copyright (c) 2022 by platelets email: wenkanedward@gmail.com, All Rights Reserved.
 */
#include <adder.h>
#include <fmt/format.h>
#include <GLFW/glfw3.h>
#include <BASConfig.h>
#include <cstdio>
#include <iostream>

int main([[maybe_unused]] int argc, char *argv[]) {
    std::cout << "Hello cmake" << std::endl;
    std::cout << add(123.4, 245.2) << "\n";
    int number = 1;

    fmt::print(stdout, "Your code is {} \n", number);
    std::cout << argv[0] << " Version " << BAS_VERSION_MAJOR << "." << BAS_VERSION_MINOR << '\n';

    GLFWwindow *window;

    if ( !glfwInit()) {
        fprintf(stderr, "Failed to initialize GLFW\n");
        exit(EXIT_FAILURE);
    }

    window = glfwCreateWindow(300, 300, "Gears", nullptr, nullptr);

    // Main loop
    while ( !glfwWindowShouldClose(window)) {

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();
    return 0;
}