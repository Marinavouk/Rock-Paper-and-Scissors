#pragma once


#include <SDL.h>
#include <SDL_ttf.h>
#include <iostream>

class Window
{
public:

	Window() {}
	~Window() {}

	bool Create();
	void Destroy();
	void BeginRender();
	void EndRender();

private:
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;

	int width = 0;
	int height = 0;
};

