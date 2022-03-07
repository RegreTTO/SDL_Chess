

#ifndef SDL_CHESS_ROOK_H
#define SDL_CHESS_ROOK_H


#include "../Figure.h"

class Rook : public Figure {
	const std::string name = "Rook";

public:

	explicit Rook(std::pair<int, int> cell, int color);

	std::string get_name() override { return name; }
	int get_color() override {return color;}
};


#endif //SDL_CHESS_ROOK_H
