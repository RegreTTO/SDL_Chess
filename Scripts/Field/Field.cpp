
#include <fstream>
#include "../Figure/Figures.h"
#include "Field.h"

Field::Field(){
    this->chosen_cell = nullptr;
    this->field = new Cell *[8];
    for (int i = 0; i < 8; i++)
        this->field[i] = new Cell[8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            this->field[i][j] = Cell(i, j);
            if ((i + j) % 2 == 0) this->field[i][j].set_color(&this->white);
            else this->field[i][j].set_color(&this->black);
        }
    }
}

Field::~Field() {
    for (int i = 0; i < 8; i++)
        delete[] this->field[i];
    delete[] this->field;
}

Cell **Field::get_field() {
    return this->field;
}

void Field::init_figures() {
    for (int i = 0; i < 8; i++) {
        this->field[1][i].set_figure(new Pawn({1, i}, 0));
        this->field[6][i].set_figure(new Pawn({6, i}, 1));
    }

    this->field[7][0].set_figure(new Rook({7, 0}, 1));
    this->field[7][7].set_figure(new Rook({7, 7}, 1));
    this->field[0][0].set_figure(new Rook({0, 0}, 0));
    this->field[0][7].set_figure(new Rook({0, 7}, 0));

    this->field[7][1].set_figure(new Knight({7, 1}, 1));
    this->field[7][6].set_figure(new Knight({7, 6}, 1));
    this->field[0][1].set_figure(new Knight({0, 1}, 0));
    this->field[0][6].set_figure(new Knight({0, 6}, 0));

    this->field[7][2].set_figure(new Bishop({7, 2}, 1));
    this->field[0][2].set_figure(new Bishop({0, 2}, 0));
    this->field[7][5].set_figure(new Bishop({7, 5}, 1));
    this->field[0][5].set_figure(new Bishop({0, 5}, 0));

    this->field[0][3].set_figure(new Queen({0, 3}, 0));
    this->field[7][3].set_figure(new Queen({7, 3}, 1));

    this->field[0][4].set_figure(new King({0, 4}, 0));
    this->field[7][4].set_figure(new King({7, 4}, 1));
}

void Field::show_board(SDL_Renderer *renderer) {
    const int x = 800;
    const int y = 0;
    int i = x;
    int j = y;
    std::string s;
    std::string sprites[6] = {"../sprites/king.txt", "../sprites/queen.txt", "../sprites/rook.txt",
                              "../sprites/bishop.txt", "../sprites/knight.txt", "../sprites/pawn.txt"};
    for (const auto &a : sprites) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_Rect rect = {i, j, 101, 102};
        SDL_RenderDrawRect(renderer, &rect);
        std::ifstream file(a);
        while (!file.eof()) {
            std::getline(file, s);
            for (char c : s) {
                if (c == '%') {
                    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                    SDL_RenderDrawPoint(renderer, i, j);
                } else if (c == '#') {
                    SDL_RenderDrawPoint(renderer, i, j);
                    SDL_SetRenderDrawColor(renderer, 60,149,208, 255);
                }
                i++;
            }
            j++;
            i = x;
        }
    }
}

void Field::move_figure(SDL_Renderer *renderer, Figure *fig, Cell *cell) {
    std::pair<int, int> starting_coords = fig->get_cell();
    this->field[starting_coords.first][starting_coords.second].render(renderer);
    this->field[starting_coords.first][starting_coords.second].set_figure(nullptr);
    cell->render(renderer);
    cell->set_figure(fig);
    fig->set_cell(cell->get_coords());
    fig->render(renderer);
}