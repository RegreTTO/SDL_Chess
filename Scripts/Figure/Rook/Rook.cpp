

#include "Rook.h"

void Rook::recount_coords() {
	for (int i = 0; i < 7; i++)
        this->available_coords.emplace_back(this->cell.first, i);
    for (int i = 0; i < 7; i++)
        this->available_coords.emplace_back(i, this->cell.second);
}

Rook::Rook(std::pair<int, int> cell, int color) : Figure(cell, color) {

}
