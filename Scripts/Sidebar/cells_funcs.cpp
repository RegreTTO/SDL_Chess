#include "Sidebar.h"

void Sidebar::selection_clear(SDL_Renderer *renderer, Cell *cell) {
	SDL_SetRenderDrawColor(renderer, 115, 115, 115, 255);
	auto coords = cell->get_coords();
	SDL_Rect rect1 = {coords.second * 100 + 800, coords.first * 100, 100, 100};
	SDL_Rect rect2 = {coords.second * 100 + 801, coords.first * 100 + 1, 99, 99};
	SDL_RenderDrawRect(renderer, &rect1);
	SDL_RenderDrawRect(renderer, &rect2);
}

void select(SDL_Renderer *renderer) {

}

void Sidebar::select_figure(SDL_Renderer *renderer, Cell *cell) {
	SDL_SetRenderDrawColor(renderer, 230, 0, 0, 255);
	auto coords = cell->get_coords();
	SDL_Rect rect1 = {coords.second * 100 + 800, coords.first * 100, 100, 100};
	SDL_Rect rect2 = {coords.second * 100 + 801, coords.first * 100 + 1, 99, 99};
	SDL_RenderDrawRect(renderer, &rect1);
	SDL_RenderDrawRect(renderer, &rect2);
}