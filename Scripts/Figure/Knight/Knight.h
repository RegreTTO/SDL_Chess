

#ifndef SDL_CHESS_KNIGHT_H
#define SDL_CHESS_KNIGHT_H


#include <utility>
#include "../Figure.h"

class Knight : private Figure{
public:
	explicit Knight(std::pair<int, int> cell);

	void recount_coords() override;
};


#endif //SDL_CHESS_KNIGHT_H
