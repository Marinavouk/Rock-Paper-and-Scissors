#pragma once


#include <SDL.h>

// Forward-declaring application to avoid multiple inclusion issue
class Application;

class Game
{
public:

	Game() {}
	~Game() {}

	bool Create(Application* mainApplication);
	void Destroy();
	void Update(const float deltaTime);
	void Render(SDL_Renderer* renderer);

private:

	Application* application = nullptr;
	SDL_Texture* background = nullptr;

	SDL_Texture* startButton = nullptr;
};