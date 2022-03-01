

#ifndef SDL_CHESS_KNIGHT_H
#define SDL_CHESS_KNIGHT_H


#include <utility>
#include "../Figure.h"

class Knight : public Figure {
	const std::string name = "Knight";

public:

	explicit Knight(std::pair<int, int> cell, int color);

	std::string get_name() override { return name; }

	int get_color() override { return color; }

	void recount_coords() override;
};


#endif //SDL_CHESS_KNIGHT_H
