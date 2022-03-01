

#ifndef SDL_CHESS_CELL_H
#define SDL_CHESS_CELL_H


#include "../Figure/Figure.h"
#include "utility"


class Cell {
private:
	int x, y;
	Figure *fig = nullptr;
public:
	Cell();

	Cell(int x, int y);

	Figure *get_figure();

	void set_figure(Figure *figure);

	std::pair<int, int> get_coords();

	void render();

};


#endif //SDL_CHESS_CELL_H
