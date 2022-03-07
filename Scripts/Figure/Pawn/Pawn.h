

#ifndef SDL_CHESS_PAWN_H
#define SDL_CHESS_PAWN_H


#include "../Figure.h"

class Pawn : public Figure {

	const std::string name = "Pawn";

public:

	std::string get_name() override { return name; }

	int get_color() override { return color; }

	explicit Pawn(std::pair<int, int> cell, int color);

};


#endif //SDL_CHESS_PAWN_H
