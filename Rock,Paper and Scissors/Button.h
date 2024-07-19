#pragma once


#include <SDL.h>


class Button
{

	const int BUTTON_WIDTH = 300;
	const int BUTTON_HEIGHT = 200;
	//const int TOTAL_BUTTONS = 1;

	enum ButtonSprite
	{
		BUTTON_SPRITE_MOUSE_OUT = 0,
		/*BUTTON_SPRITE_MOUSE_OVER_MOTION = 1,
		BUTTON_SPRITE_MOUSE_DOWN = 2,
		BUTTON_SPRITE_MOUSE_UP = 3,*/
		BUTTON_SPRITE_TOTAL = 1
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
	SDL_Texture* texture;

};