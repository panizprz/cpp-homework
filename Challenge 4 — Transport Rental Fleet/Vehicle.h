#pragma once

#include <iostream>
#include <string>

class Vehicle
{
private:
    std::string brand;
    std::string model;
    double pricePerDay;

public:
    Vehicle(const std::string&, const std::string&, double);
    ~Vehicle();

    double getPricePerDay() const;

    void displayCommonInfo() const;
};