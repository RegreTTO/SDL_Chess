

#ifndef SDL_CHESS_QUEEN_H
#define SDL_CHESS_QUEEN_H


#include "../Figure.h"

class Queen : public Figure {
	const std::string name = "Queen";

public:

	std::string get_name() override { return name; }

	explicit Queen(std::pair<int, int> cell, int color);

	int get_color() override { return color; }

	void render() override;
};


#endif //SDL_CHESS_QUEEN_H
