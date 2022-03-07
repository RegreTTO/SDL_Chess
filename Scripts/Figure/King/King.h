

#ifndef SDL_CHESS_KING_H
#define SDL_CHESS_KING_H


#include "../Figure.h"

class King : public Figure {
	const std::string name = "King";

public:

	explicit King(std::pair<int, int> cell, int color);

	std::string get_name() override { return name; }
	void render() override;
};


#endif //SDL_CHESS_KING_H
