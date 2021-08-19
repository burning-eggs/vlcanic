#ifndef _VLC_WINDOW_H
#define _VLC_WINDOW_H

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace vlc {
	class VlcWindow {
	public:
		VlcWindow(int w, int h, std::string name);
		~VlcWindow();

	private:
		void initWindow();

		const int width;
		const int height;

		std::string windowName;

		GLFWwindow* window;
	};
}

#endif // _VLC_WINDOW_H