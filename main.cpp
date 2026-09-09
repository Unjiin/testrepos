#include <iostream>
#include <stdexcept>
#include "Triangle.h"


int main() {
    double a, h;

    std::cout << "Enter side and height of triangle: ";
    std::cin >> a >> h;

    try {
        Triangle triangle(a, h);
        std::cout << triangle.getArea();
    }
    catch (const std::invalid_argument& error) {
        std::cout << "Error: " << error.what();
    }

    return 0;
}