

#include "Queen.h"



Queen::Queen(std::pair<int, int> cell, int color) : Figure(cell, color) {

}

void Queen::render() {
    this->parse_picture("");
}
