#pragma once


#include <SDL.h>

// Forward-declaring application to avoid multiple inclusion issue
class Application;

class Button;

class Game
{
public:

	Game() {}
	~Game() {}

	bool Create(Application* mainApplication);
	bool CreateButton(Button* startGame);
	void Destroy();
	void Update(const float deltaTime);
	void Render(SDL_Renderer* renderer);
	void HandleEvents(SDL_Event* handleEvent);

private:

	Application* application = nullptr;
	SDL_Texture* background = nullptr;
	Button* startButton = nullptr;
	SDL_Texture* startButtonTexture = nullptr;
};