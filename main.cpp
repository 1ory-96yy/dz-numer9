#include <iostream>
#include "overcoat.h"
#include "flat.h"

int main() {
    Overcoat coat1;
    coat1.brand = "ABC";
    coat1.price = 100.0;

    Overcoat coat2(std::move(coat1));
    std::cout << "Coat 2: " << coat2 << std::endl;

    Flat flat1;
    flat1.area = 100;
    flat1.address = "123 Main Street";

    Flat flat2(std::move(flat1));
    std::cout << "Flat 2: " << flat2 << std::endl;

    return 0;
}
