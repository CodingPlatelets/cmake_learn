/*
 * @LastEditors: platelets wenkanedward@gmail.com
 * @Date: 2022-11-20 01:06:53
 * @LastEditTime: 2022-11-20 11:53:46
 * Copyright (c) 2022 by platelets email: wenkanedward@gmail.com, All Rights Reserved.
 */
#include "adder.h"

#include <GLFW/glfw3.h>
#include <iostream>

#include "adder.h"
int main(){
    std::cout<<"Hello cmake"<< std::endl; 
    std::cout<<add(123.4,245.2) << "\n";

    GLFWwindow* window;

    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );

    // Main loop
    while( !glfwWindowShouldClose(window) )
    {

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();
    return 0;
}