//
// Created by 1 on 10.09.2026.
//

#ifndef TESTREPOS_TRIANGLE_H
#define TESTREPOS_TRIANGLE_H
class Triangle {
private:
    double side;
    double height;

public:
    Triangle(double, double);

    void setSide(double);

    void setHeight(double);

    double getSide() const;

    double getHeight() const;

    double getArea() const;
};
#endif //TESTREPOS_TRIANGLE_H
