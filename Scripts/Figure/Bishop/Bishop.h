

#ifndef SDL_CHESS_BISHOP_H
#define SDL_CHESS_BISHOP_H


#include "../Figure.h"

class Bishop : public Figure {
public:
	explicit Bishop(std::pair<int, int> cell);

	void recount_coords() override;
};


#endif //SDL_CHESS_BISHOP_H
