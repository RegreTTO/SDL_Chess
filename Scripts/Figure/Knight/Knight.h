

#ifndef SDL_CHESS_KNIGHT_H
#define SDL_CHESS_KNIGHT_H


#include <utility>
#include "../Figure.h"

class Knight : public Figure {
	const std::string name = "Knight";

public:

	explicit Knight(std::pair<int, int> cell, int color) : Figure(cell, color) {};

	std::string get_name() override { return name; }

	void render() override;
};


#endif //SDL_CHESS_KNIGHT_H
