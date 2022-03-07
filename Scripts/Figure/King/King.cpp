

#include "King.h"


King::King(std::pair<int, int> cell, int color) : Figure(cell, color) {

}

void King::render() {
    this->parse_picture("");
}



