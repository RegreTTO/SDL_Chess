#include "Field.h"

void Field::board_click(SDL_Renderer *renderer, int x, int y) {
    x -= 25;
    y -= 25;
    x /= 100;
    y /= 100;
    if (field[x][y].get_figure() != nullptr || this->chosen_cell != nullptr) {
        if (this->chosen_cell == nullptr) {
            if (this->chosen_cell == &field[x][y]) {
                this->chosen_cell->clear(renderer);
                this->chosen_cell = nullptr;
                return;
            }
            this->chosen_cell = &this->field[x][y];
            this->chosen_cell->select(renderer);
        } else {
            this->move_figure(renderer, this->chosen_cell->get_figure(), &field[x][y]);
            this->chosen_cell = nullptr;
        }
    }
}

void Field::mouse_click_handler(SDL_Renderer *renderer, int x, int y) {
    if (x <= 825 && x >= 25 && y <= 825 && y >= 25) {
        board_click(renderer, x, y);
    }
}


