#pragma once
#include"SDL.h"
class Movement
{
public:
	Movement(SDL_Texture* texture, int screenHeight, int screenWidth, int x, int, int y, int h, int w);
	void Render(SDL_Renderer* renderer);
	void Update(float deltaTime);

private:
	SDL_Texture* texture;
	SDL_Rect rect;
	float velocityX;
	float velocityY;
	int screenWidth;
	int screenHeight;

};

