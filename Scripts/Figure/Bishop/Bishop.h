

#ifndef SDL_CHESS_BISHOP_H
#define SDL_CHESS_BISHOP_H


#include "../Figure.h"

class Bishop : public Figure {
public:

	explicit Bishop(std::pair<int, int> cell, int color) : Figure(cell, color) {name = "Bishop";};

	void render(SDL_Renderer *renderer) override;
};


#endif //SDL_CHESS_BISHOP_H
