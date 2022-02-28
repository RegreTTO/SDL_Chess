

#include "Bishop.h"

void Bishop::recount_coords() {
	this->cell = {1, 123123};
}

Bishop::Bishop(std::pair<int, int> cell) : Figure(cell) {
	this->recount_coords();
}

