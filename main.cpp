#include <iostream>

//#include "SDL2/SDL.h"
#include "Scripts/Field/Field.h"
#include "Scripts/Figure/Figures.h"

using namespace std;

#define WINDOW_WIDTH 800

int main(int argc, char *args[]) {
//	SDL_Window *window;
//	SDL_Renderer *renderer;
//	SDL_Init(SDL_INIT_EVERYTHING);
//	SDL_CreateWindowAndRenderer(WINDOW_WIDTH, WINDOW_WIDTH, 0, &window, &renderer);
//	bool is_done = false;
//    SDL_SetRenderDrawColor(renderer, 115,115,115, 255);
//    SDL_RenderClear(renderer);
//	while (!is_done) {
//		SDL_Event event;
//
//		for (int y = 0; y < 800; y += 100) {
//            for (int x = 0; x < 800; x += 100) {
//                if ((x+y)%200 != 0)
//                    SDL_SetRenderDrawColor(renderer, 156, 156, 252, 255);
//                else
//                    SDL_SetRenderDrawColor(renderer, 235, 235, 255, 255);
//                SDL_Rect rect = {x, y, 100, 100};
//                SDL_RenderFillRect(renderer, &rect);
//            }
//		}
//
//        SDL_SetRenderDrawColor(renderer, 50, 50, 255, 255);
//
//
//
//        SDL_Rect rect = {25, 25, 50, 50};
//        SDL_RenderFillRect(renderer, &rect);
//        SDL_Rect rect1 = {125, 25, 50, 50};
//        SDL_RenderFillRect(renderer, &rect1);
//
//        SDL_SetRenderDrawColor(renderer, 184, 193, 255, 255);
//
//        SDL_Rect rect2 = {25, 125, 50, 50};
//        SDL_RenderFillRect(renderer, &rect2);
//        SDL_Rect rect3 = {125, 125, 50, 50};
//        SDL_RenderFillRect(renderer, &rect3);
//
//		SDL_RenderPresent(renderer);
//		while (SDL_PollEvent(&event)) {
//			if (event.type == SDL_QUIT)
//				is_done = true;
//		}
//	}
//	SDL_DestroyRenderer(renderer);
//	SDL_DestroyWindow(window);
//	SDL_Quit();
    Field f;
    f.init_figures();
    f.get_field()[0][0].get_figure()->get_cell().first;
    cout << endl;
    f.get_field()[6][7].get_figure()->get_cell().first;
}