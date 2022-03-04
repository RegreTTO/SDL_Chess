

#include "Pawn.h"

void Pawn::recount_coords() {
    int way = (this->color ? 1 : -1);
	this->available_coords.emplace_back(this->cell.first, this->cell.second + way);

	if (color && this->cell.second == 2 || !color && this->cell.second == 7)
        this->available_coords.emplace_back(this->cell.first, this->cell.second + way*2);
}

Pawn::Pawn(std::pair<int, int> cell, int color) : Figure(cell, color) {

}
