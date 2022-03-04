

#include "Queen.h"

void Queen::recount_coords() {
    for (int x = this->cell.first, y = this->cell.second; x < 7 && y < 7; x++, y++)
        this->available_coords.emplace_back(x, y);
    for (int x = this->cell.first, y = this->cell.second; x > 0 && y > 0; x--, y--)
        this->available_coords.emplace_back(x, y);
    for (int x = this->cell.first, y = this->cell.second; x < 7 && y > 0; x++, y--)
        this->available_coords.emplace_back(x, y);
    for (int x = this->cell.first, y = this->cell.second; x > 0 && y < 7; x--, y++)
        this->available_coords.emplace_back(x, y);
    for (int i = 0; i < 7; i++)
        this->available_coords.emplace_back(this->cell.first, i);
    for (int i = 0; i < 7; i++)
        this->available_coords.emplace_back(i, this->cell.second);
}

Queen::Queen(std::pair<int, int> cell, int color) : Figure(cell, color) {

}
