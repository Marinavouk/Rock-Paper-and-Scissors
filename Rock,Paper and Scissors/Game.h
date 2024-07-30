#pragma once
#include <SDL.h>

// Forward-declaring application to avoid multiple inclusion issue
class Application;

class Button;

enum GameState { STATE_MENU, STATE_PLAYING };

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
	void DrawFrame(SDL_Renderer* renderer);

private:

	Application* application = nullptr;
	SDL_Texture* background = nullptr;
	Button* startButton = nullptr;
	SDL_Texture* startButtonTexture = nullptr;
	GameState gameState = STATE_MENU;
};