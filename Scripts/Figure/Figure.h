

#ifndef SDL_CHESS_FIGURE_H
#define SDL_CHESS_FIGURE_H


#include "vector"
#include "string"

class Figure {
protected:
	std::pair<int, int> cell;
	std::vector<std::pair<int, int>> available_coords;
	std::string name;
	int color;
public:
	explicit Figure(std::pair<int, int> cell, int color);

	virtual int get_color() { return color; }

	void set_cell(std::pair<int, int> cell1);

	virtual std::string get_name();

};


#endif //SDL_CHESS_FIGURE_H
