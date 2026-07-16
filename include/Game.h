#pragma once
#include <SDL2/SDL.h>
#include "Player.h"

class Game{
    private:
        SDL_Window* window;
        SDL_Renderer* renderer;
        bool isRunning;
        Player player;
    public:
        Game();
        ~Game();
        bool run();
};