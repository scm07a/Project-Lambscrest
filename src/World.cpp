#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "World.h"

World::World(){
    wall.x=200;
    wall.y=200;
    wall.w=200;
    wall.h=150;
}

void World::render(SDL_Renderer* renderer,
                    SDL_Texture* texture)
{
    SDL_RenderCopy(renderer,texture,nullptr,nullptr);
}