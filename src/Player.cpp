#include "Player.h"
#include <SDL2/SDL.h>

Player::Player(): x(100.f),y(100.f),
                currentRow(0),currentColumn(0),
                animtimer(0.0)
{
    dstrect.w=200;
    dstrect.h=150;
    dstrect.x=static_cast<int>(x);
    dstrect.y=static_cast<int>(y);
    srcrect.w=48;
    srcrect.h=48;
    srcrect.x= currentColumn * 48;
    srcrect.y= currentRow * 48;
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
    dstrect.x=static_cast<int>(x);
    dstrect.y=static_cast<int>(y);
}

void Player::render(SDL_Renderer* renderer,
                    SDL_Texture* texture){
    SDL_RenderCopy(renderer,texture,&srcrect,&dstrect);
}

void Player::updateanim(double dt){
    animtimer+=dt;
    if(animtimer>0.2){
        currentColumn=(currentColumn+1)%3;
        srcrect.x=currentColumn*48;
        srcrect.y=currentRow*48;
        animtimer-=0.2;
    }
}