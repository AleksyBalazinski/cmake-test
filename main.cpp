#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main(void)
{
    GLFWwindow *window;
    /* Initialize the library */
    std::cerr << "hello\n";
    if (!glfwInit())
    {
        std::cerr << "glfwInit() failed.\n";
        return -1;
    }
    std::cerr << "there\n";
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        std::cerr << "general\n";
        glfwTerminate();
        std::cerr << "glfwCreateWindow() failed.\n";
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}