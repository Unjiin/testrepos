#include "Triangle.h"
#include <stdexcept>

Triangle::Triangle(double side, double height) {
    setSide(side);
    setHeight(height);
}

void Triangle::setSide(double side) {
    if (side <= 0)
        throw std::invalid_argument("Side must be greater than 0");

    this->side = side;
}

void Triangle::setHeight(double height) {
    if (height <= 0)
        throw std::invalid_argument("Height must be greater than 0");

    this->height = height;
}

double Triangle::getSide() const {
    return side;
}

double Triangle::getHeight() const {
    return height;
}

double Triangle::getArea() const {
    return 0.5 * side * height;
}//
// Created by 1 on 10.09.2026.
//
