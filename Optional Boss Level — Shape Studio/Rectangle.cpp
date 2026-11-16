#include "Rectangle.h"
#include <stdexcept>

Rectangle::Rectangle(double length, double width)
    : length(length), width(width) {
    if (length <= 0 || width <= 0) {
        throw std::invalid_argument("Rectangle dimensions must be positive");
    }
}

Rectangle::~Rectangle() {
}

double Rectangle::area() const {
    return length * width;
}
