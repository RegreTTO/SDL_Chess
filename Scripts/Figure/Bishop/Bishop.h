

#ifndef SDL_CHESS_BISHOP_H
#define SDL_CHESS_BISHOP_H


#include "../Figure.h"

class Bishop : public Figure {
	const std::string name = "Bishop";

public:

	explicit Bishop(std::pair<int, int> cell, int color) : Figure(cell, color) {};

	std::string get_name() override { return name; }

	void render() override;
};


#endif //SDL_CHESS_BISHOP_H
