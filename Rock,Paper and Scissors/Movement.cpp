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



void Movement::Update(float deltaTime)
{
    rect.x += static_cast<int>(velocityX * deltaTime);
    rect.y += static_cast<int>(velocityY * deltaTime);

    if (rect.x <= 0 || rect.x + rect.w >= screenWidth)
    {
        velocityX = -velocityX;
    }
    if (rect.y <= 0 || rect.y + rect.h >= screenHeight)
    {
        velocityY = -velocityY;
    }
}

void Movement::Render(SDL_Renderer* renderer)
{
    SDL_RenderCopy(renderer, texture, nullptr, &rect);
}