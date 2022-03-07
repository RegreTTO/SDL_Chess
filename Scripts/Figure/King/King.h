

#ifndef SDL_CHESS_KING_H
#define SDL_CHESS_KING_H


#include "../Figure.h"

class King : public Figure {
	const std::string name = "King";

public:

	explicit King(std::pair<int, int> cell, int color);

	std::string get_name() override { return name; }
	int get_color() override {return color;}

};


#endif //SDL_CHESS_KING_H
