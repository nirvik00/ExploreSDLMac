#include <SDL2/SDL.h>

#include <iostream>

SDL_Window* gWindow;
SDL_Renderer* gRenderer;
SDL_Event evt;
bool isRunning =true;

int main(){
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        gWindow=SDL_CreateWindow("abcd",100,100,600,480,0);
        gRenderer=SDL_CreateRenderer(gWindow, -1, 0);
        while(isRunning){
            SDL_PollEvent(&evt);
            switch(evt.type){
                case SDL_QUIT:
                    isRunning = false;
                    std::cout << "sdl quit\n";
                    break;
                default:
                    break;
            }
             SDL_RenderClear(gRenderer);
            SDL_SetRenderDrawColor(gRenderer, 255,0,255,255);
            SDL_RenderPresent(gRenderer);
        }
    }
    SDL_DestroyRenderer(gRenderer);
    SDL_DestroyWindow(gWindow);

    std::cout << "SDL quit" << std::endl;
    return 0;
}