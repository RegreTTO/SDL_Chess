#include <iostream>

#include "SDL2/SDL.h"
#include "Scripts/Field/Field.h"
#include "Scripts/Figure/Figures.h"

using namespace std;

#define WINDOW_WIDTH 850

int main(int argc, char *args[]) {
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_CreateWindowAndRenderer(WINDOW_WIDTH+250, WINDOW_WIDTH, 0, &window, &renderer);
    bool is_done = false;
    SDL_SetRenderDrawColor(renderer, 213, 43, 30, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect a = {0, 0, 1100, 283};
    SDL_RenderFillRect(renderer, &a);

    SDL_SetRenderDrawColor(renderer, 0, 57, 166, 255);
    SDL_Rect a1 = {0, 283, 1100, 283};
    SDL_RenderFillRect(renderer, &a1);

    Field f;
    f.init_figures();
    Cell **field = f.get_field();
    Field::init_bar_first(renderer);
    Field::init_bar_second(renderer);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            field[i][j].render(renderer);
            auto figure = field[i][j].get_figure();
            if (figure != nullptr) figure->render(renderer);
        }
    }

    while (!is_done) {
        SDL_Event event;

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT)
                is_done = true;
            if (event.button.type == SDL_MOUSEBUTTONUP){
                SDL_Log("(%d, %d)", event.button.x, event.button.y);
                f.mouse_click_handler(renderer, event.button.x, event.button.y);
            }
        }
        SDL_RenderPresent(renderer);
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}