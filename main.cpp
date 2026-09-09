#include <iostream>
#include <stdexcept>

class Triangle {
private:
    double side;
    double height;

public:
    Triangle(double side, double height) {
        setSide(side);
        setHeight(height);
    }

    void setSide(double side) {
        if (side <= 0)
            throw std::invalid_argument("Side must be greater than 0");

        this->side = side;
    }

    void setHeight(double height) {
        if (height <= 0)
            throw std::invalid_argument("Height must be greater than 0");

        this->height = height;
    }

    double getSide() const {
        return side;
    }

    double getHeight() const {
        return height;
    }

    double getArea() const {
        return 0.5 * side * height;
    }
};

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