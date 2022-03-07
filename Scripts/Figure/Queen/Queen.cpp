

#include "Queen.h"


void Queen::render(SDL_Renderer *renderer) {
    this->parse_picture(renderer, "../sprites/queen.txt");
}
