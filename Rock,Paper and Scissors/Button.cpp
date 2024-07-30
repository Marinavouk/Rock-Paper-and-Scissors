#include "Button.h"
#include "TextureHandler.h"
#include "Game.h"

Button::Button() : texture(nullptr), mCurrentSprite(BUTTON_NEUTRAL)
{
    pointPosition.x = 0;
    pointPosition.y = 0;
    buttonRect.x = 0;
    buttonRect.y = 0;
	buttonRect.h = BUTTON_HEIGHT;
	buttonRect.w = BUTTON_WIDTH;
	
}

void Button::setLocation(int xPos, int yPos)
{
    pointPosition.x = xPos;
    pointPosition.y = yPos;
    buttonRect.x = xPos;
    buttonRect.y = yPos;
}

void Button::render(SDL_Renderer* renderer)
{
    if (texture)
    {
        SDL_RenderCopy(renderer, texture, nullptr, &buttonRect);
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
    setLocation(x, y);
    
    if (mouseEvent->type == SDL_MOUSEBUTTONDOWN || mouseEvent->type == SDL_MOUSEBUTTONUP)
    {
        if (x < pointPosition.x)
        {
            mCurrentSprite = BUTTON_NEUTRAL;
            inside = false;

        }
        else if (x > pointPosition.x + buttonRect.w)
        {
            mCurrentSprite = BUTTON_NEUTRAL;
            inside = false;

        }
        else if (y < pointPosition.y)
        {
            mCurrentSprite = BUTTON_NEUTRAL;
            inside = false;

        }
        else if (y > pointPosition.y + buttonRect.h)
        {
            mCurrentSprite = BUTTON_NEUTRAL;
            inside = false;

        }

        if (!inside)
        {
            mCurrentSprite = PRESSED;
        }
        else
        {
            switch (mouseEvent->type)
            {
            case PRESSED:
                game->HandleEvents(mouseEvent);
                // Add button click handling code here
                return true;
            case HOVER:
                return true;

            default:
                break;
            }
        }
    }
    

    
    return false;
    


}



