#include "Movement.h"

Movement::Movement(SDL_Texture* texture, int screenHeight, int screenWidth, int x, int, int y, int h, int w)
{
	screenHeight = screenHeight;
	screenWidth = screenWidth;
	velocityX = 100.0f;
	velocityY = 100.0f;
	texture = texture;
	rect = { x, y, h, w };
}