#include "Circle.h"
#include <stdexcept>

Circle::Circle(double radius) : radius(radius) {
    if (radius <= 0) {
        throw std::invalid_argument("Radius must be positive");
    }
}

Circle::~Circle() {
}

double Circle::area() const {
    return 3.14159 * radius * radius;
}
