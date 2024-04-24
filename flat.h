#ifndef FLAT_H
#define FLAT_H

#include <iostream>
#include <string>

class Flat {
public:
    int area;
    std::string address;
    Flat(Flat&& other) noexcept
        : area(std::exchange(other.area, 0)), address(std::move(other.address)) {}
    Flat& operator=(Flat&& other) noexcept {
        if (this != &other) {
            area = std::exchange(other.area, 0);
            address = std::move(other.address);
        }
        return *this;
    }
    friend std::ostream& operator<<(std::ostream& os, const Flat& flat);
    Flat();
};

#endif
