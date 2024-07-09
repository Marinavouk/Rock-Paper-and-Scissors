#include "Application.h"

bool Application::Create()
{

	libraryHandler = new LibraryHandler;
	if (!libraryHandler->Create())
		return false;

	window = new Window;
	if (!window->Create())
		return false;

	textureHandler = new TextureHandler;
	if (!textureHandler->Create(window->GetRenderer()))
		return false;

	game = new Game;
	if (!game->Create(this))
		return false;

	const float windowWidth = (float)window->GetWidth() * 0.5f;
	const float windowHeight = (float)window->GetHeight() * 0.5f;

	return true;
}

void Application::Destroy()
{
	game->Destroy();
	delete game;

	textureHandler->Destroy();
	delete textureHandler;

	window->Destroy();
	delete window;

	libraryHandler->Destroy();
	delete libraryHandler;
}

void Application::Run()
{
	while (running)
	{
		HandleEvents();
		Update();
		Render();
	}
}

void Application::HandleEvents()
{
	SDL_Event event = {};
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
		{
			running = false;

			break;
		}

		default:
			break;
		}
	}
}

void Application::Update()
{
	inputhandler->Update();
}

void Application::Render()
{
	window->BeginRender();
}
