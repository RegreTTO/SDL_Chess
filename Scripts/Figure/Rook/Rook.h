

#ifndef SDL_CHESS_ROOK_H
#define SDL_CHESS_ROOK_H


#include "../Figure.h"

class Rook : public Figure {
	const std::string name = "Rook";

public:

	explicit Rook(std::pair<int, int> cell, int color) : Figure(cell, color) {};

	void render(SDL_Renderer *renderer) override ;
};


#endif //SDL_CHESS_ROOK_H
