#include "Button.h"

Button::Button()
{
	mPosition.x = 0;
	mPosition.y = 0;

	mCurrentSprite = BUTTON_SPRITE_MOUSE_OUT;
}

void Button::setLocation (int xPos, int yPos)
{
	mPosition.x = xPos;
	mPosition.y = yPos;
}

void Button::setEvent(SDL_Event* mouseEvent)
{
	if (mouseEvent->type == BUTTON_SPRITE_MOUSE_OVER_MOTION || mouseEvent->type == BUTTON_SPRITE_MOUSE_DOWN || mouseEvent->type == BUTTON_SPRITE_MOUSE_UP)
	{
		int mpX, mpY;
		SDL_GetMouseState(&mpX, &mpY);
	}
}
