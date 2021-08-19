#ifndef _VLC_APP_H
#define _VLC_APP_H

#include "vlc_window.hpp"

namespace vlc {
	class VlcApp {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		VlcWindow vlcWindow{ WIDTH, HEIGHT, "vlcanic application" };
	};
}

#endif