

#ifndef SDL_CHESS_CELL_H
#define SDL_CHESS_CELL_H


#include "../Figure/Figure.h"
#include "utility"


class Cell {
private:
    int x, y;
    Figure *fig = nullptr;
    SDL_Color color{};
public:
    Cell();

    Cell(int x, int y);

    Figure *get_figure();

    void set_figure(Figure *figure);

    void set_color(const SDL_Color *colorr) { this->color = *colorr; }

    std::pair<int, int> get_coords();

    void render(SDL_Renderer *renderer) const;

    void select(SDL_Renderer *renderer) const;

    void clear(SDL_Renderer *renderer) const;
};


#endif //SDL_CHESS_CELL_H
