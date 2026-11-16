#pragma once

#include "Vehicle.h"

class Car : public Vehicle
{
private:
    int passengerCapacity;
    int numberOfDoors;

public:
    Car(const std::string&, const std::string&, double, int, int);
    ~Car();

    void displayCarDetails() const;
    double calculateRentalCost(int ) const;
};
