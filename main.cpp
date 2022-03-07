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
    SDL_CreateWindowAndRenderer(WINDOW_WIDTH, WINDOW_WIDTH, 0, &window, &renderer);
    bool is_done = false;
    SDL_SetRenderDrawColor(renderer, 115, 115, 115, 255);
    SDL_RenderClear(renderer);

    Field f;
    f.init_figures();
    Cell **field = f.get_field();


    while (!is_done) {
        SDL_Event event;

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                field[i][j].render(renderer);
                auto figure = field[i][j].get_figure();
                if (figure != nullptr) figure->render(renderer);
            }
        }
        SDL_RenderPresent(renderer);

        if (field[0][0].get_figure() != nullptr)
            f.move_figure(renderer, field[0][0].get_figure(), &field[3][2]);

        SDL_SetRenderDrawColor(renderer, 50, 50, 255, 255);

//        SDL_Rect rect = {25, 25, 50, 50};
//        SDL_RenderFillRect(renderer, &rect);
//        SDL_Rect rect1 = {125, 25, 50, 50};
//        SDL_RenderFillRect(renderer, &rect1);


        SDL_SetRenderDrawColor(renderer, 184, 193, 255, 255);

//        SDL_Rect rect2 = {25, 125, 50, 50};
//        SDL_RenderFillRect(renderer, &rect2);
//        SDL_Rect rect3 = {125, 125, 50, 50};
//        SDL_RenderFillRect(renderer, &rect3);

        SDL_RenderPresent(renderer);
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT)
                is_done = true;
        }
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}