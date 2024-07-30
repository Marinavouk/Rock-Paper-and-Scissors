#include "Game.h"
#include "Application.h"
#include "Button.h"
#include "SDL_image.h"


bool Game::Create(Application* mainApplication)
{
	application = mainApplication;
	background = application->GetTextureHandler()->CreateTexture("Assets/Textures/backgroundMenu.png");
	if (!background)
		return false;

	
	startButton = new Button();
	if (!CreateButton(startButton))
	{
		std::cout << "Start button failed";
		return false;
	}
		

	Window* window = application->GetWindow();

	return true;
}

bool Game::CreateButton(Button* startGame)
{
	startButton = startGame;

	startButtonTexture = application->GetTextureHandler()->CreateTexture("Assets/Textures/start-button.png");
	if (!startButtonTexture)
		return false;

	startButton->setTexture(startButtonTexture);
	startButton->setLocation(480, 500);

	
	return true;

}

void Game::Destroy()
{
	application->GetTextureHandler()->DestroyTexture(background);
	application->GetTextureHandler()->DestroyTexture(startButtonTexture);
	application = nullptr;
	delete startButton;
}

void Game::Update(const float deltaTime)
{

}

void Game::Render(SDL_Renderer* renderer)
{
	if (gameState == STATE_MENU)
	{
		SDL_RenderCopyF(renderer, background, nullptr, nullptr);
		if (startButton)
		{
			startButton->render(renderer);
			
		}
	}
	if (gameState == STATE_PLAYING)
	{
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_RenderClear(renderer);
		DrawFrame(renderer);

		// add return button
	}
}

void Game::HandleEvents(SDL_Event* handleEvent) 
{
	if (gameState == STATE_MENU) 
	{
		std::cout << "State menu";
		if (startButton)
		{
			std::cout << "Start button clicked";
			gameState = STATE_PLAYING;
		}
	}
	
}

void Game::DrawFrame(SDL_Renderer* renderer)
{
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_Rect frameRect = { 10, 10, application->GetWindow()->GetWidth() - 20, application->GetWindow()->GetHeight() - 20 };
	SDL_RenderDrawRect(renderer, &frameRect);
}