

#include "Knight.h"

void Knight::recount_coords() {
    if (this->cell.first < 6 && this->cell.second < 7)
        this->available_coords.emplace_back(this->cell.first+2, this->cell.second+1);
    if (this->cell.first < 6 && this->cell.second > 0)
        this->available_coords.emplace_back(this->cell.first+2, this->cell.second-1);
    if (this->cell.first > 1 && this->cell.second > 0)
        this->available_coords.emplace_back(this->cell.first-2, this->cell.second+1);
    if (this->cell.first > 1 && this->cell.second > 0)
        this->available_coords.emplace_back(this->cell.first-2, this->cell.second-1);
    if (this->cell.first < 7 && this->cell.second > 1)
        this->available_coords.emplace_back(this->cell.first+1, this->cell.second-2);
    if (this->cell.first > 0 && this->cell.second > 1)
        this->available_coords.emplace_back(this->cell.first-1, this->cell.second-2);
    if (this->cell.first < 7 && this->cell.second < 6)
        this->available_coords.emplace_back(this->cell.first+1, this->cell.second+2);
    if (this->cell.first > 0 && this->cell.second < 6)
        this->available_coords.emplace_back(this->cell.first-1, this->cell.second+2);
}

Knight::Knight(std::pair<int, int> cell, int color) : Figure(cell, color) {

}
