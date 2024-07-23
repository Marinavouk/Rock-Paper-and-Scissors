#include "Button.h"
#include "TextureHandler.h"

Button::Button() : texture(nullptr), mCurrentSprite(PRESSED)
{
	buttonRec.h = BUTTON_HEIGHT;
	buttonRec.w = BUTTON_WIDTH;
	
}

void Button::setLocation(int xPos, int yPos)
{
    mPosition.x = xPos;
    mPosition.y = yPos;
    buttonRec.x = xPos;
    buttonRec.y = yPos;
}

void Button::render(SDL_Renderer* renderer)
{
    if (texture)
    {
        SDL_RenderCopy(renderer, texture, nullptr, &buttonRec);
    }
}

void Button::setTexture(SDL_Texture* texture)
{
    this->texture = texture;
}

bool Button::setEvent(SDL_Event* mouseEvent)
{
    bool inside = true;
    int x, y;
    SDL_GetMouseState(&x, &y);

    if (x < mPosition.x || x > mPosition.x + BUTTON_WIDTH || y < mPosition.y || y > mPosition.y + BUTTON_HEIGHT)
    {
        inside = false;
    }

    if (!inside)
    {
        mCurrentSprite = BUTTON_NORMAL;
    }
    else
    {
        switch (mouseEvent->type)
        {
        case PRESSED:
            // Add button click handling code here
            return true;
        default:
            break;
        }
    }
    return false;

}


