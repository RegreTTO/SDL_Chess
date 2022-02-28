

#ifndef SDL_CHESS_QUEEN_H
#define SDL_CHESS_QUEEN_H


#include "../Figure.h"

class Queen : public Figure {
public:
	explicit Queen(std::pair<int, int> cell);

	void recount_coords() override;
};


#endif //SDL_CHESS_QUEEN_H
