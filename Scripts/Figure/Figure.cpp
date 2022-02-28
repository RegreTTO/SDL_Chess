

#include "Figure.h"

Figure::Figure(std::pair<int,int> cell) {
	this->cell = cell;
	this->available_coords = std::vector<std::pair<int, int>>();
}

void Figure::set_cell(std::pair<int, int> cell1) {
	this->cell = cell1;
}
