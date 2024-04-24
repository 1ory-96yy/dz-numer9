#ifndef OVERCOAT_H
#define OVERCOAT_H

#include <iostream>
#include <string>

class Overcoat {
public:
    std::string brand;
    double price;
    Overcoat(Overcoat&& other) noexcept
        : brand(std::move(other.brand)), price(other.price) {
        other.price = 0.0;
    }
    friend std::ostream& operator<<(std::ostream& os, const Overcoat& coat);
    Overcoat();
};

#endif 
