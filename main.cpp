#include "SDL2/SDL.h"
#include "Scripts/Figure/King/King.h"
using namespace std;

#define WINDOW_WIDTH 800
#define CENTRE WINDOW_WIDTH/2, WINDOW_WIDTH/2

int main(int argc, char *args[]) {
//	SDL_Window *window;
//	SDL_Renderer *renderer;
//	SDL_Init(SDL_INIT_EVERYTHING);
//	SDL_CreateWindowAndRenderer(WINDOW_WIDTH, WINDOW_WIDTH, 0, &window, &renderer);
//	bool is_done = false;
//	while (!is_done) {
//		SDL_Event event;
//		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
//
//		SDL_RenderDrawPoint(renderer, CENTRE);
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
//	return 0;
	King b({-2, -2});


}