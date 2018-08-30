
#include <GLFW/glfw3.h>
#include <iostream>

GLFWwindow* window;

static void errorCallback(int error, const char* description) {
    std::cerr << "Error: " << description << std::endl;
}

void init() {
    glfwSetErrorCallback(errorCallback);

    if (!glfwInit()) {
        exit(EXIT_FAILURE);
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    window = glfwCreateWindow(480, 640, "Tetris", NULL, NULL);

    if (!window) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);
}

int main(void)
{
    init();

    while (!glfwWindowShouldClose(window)) {

    }

    glfwDestroyWindow(window);

    return 0;
}

