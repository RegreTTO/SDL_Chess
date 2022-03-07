

#ifndef SDL_CHESS_FIGURE_H
#define SDL_CHESS_FIGURE_H

#include "vector"
#include "string"
#include "SDL2/SDL.h"

class Figure {
protected:
	std::pair<int, int> cell;
	std::string name;
	int color;

	void parse_picture(SDL_Renderer *renderer, const std::string &path);


public:
	explicit Figure(std::pair<int, int> cell, int color);

	int get_color() const { return this->color; }

	virtual std::string get_name() { return this->name; };

	void set_cell(std::pair<int, int> cell1);


	virtual void render(SDL_Renderer *renderer) = 0;

	std::pair<int, int> get_cell() { return this->cell; }
};


#endif //SDL_CHESS_FIGURE_H
