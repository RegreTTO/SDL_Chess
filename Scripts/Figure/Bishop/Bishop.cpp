

#include "Bishop.h"

void Bishop::render(SDL_Renderer *renderer) {
	this->parse_picture(renderer, "../sprites/bishop.txt");
}
