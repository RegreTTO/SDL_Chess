

#ifndef SDL_CHESS_QUEEN_H
#define SDL_CHESS_QUEEN_H


#include "../Figure.h"

class Queen : public Figure {

public:
	explicit Queen(std::pair<int, int> cell, int color) : Figure(cell, color) { name = "Queen"; };

	void render(SDL_Renderer *renderer) override;
};


#endif //SDL_CHESS_QUEEN_H
