#include <iostream>
#include <GLFW/glfw3.h>
#include "Window.h"
#include "Button.h"

using namespace std;
int main() {
	
	Window win;
	win.Create(600, 400, "Sa");
	cout << "App opening";
	return 0;
}