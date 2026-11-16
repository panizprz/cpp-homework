#pragma once

#include "Shape.h"

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double, double);
    ~Rectangle();

    double area() const override;
};

