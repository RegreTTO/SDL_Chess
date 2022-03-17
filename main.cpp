#include <iostream>

#include "SDL.h"
#include "Scripts/Game/Game.h"

using namespace std;

#define WINDOW_WIDTH 800

int main(int argc, char *args[]) {
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_CreateWindowAndRenderer(WINDOW_WIDTH+200, WINDOW_WIDTH, 0, &window, &renderer);
    bool is_done = false;
    SDL_SetRenderDrawColor(renderer, 115, 115, 115, 255);
    SDL_RenderClear(renderer);

	Game g;
	g.menu.parse_menu(renderer);
    SDL_RenderPresent(renderer);
    SDL_Delay(10000);
//	g.start_game(renderer);
//    SDL_RenderPresent(renderer);
//    while (!is_done) {
//        SDL_Event event;
//
//        while (SDL_PollEvent(&event)) {
//            if (event.type == SDL_QUIT)
//                is_done = true;
//            if (event.button.type == SDL_MOUSEBUTTONUP){
//                SDL_Log("(%d, %d)", event.button.x, event.button.y);
//                g.field.mouse_click_handler(renderer, event.button.x, event.button.y);
//                SDL_RenderPresent(renderer);
//            }
//        }
//
//    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
	return 0;
}