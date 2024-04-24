#include "flat.h"

std::ostream& operator<<(std::ostream& os, const Flat& flat) {
    os << "Address: " << flat.address << ", Area: " << flat.area;
    return os;
}

Flat::Flat() : area(0), address("") {}
