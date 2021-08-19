#include "vlc_app.hpp"

namespace vlc {
	void VlcApp::run() {
		while (!vlcWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}