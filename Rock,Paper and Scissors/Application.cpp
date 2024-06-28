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
}

void Application::Destroy()
{
}

void Application::Run()
{
}

void Application::HandleEvents()
{
}

void Application::Update()
{
}

void Application::Render()
{
}
