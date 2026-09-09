#include <iostream>
int main () {
    double a, b;
    std::cout << "Enter side and height of triangle: ";
    std::cin >> a >> b;
    double S = 0.5 * a * b;
    std::cout << S;
}