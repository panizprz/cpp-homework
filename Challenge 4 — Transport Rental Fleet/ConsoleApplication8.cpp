//Challenge 4 — Transport Rental Fleet
//Focus: Hierarchical inheritance | 15 points

#include <iostream>
#include "Car.h"
#include "Motorcycle.h"

int main() {
    Car car1("BMW", "320i", 80, 5, 4);
    Motorcycle motorcycle1("Yamaha", "R3", 40, 321, true);

    std::cout << "CAR INFORMATION:" << std::endl;
    car1.displayCarDetails();

    std::cout << "1 Day Rental: $" << car1.calculateRentalCost(1) << std::endl;
    std::cout << "5 Days Rental: $" << car1.calculateRentalCost(5) << std::endl;

    std::cout << "\nMOTORCYCLE INFORMATION:" << std::endl;
    motorcycle1.displayMotorcycleDetails();

    std::cout << "1 Day Rental: $" << motorcycle1.calculateRentalCost(1) << std::endl;
    std::cout << "5 Days Rental: $" << motorcycle1.calculateRentalCost(5) << std::endl;

    return 0;
}
