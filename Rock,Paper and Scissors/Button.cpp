#include "Button.h"
#include "TextureHandler.h"
#include "Game.h"

Button::Button() : texture(nullptr), mCurrentSprite(BUTTON_NEUTRAL)
{
    mPosition.x = 0;
    mPosition.y = 0;
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
    
    if (mouseEvent->type == SDL_MOUSEBUTTONDOWN || mouseEvent->type == SDL_MOUSEBUTTONUP)
    {
        if (x < mPosition.x)
        {
            mCurrentSprite = BUTTON_NEUTRAL;
            inside = false;

        }
        else if (x > mPosition.x + buttonRec.w)
        {
            mCurrentSprite = BUTTON_NEUTRAL;
            inside = false;

        }
        else if (y < mPosition.y)
        {
            mCurrentSprite = BUTTON_NEUTRAL;
            inside = false;

        }
        else if (y > mPosition.y + buttonRec.h)
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



