#pragma once
#include"SDL.h"
class Movement
{
public:
	Movement(SDL_Texture* texture, SDL_Rect rect, float velocity, float velocityY, int screenWidth, int screenHeight);
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

