#pragma once
#include "Game.h"
#include <SDL.h>


class Button
{
	const int BUTTON_WIDTH = 300;
	const int BUTTON_HEIGHT = 100;

	enum ButtonSprite
	{
		BUTTON_SPRITE_MOUSE_OUT = 0
	};

public:
	Button();
	void render(SDL_Renderer* renderer);
	void setLocation(int xPos, int yPos);
	void setTexture(SDL_Texture* texture);
	bool setEvent(SDL_Event* mouseEvent);

private:
	SDL_Point mPosition;
	ButtonSprite mCurrentSprite;
	SDL_Rect buttonRec;
	SDL_Texture* texture = nullptr;
};