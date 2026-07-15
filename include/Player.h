#pragma once
#include <SDL2/SDL.h>
class Player
{
private:
    float moveX = 0.f;
    float moveY = 0.f;
    float x;
    float y;
    float speed = 400.f;
    int health = 100;
    bool isAlive = true;
    SDL_Rect rect;
public:
    Player();
    void handleInput(const Uint8* keyboardState);
    void update(double dt);
    void render(SDL_Renderer* renderer,
                SDL_Texture* texture);
};
