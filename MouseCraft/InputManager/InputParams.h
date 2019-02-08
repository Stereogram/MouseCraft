#pragma once

struct Vec2d //temp until sdl
{
public:
	float x;
	float y;
};


struct InputParams
{
public:
	//joystick/mouse movement/change
	Vec2d Joystick;
	
	//which keycode
	char button;
};