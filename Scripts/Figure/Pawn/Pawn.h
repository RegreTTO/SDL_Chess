

#ifndef SDL_CHESS_PAWN_H
#define SDL_CHESS_PAWN_H


#include "../Figure.h"

class Pawn : private Figure{
public:
	explicit Pawn(std::pair<int, int> cell);

	void recount_coords() override;
};


#endif //SDL_CHESS_PAWN_H
