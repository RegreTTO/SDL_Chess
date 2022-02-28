

#include "King.h"

void King::recount_coords() {
	this->cell = {1010101010, 1010010123};
}

King::King(std::pair<int, int> cell) : Figure(cell) {

}


