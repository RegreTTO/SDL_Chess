#include <iostream>

#include "SDL.h"
#include "Scripts/Game/Game.h"
#include "windows.h"

using namespace std;

#define WINDOW_WIDTH 800

void main_loop(Game &g, bool &is_done, SDL_Renderer *renderer) {
	while (!is_done) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT)
				is_done = true;
			if (event.button.type == SDL_MOUSEBUTTONUP && !g.menu.is_in_menu) {
				const int x = event.button.x;
				const int y = event.button.y;
				if (event.button.button == SDL_BUTTON_LEFT) {
					SDL_Log("(%d, %d)", x, y);
					g.field.mouse_click_handler(renderer, x, y);
					g.sidebar.mouse_click(renderer, x, y);
				}
				if (event.button.button == SDL_BUTTON_RIGHT && x < 800 && y < 800)
					g.new_figure(renderer, x, y);
				if (event.button.button == SDL_BUTTON_MIDDLE && x < 800 && y < 800) {
					g.delete_figure(renderer, x, y);
				}
			}
			SDL_RenderPresent(renderer);

		}

	}
}

void start_menu(Game &g, bool &is_done, SDL_Renderer *renderer) {
	int counter = 1;
	bool up = true;
	while (g.menu.is_in_menu && !is_done) {
		SDL_Event event;
		g.menu.animate_menu(renderer, counter, up);
		Menu::rules_butt(renderer);
		SDL_Delay(10);
		SDL_RenderPresent(renderer);
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT)
				is_done = true;
			if (event.button.type == SDL_MOUSEBUTTONUP && event.button.y >= 542 && event.button.y <= 664 &&
			    event.button.x >= 410 && event.button.x <= 603) {
				SDL_SetRenderDrawColor(renderer, 115, 115, 115, 255);
				SDL_RenderClear(renderer);
				g.start_game(renderer);
				SDL_RenderPresent(renderer);
				g.menu.is_in_menu = false;
			}
			if (event.button.type == SDL_MOUSEBUTTONUP && event.button.y >= 700 && event.button.y <= 800 &&
			    event.button.x >= 800 && event.button.x <= 1000)
				ShellExecute(nullptr, nullptr, "https://www.gambler.ru/Chess_regulations", nullptr, nullptr, SW_SHOW);
		}
	}
}

int main(int argc, char *args[]) {
	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_CreateWindowAndRenderer(WINDOW_WIDTH + 200, WINDOW_WIDTH, 0, &window, &renderer);
	bool is_done = false;
	SDL_SetRenderDrawColor(renderer, 115, 115, 115, 255);
	SDL_RenderClear(renderer);

	Game g;
	start_menu(g, is_done, renderer);
	main_loop(g, is_done, renderer);

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}