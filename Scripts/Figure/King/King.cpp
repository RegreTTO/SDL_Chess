

#include "King.h"

void King::recount_coords() {
    if (this->cell.first < 7)
        this->available_coords.emplace_back(this->cell.first+1, this->cell.second);
    if (this->cell.second < 7)
        this->available_coords.emplace_back(this->cell.first, this->cell.second+1);
    if (this->cell.first < 7 && this->cell.second < 7)
        this->available_coords.emplace_back(this->cell.first+1, this->cell.second+1);
    if (this->cell.first > 0)
        this->available_coords.emplace_back(this->cell.first-1, this->cell.second);
    if (this->cell.second > 0)
        this->available_coords.emplace_back(this->cell.first, this->cell.second-1);
    if (this->cell.first > 0 && this->cell.second > 0)
        this->available_coords.emplace_back(this->cell.first-1, this->cell.second-1);
    if (this->cell.first < 7 && this->cell.second > 0)
        this->available_coords.emplace_back(this->cell.first+1, this->cell.second-1);
    if (this->cell.first > 0 && this->cell.second < 7)
        this->available_coords.emplace_back(this->cell.first-1, this->cell.second+1);
}

King::King(std::pair<int, int> cell, int color) : Figure(cell, color) {

}



