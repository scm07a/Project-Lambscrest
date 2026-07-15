#include <iostream>
#include <SDL2/SDL.h>
#include <stdexcept>
#include <Game.h>
#include "Player.h"
        //* To Be Used In Rendering Textures
int main(int argc, char* argv[]){
    if (SDL_Init(SDL_INIT_VIDEO)!=0){
        std::cout<<"Error Initializing SDL2:"
                <<SDL_GetError() <<std::endl;
        return 1;
    }
    //* Main Window
    SDL_Window* window = SDL_CreateWindow("Untitled Game Project",
                                            SDL_WINDOWPOS_CENTERED,
                                            SDL_WINDOWPOS_CENTERED,
                                            1280,720,
                                            SDL_WINDOW_SHOWN);
    if (!window){
        std::cout<<"Error Creating The Window:"<<SDL_GetError()<<std::endl;
        SDL_Quit();
        return 2;
    }
    //* Renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
    if(!renderer){
        std::cout<<"Error Creating The Renderer:"<<SDL_GetError()<<std::endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 3;
    }
    //* Main Loop Flag
    bool isRunning=true;
    //* Exit "X" button Handler
    SDL_Event exit_X;
    //* Store TimeStamp Of Last Frame
    Uint64 lastTick = SDL_GetPerformanceCounter();
    //* Player Initialization
    Player player;
    //*Main Game Loop
    while (isRunning){
        //* Get The Time In Secs Of How Many Ticks Happened
        Uint64 currentTick = SDL_GetPerformanceCounter();
        double deltaTime = static_cast<double>
                            (currentTick-lastTick)/
                            static_cast<double>
                            (SDL_GetPerformanceFrequency());
                            //* Return Time In Seconds
        lastTick=currentTick;
        //*Handles Exiting The Application
        while(SDL_PollEvent(&exit_X))
            if (exit_X.type == SDL_QUIT) 
                isRunning=false;
        const uint8_t* keyboardState = SDL_GetKeyboardState(nullptr);
        player.handleInput(keyboardState);
        player.update(deltaTime);
        SDL_SetRenderDrawColor(renderer,0,0,0,255);
        SDL_RenderClear(renderer);
        player.render(renderer);
        SDL_RenderPresent(renderer);
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}