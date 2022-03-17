

#ifndef SDL_CHESS_KNIGHT_H
#define SDL_CHESS_KNIGHT_H


#include <utility>
#include "../Figure.h"

class Knight : public Figure {

public:
	explicit Knight(std::pair<int, int> cell, int color) : Figure(cell, color) { name = "Knight"; };

	void render(SDL_Renderer *renderer) override;
};


#endif //SDL_CHESS_KNIGHT_H
