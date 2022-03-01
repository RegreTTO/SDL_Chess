

#include "Figure.h"

Figure::Figure(std::pair<int,int> cell, int color) {
	this->cell = cell;
	this->available_coords = std::vector<std::pair<int, int>>();
	this->color = color;
}

void Figure::set_cell(std::pair<int, int> cell1) {
	this->cell = cell1;
}

std::string Figure::get_name() {
	return this->name;
}
