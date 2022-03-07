

#ifndef SDL_CHESS_PAWN_H
#define SDL_CHESS_PAWN_H


#include "../Figure.h"

class Pawn : public Figure {

	const std::string name = "Pawn";

public:

	std::string get_name() override { return name; }

	explicit Pawn(std::pair<int, int> cell, int color);

	void render() override;

};


#endif //SDL_CHESS_PAWN_H
