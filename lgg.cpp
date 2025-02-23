#define GLEW_DLL
#define GLFW_DLL
#include "GL/glew.h"
#include "GLFW/glfw3.h"
if (!glfwInit()) {
	fprintf(stderr, "ERROR:.\n");
	return 1;
}
{
	glfwWindowhint(GLFW_CONTEXT_VERSION_MAJOR 1);
	glfwWindowhint(GLFW_CONTEXT_VERSION_MINOR 0);
}
GLFWwindow

window = glfwCreateWindow(512, 512"mainwindow", Null, Null);

if (!window) {
	glfwterminate();
	return -1;
}
