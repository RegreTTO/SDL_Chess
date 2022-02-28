

#ifndef SDL_CHESS_ROOK_H
#define SDL_CHESS_ROOK_H


#include "../Figure.h"

class Rook : public Figure{
public:
	explicit Rook(std::pair<int, int> cell);

	void recount_coords() override;
};


#endif //SDL_CHESS_ROOK_H
