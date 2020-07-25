#pragma once
#include <GLFW\glfw3.h>
#include <string>
using namespace std;


class Button {
public:
	void createButton(int pos,int Width,int Height,string Text) {
		glBegin(GL_TRIANGLES);
			glVertex2f(-.5f, -.5f);
			glVertex2f(.0f, .5f);
			glVertex2f(.5f, -.5f);


		glEnd();



	}
private:


};