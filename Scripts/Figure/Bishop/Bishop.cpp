

#include "Bishop.h"

Bishop::Bishop(std::pair<int, int> cell, int color) : Figure(cell, color) {

}

void Bishop::render() {
    this->parse_picture("");
}
