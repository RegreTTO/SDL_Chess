

#include "Cell.h"

Cell::Cell(int x, int y) {
	this->x = x;
	this->y = y;
}

Figure *Cell::get_figure() { return this->fig; }

std::pair<int, int> Cell::get_coords() { return {this->x, this->y}; }

void Cell::set_figure(Figure *figure) { this->fig = figure; }

Cell::Cell() {
	this->x = 0;
	this->y = 0;
}

void Cell::render(SDL_Renderer *renderer) const {
    if ((x+y)%2 != 0)
//        SDL_SetRenderDrawColor(renderer, 156, 156, 252, 255); // чёрная клетка
        SDL_SetRenderDrawColor(renderer, 0, 57, 166, 255);
    else
        //SDL_SetRenderDrawColor(renderer, 235, 235, 255, 255); // белая клетка
        SDL_SetRenderDrawColor(renderer, 255, 215, 0, 255);
    SDL_Rect rect = {x*100+25, y*100+25, 100, 100};
    SDL_RenderFillRect(renderer, &rect);
}
