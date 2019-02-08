#pragma once

#include <SDL2/SDL.h>
#include <unordered_map>
#include <functional>
#include <stdio.h>
#include "Component.h"

class DebugInputComponent : public Component
{
public:

	DebugInputComponent()
	{
		_actions[SDL_EventType::SDL_KEYDOWN] = [this](SDL_Event e)
		{
			switch (e.key.keysym.sym)
			{
			case SDLK_w:
				
				break;
			case SDLK_s:
				
				break;
		
			}
		};

		_actions[SDL_EventType::SDL_KEYUP] = [this](SDL_Event e)
		{
			switch (e.key.keysym.sym) {
			case SDLK_w:
				
				break;
			case SDLK_s:
				
				break;
			}
		};

		_actions[SDL_EventType::SDL_MOUSEMOTION] = [](SDL_Event e)
		{

		};

	}
	void update(float dt)
	{
		//Event handler
		SDL_Event e;
		//Handle events on queue
		while (SDL_PollEvent(&e) != 0)
		{
			//User requests quit
			auto it = _actions.find(e.type);
			if (it != _actions.end())
			{
				it->second(e);
				return;
			}
			if (e.type == SDL_QUIT)
			{
				SDL_Quit();
				return;
			}
		}
	}

private:
	std::unordered_map<Uint32, std::function<void(SDL_Event e)>> _actions;
};