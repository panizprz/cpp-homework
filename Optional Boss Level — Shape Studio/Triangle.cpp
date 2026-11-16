#include "Triangle.h"
#include <stdexcept>

Triangle::Triangle(double base, double height)
    : base(base), height(height) {
    if (base <= 0 || height <= 0) {
        throw std::invalid_argument("Triangle dimensions must be positive");
    }
}

Triangle::~Triangle() {
}

double Triangle::area() const {
    return 0.5 * base * height;
}
