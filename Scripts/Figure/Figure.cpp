

#include "Figure.h"

Figure::Figure(std::pair<int,int> cell) {
	this->cell = cell;
	this->recount_coords();
}

void Figure::recount_coords() {
	this->cell = {-1, -1};
}
