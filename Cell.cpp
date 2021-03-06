#include "Cell.h"

int Cell::getI() {
    return i;
}

int Cell::getJ() {
    return j;
}

Cell::Cell(int i, int j) {
    this->i = i;
    this->j = j;
}

bool Cell::operator==(Cell otherCell) {
    return ((this->i == otherCell.getI()) && (this->j == otherCell.getJ()));
}

