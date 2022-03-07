

#ifndef SDL_CHESS_PAWN_H
#define SDL_CHESS_PAWN_H


#include "../Figure.h"

class Pawn : public Figure {

	const std::string name = "Pawn";

public:
	explicit Pawn(std::pair<int, int> cell, int color) : Figure(cell, color){};

	void render(SDL_Renderer *renderer) override;

};


#endif //SDL_CHESS_PAWN_H
