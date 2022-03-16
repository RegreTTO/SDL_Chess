

#ifndef SDL_CHESS_FIELD_H
#define SDL_CHESS_FIELD_H

#include "Cell.h"

class Field {
private:
	Cell **field;
	Cell *chosen_cell;
	const SDL_Color white = {255, 215, 0};
	const SDL_Color black = {0, 57, 166};
	void move_figure(SDL_Renderer *renderer, Figure* fig, Cell* cell);
    void board_click(SDL_Renderer *renderer, int x, int y);
public:
	Field();
	~Field();

	Cell **get_field();

	void init_figures();

	static void init_bar_first(SDL_Renderer *renderer);

    static void init_bar_second(SDL_Renderer *renderer);



	void mouse_click_handler(SDL_Renderer *renderer, int x, int y);
};


#endif //SDL_CHESS_FIELD_H
