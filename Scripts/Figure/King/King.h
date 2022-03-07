

#ifndef SDL_CHESS_KING_H
#define SDL_CHESS_KING_H


#include "../Figure.h"

class King : public Figure {
	const std::string name = "King";

public:

	explicit King(std::pair<int, int> cell, int color) : Figure(cell, color) {};

	void render(SDL_Renderer *renderer) override;
};


#endif //SDL_CHESS_KING_H
