

#include "Cell.h"

Cell::Cell(int x, int y) {
	this->x = x;
	this->y = y;
}

Figure *Cell::get_figure() { return this->fig; }

std::pair<int, int> Cell::get_coords() { return {this->x, this->y}; }

void Cell::set_figure(Figure *figure) { this->fig = figure; }

Cell::Cell() {
	this->x = 0;
	this->y = 0;
}

