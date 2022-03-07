#include "Rook.h"


void Rook::render(SDL_Renderer *renderer) {
    this->parse_picture(renderer, "../sprites/rook.txt");
}
