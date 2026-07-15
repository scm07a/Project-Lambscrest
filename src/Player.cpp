#include "Player.h"

Player::Player(): x(100.f),y(100.f){
    rect.w=200;
    rect.h=150;
    rect.x=static_cast<int>(x);
    rect.y=static_cast<int>(y);
}

void Player::handleInput(const Uint8* keyboardState){
    moveX=0.f;
    moveY=0.f;
    if(keyboardState[SDL_SCANCODE_W]) moveY=-1.f;
    if(keyboardState[SDL_SCANCODE_A]) moveX=-1.f;
    if(keyboardState[SDL_SCANCODE_S]) moveY=1.f;
    if(keyboardState[SDL_SCANCODE_D]) moveX=1.f;
}

void Player::update(double dt){
    x+=moveX*speed*dt;
    y+=moveY*speed*dt;
    rect.x=static_cast<int>(x);
    rect.y=static_cast<int>(y);
}

void Player::render(SDL_Renderer* renderer){
    SDL_SetRenderDrawColor(renderer,255,255,255,255);
    SDL_RenderFillRect(renderer,&rect);
}