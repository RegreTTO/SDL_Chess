

#ifndef SDL_CHESS_KING_H
#define SDL_CHESS_KING_H


#include "../Figure.h"

class King : public Figure{
public:
	explicit King(std::pair<int, int> cell);
	void recount_coords() override;

};


#endif //SDL_CHESS_KING_H
