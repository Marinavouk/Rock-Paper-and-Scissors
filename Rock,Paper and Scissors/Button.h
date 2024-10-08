#pragma once
#include "Game.h"
#include <SDL.h>


class Button
{
	const int BUTTON_WIDTH = 300;
	const int BUTTON_HEIGHT = 100;

	enum ButtonState
	{
		BUTTON_NEUTRAL = 0,
		HOVER = 1,
		PRESSED = 2
	};

public:
	Button();
	~Button() {};
	void render(SDL_Renderer* renderer);
	void setLocation(int xPos, int yPos);
	void setTexture(SDL_Texture* texture);
	bool setEvent(SDL_Event* mouseEvent);

private:
	SDL_Point pointPosition;
	ButtonState mCurrentSprite;
	SDL_Rect buttonRect;
	SDL_Texture* texture = nullptr;
	Game* game;
};