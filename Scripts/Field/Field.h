

#ifndef SDL_CHESS_FIELD_H
#define SDL_CHESS_FIELD_H

#include "Cell.h"

class Field {
private:
	Cell **field;
public:
	Field();
	~Field();

	Cell **get_field();

	void init_figures();

	static void init_bar_first(SDL_Renderer *renderer);

    static void init_bar_second(SDL_Renderer *renderer);

	void move_figure(SDL_Renderer *renderer, Figure* fig, Cell* cell);

	void mouse_click_handler(SDL_Renderer *renderer, int x, int y);
};


#endif //SDL_CHESS_FIELD_H
