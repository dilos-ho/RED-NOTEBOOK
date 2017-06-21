#include <iostream>
#include <cstdlib>
#include <GLFW/glfw3.h>

/*using float types for accuracy*/
int main() {
    if (!glfwInit()) {
        exit(EXIT_FAILURE);
    }
    GLFWwindow* window = glfwCreateWindow(640, 480, "Screen", NULL, NULL);
    if (!window) {
        exit(EXIT_FAILURE);
    }
    int a;
    std::cin >> a;
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}

