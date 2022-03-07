

#include "Pawn.h"


Pawn::Pawn(std::pair<int, int> cell, int color) : Figure(cell, color) {

}

void Pawn::render() {
    this->parse_picture("");
}
