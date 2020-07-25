#pragma once
#include <string>
#include <GLFW\glfw3.h>
#include "Components.h"
#include "MouseCallBack.h"

using namespace std;


class Window {
public:
	GLFWwindow* Create(int Width, int Height,string title) {
		GLFWwindow* window;
		Components* comp = new Components();
		MouseCallBack mCallback;

		malloc(sizeof(comp));


		if (!glfwInit()) {
			return 0;
		}

		window = glfwCreateWindow(Width, Height, "Window", NULL,NULL);

		if (!window) {
			glfwTerminate();
			return 0;
		}

		glfwMakeContextCurrent(window);

		while (!glfwWindowShouldClose(window)) {
			glClear(GL_COLOR_BUFFER_BIT);
			comp->Component();
			mCallback.mousePos(window);

			glfwSwapBuffers(window);
			glfwPollEvents();


		}
		return window;

	}
	

private:



};