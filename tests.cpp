//
// Created by 1 on 10.09.2026.
//
#include <gtest/gtest.h>
#include "Triangle.h"

// Проверяем конструктор и геттеры
TEST(TriangleTest, Constructor) {
    Triangle triangle(10, 5);

    EXPECT_DOUBLE_EQ(triangle.getSide(), 10);
    EXPECT_DOUBLE_EQ(triangle.getHeight(), 5);
}

// Проверяем площадь
TEST(TriangleTest, Area) {
    Triangle triangle(10, 5);

    EXPECT_DOUBLE_EQ(triangle.getArea(), 25);
}

// Проверяем сеттер стороны
TEST(TriangleTest, SetSide) {
    Triangle triangle(10, 5);

    triangle.setSide(20);

    EXPECT_DOUBLE_EQ(triangle.getSide(), 20);
}

// Проверяем сеттер высоты
TEST(TriangleTest, SetHeight) {
    Triangle triangle(10, 5);

    triangle.setHeight(15);

    EXPECT_DOUBLE_EQ(triangle.getHeight(), 15);
}

// Неверная сторона должна вызвать исключение
TEST(TriangleTest, InvalidSide) {
    EXPECT_THROW(Triangle(-10, 5), std::invalid_argument);
}

// Неверная высота должна вызвать исключение
TEST(TriangleTest, InvalidHeight) {
    EXPECT_THROW(Triangle(10, 0), std::invalid_argument);
}