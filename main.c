#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include <stdlib.h>



int main() {
    SDL_InitSubSystem(SDL_INIT_VIDEO);
    TTF_Init();
    TTF_Font *font = TTF_OpenFont("font/Roboto-VariableFont_wdth,wght.ttf", 24);
    SDL_Window *window = SDL_CreateWindow("GRADES", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 640, 0);
    if (!window) return 1;
    
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) return 1;

    SDL_Color white = {255, 255, 255, 255};
    SDL_Surface *tempSurface = TTF_RenderText_Blended(font, "Semester 1", white);
    SDL_Texture *text = SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);

    SDL_Rect rect = {0, 0, 600, 600};

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect);
    SDL_RenderCopy(renderer, text, NULL, &rect);
    SDL_RenderPresent(renderer);

    
    SDL_Delay(3000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;    
}

