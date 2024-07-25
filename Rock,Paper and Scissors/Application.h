#pragma once

#include "AudioHandler.h"

#include "Game.h"
#include "InputHandler.h"
#include "LibraryHandler.h"
#include "TextureHandler.h"
#include "Button.h"
#include "Window.h"




class Application
{

public:
    Application() {}
    ~Application() {}

    bool Create();
    void Destroy();
    void Run();
    void HandleEvents();
    void Update();
    void Render();
    void Quit() { running = false; }

    Window* GetWindow() { return window; }

    TextureHandler* GetTextureHandler() { return textureHandler; }

    

    AudioHandler* GetAudioHandler() { return audioHandler; }

    InputHandler* GetInputHandler() { return inputhandler; }

    TTF_Font* GetFont() { return font; }
    TTF_Font* GetNameFont() { return nameFont; }
    TTF_Font* GetCreditsFont() { return creditsFont; }



private:

	SDL_Texture* gameOver = nullptr;

	SDL_Texture* start = nullptr;

	LibraryHandler* libraryHandler = nullptr;

	Window* window = nullptr;

	TextureHandler* textureHandler = nullptr;

	AudioHandler* audioHandler = nullptr;

	Mix_Music* menuMusic = nullptr;

	Mix_Music* gameMusic = nullptr;

	Mix_Music* gameOverMusic = nullptr;

	InputHandler* inputhandler = nullptr;

	Game* game = nullptr;
    Button* button = nullptr;

	TTF_Font* font = nullptr;

	TTF_Font* nameFont = nullptr;

	TTF_Font* creditsFont = nullptr;

	bool running = true;

	bool gameOverMusicPlaying = false;
};

