#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    SDL_InitSubSystem(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow("GRADES", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 640, 0);
    // SDL_SetWindowFullscreen(window, SDL_WINDOW_FULLSCREEN_DESKTOP);
    SDL_Surface *surface = SDL_GetWindowSurface(window);

    SDL_Delay(10000);
    
}

