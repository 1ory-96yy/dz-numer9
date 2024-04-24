#include "overcoat.h"

std::ostream& operator<<(std::ostream& os, const Overcoat& coat) {
    os << "Brand: " << coat.brand << ", Price: " << coat.price;
    return os;
}

Overcoat::Overcoat() : brand(""), price(0.0) {}
