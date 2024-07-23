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
	SDL_RenderCopyF(renderer, background, nullptr, nullptr);
	if (startButton)
	{
		startButton->render(renderer);
	}
}

void Game::HandleEvents(SDL_Event* handleEvent) 
{
	if (startButton->setEvent(handleEvent))
	{
		std::cout << "Start button clicked";
	}
}