#pragma once
#include "../gl/glad.h"
#include <SDL2/SDL.h>
#include <string>

class Window {
public:
	Window(std::string title, int width, int height);
	SDL_Window* getSDLWindow();
	SDL_GLContext getContext();
private:
	SDL_Window* _sdlWindow;
	SDL_GLContext _context;
};