#include "intcell.h"

IntCell::IntCell(int iv): storedValue{iv} {}

int IntCell::read() const {
    return storedValue;
}

void IntCell::write(int x) {
    storedValue = x;
}
