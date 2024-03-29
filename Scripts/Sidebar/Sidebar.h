#ifndef SDL_CHESS_SIDEBAR_H
#define SDL_CHESS_SIDEBAR_H

#include "../Field/Cell.h"

class Sidebar {
private:
	Cell** figures;
	Figure *chosen_figure;
public:
	Sidebar();

	static void show_white(SDL_Renderer *renderer);

	static void show_black(SDL_Renderer *renderer);

	static void show_butt(SDL_Renderer *renderer);

	Figure *get_chosen_figure() { return this->chosen_figure; }

	void choose_figure(int x, int y) { this->chosen_figure = figures[y][x].get_figure();}

	void mouse_click(SDL_Renderer *renderer, int x, int y);

	void select_figure(SDL_Renderer *renderer, Cell* cell);

	void selection_clear(SDL_Renderer *renderer, Cell* cell);
};


#endif //SDL_CHESS_SIDEBAR_H
