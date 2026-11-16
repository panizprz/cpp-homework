#pragma once

#include "Vehicle.h"

class Motorcycle : public Vehicle
{
private:
    int engineCapacity;
    bool helmetIncluded;

public:
    Motorcycle(const std::string&, const std::string&, double, int, bool);
    ~Motorcycle();

    void displayMotorcycleDetails() const;
    double calculateRentalCost(int days) const;
};
