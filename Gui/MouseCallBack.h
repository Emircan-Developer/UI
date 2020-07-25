#pragma once
#include <GLFW\glfw3.h>
#include <iostream>
class MouseCallBack {
public:
	double mouseX , mouseY ;

	float mousePos(GLFWwindow* win) {
		glfwSetCursorPosCallback(win ,cursorPosCallback);
		glfwGetCursorPos(win, &mouseX, &mouseY);
		std::cout << std::to_string(mouseX)+ "  " + std::to_string(mouseY) << endl;
		return mouseX, mouseY;
	}
private:
	static void cursorPosCallback(GLFWwindow* win,double xPos,double yPos) {
		
	}
};