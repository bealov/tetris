
#include "input.h"

namespace input {
    void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods) {
        if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
            glfwSetWindowShouldClose(window, GLFW_TRUE);
        }
    }

    void initializeInputs(GLFWwindow* window) {
        glfwSetKeyCallback(window, keyCallback);
    }
}

