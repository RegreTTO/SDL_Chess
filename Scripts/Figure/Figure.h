

#ifndef SDL_CHESS_FIGURE_H
#define SDL_CHESS_FIGURE_H


#include "vector"

class Figure {
protected:
	std::pair<int, int> cell;
	std::vector<std::pair<int, int>> available_coords;
public:
	explicit Figure(std::pair<int, int> cell);

	virtual void recount_coords() = 0;

};


#endif //SDL_CHESS_FIGURE_H
