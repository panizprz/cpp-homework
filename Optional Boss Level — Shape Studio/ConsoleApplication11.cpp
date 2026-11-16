//Optional Boss Level — Shape Studio
//Bonus: up to 10 extra points | Abstraction + run - time polymorphism


#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Triangle(8, 3);

    double totalArea = 0;

    for (int i = 0; i < 3; i++) {
        double currentArea = shapes[i]->area();

        std::cout << "Shape " << i + 1
            << " Area: " << currentArea << std::endl;

        totalArea += currentArea;
    }

    std::cout << "Total Area: " << totalArea << std::endl;


    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}
