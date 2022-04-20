#include <glad/glad.h>
#include <GLFW/glfw3.h>
//#include <stb_image.h>

//#include <learnopengl/shader_s.h>

#include <iostream>

int main()
{
	if (!glfwInit())
		std::cout << "ERROR: Initialization failed" << std::endl;

	// Create Window /////////////////////////////////////////
	GLFWwindow* window = glfwCreateWindow(800, 600, "game window", NULL, NULL);

	if (!window) {
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return -1;
	}

	// Shader //////////////////////////////////////////////

	while (true)
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}