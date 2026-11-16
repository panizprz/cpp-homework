#pragma once

#include <iostream>

class Shape {
public:
    Shape();
    virtual ~Shape();

    virtual double area() const = 0;
};
