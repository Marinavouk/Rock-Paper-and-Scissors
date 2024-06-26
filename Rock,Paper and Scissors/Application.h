#pragma once

#include "Window.h"
#include "Game.h"
#include <SDL_mixer.h>
#include <SDL_ttf.h>



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

private:
    Window* window;
    Game* game;
    bool running;
};

