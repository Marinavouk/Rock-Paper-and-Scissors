#include "Game.h"
#include "Application.h"

bool Game::Create(Application* mainApplication)
{
	application = mainApplication;
	background = application->GetTextureHandler()->CreateTexture("Assets/Textures/backgroundMenu.png");
	if (!background)
		return false;

	Window* window = application->GetWindow();

	return true;
}

void Game::Destroy()
{
	application->GetTextureHandler()->DestroyTexture(background);
	application = nullptr;
}

void Game::Update(const float deltaTime)
{
	
}

void Game::Render(SDL_Renderer* renderer)
{
	SDL_RenderCopyF(renderer, background, nullptr, nullptr);
}
