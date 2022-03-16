#include "Cell.h"

void Cell::render(SDL_Renderer *renderer) const {
    SDL_SetRenderDrawColor(renderer, this->color.r, this->color.g, this->color.b, 255);
    SDL_Rect rect = {x * 100, y * 100, 100, 100};
    SDL_RenderFillRect(renderer, &rect);
}

void Cell::select(SDL_Renderer *renderer) const {
    SDL_SetRenderDrawColor(renderer, 230, 0, 0, 255);
    SDL_Rect rect = {x * 100, y * 100, 100, 100};
    SDL_RenderDrawRect(renderer, &rect);
}

void Cell::clear(SDL_Renderer *renderer) const {
    SDL_SetRenderDrawColor(renderer, this->color.r, this->color.g, this->color.b, 255);
    SDL_Rect rect = {x*100, y*100, 100, 100};
    SDL_RenderDrawRect(renderer, &rect);
}