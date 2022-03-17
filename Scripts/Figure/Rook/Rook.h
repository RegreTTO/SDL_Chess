

#ifndef SDL_CHESS_ROOK_H
#define SDL_CHESS_ROOK_H


#include "../Figure.h"

class Rook : public Figure {
public:

	explicit Rook(std::pair<int, int> cell, int color) : Figure(cell, color) { name = "Rook"; };

	void render(SDL_Renderer *renderer) override;
};


#endif //SDL_CHESS_ROOK_H
