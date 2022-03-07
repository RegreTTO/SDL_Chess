

#include "Knight.h"

void Knight::render(SDL_Renderer *renderer) {
    this->parse_picture(renderer, "../sprites/knight.txt");
}
