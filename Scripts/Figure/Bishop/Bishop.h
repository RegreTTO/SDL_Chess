

#ifndef SDL_CHESS_BISHOP_H
#define SDL_CHESS_BISHOP_H


#include "../Figure.h"

class Bishop : public Figure {
	const std::string name = "Bishop";

public:

	explicit Bishop(std::pair<int, int> cell, int color);
	int get_color() override {return color;}
	std::string get_name() override { return name; }
};


#endif //SDL_CHESS_BISHOP_H
