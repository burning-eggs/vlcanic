#include "vlc_window.hpp"

namespace vlc {
	VlcWindow::VlcWindow(int w, int h, std::string name) : width{ w }, height{ h }, windowName{ name } {
		initWindow();
	}

	VlcWindow::~VlcWindow() {
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void VlcWindow::initWindow() {
		glfwInit();

		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
}