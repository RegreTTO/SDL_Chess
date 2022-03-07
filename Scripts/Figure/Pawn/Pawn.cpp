

#include "Pawn.h"


void Pawn::render(SDL_Renderer *renderer) {
    this->parse_picture(renderer, "../sprites/pawn.txt");
}
