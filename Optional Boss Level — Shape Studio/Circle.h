#pragma once

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double);
    ~Circle();

    double area() const override;
};

