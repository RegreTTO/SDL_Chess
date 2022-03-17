

#ifndef SDL_CHESS_FIELD_H
#define SDL_CHESS_FIELD_H

#include "Cell.h"

class Field {
private:
	Cell **field;
	Cell *chosen_cell;
	SDL_Color white = {156, 156, 252};
	SDL_Color black = {235, 235, 255};

	void move_figure(SDL_Renderer *renderer, Figure *fig, Cell *cell);

	void board_click(SDL_Renderer *renderer, int x, int y);

public:
	Field();

	~Field();

	Cell **get_field();

	void init_figures();

	static void show_board(SDL_Renderer *renderer);

	static void init_bar_second(SDL_Renderer *renderer);

	void mouse_click_handler(SDL_Renderer *renderer, int x, int y);
};


#endif //SDL_CHESS_FIELD_H
