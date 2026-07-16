#pragma once
#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h>
#include <unordered_map>
#include <string>

class TextureManager{
    private:
        SDL_Renderer* renderer;
        std::unordered_map<std::string,SDL_Texture*> textures;
    public:
        TextureManager(SDL_Renderer* renderer);
        ~TextureManager();
        
};