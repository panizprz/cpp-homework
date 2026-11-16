
#include "Car.h"

Car::Car(const std::string& brand, const std::string& model, double pricePerDay, int passengerCapacity, int numberOfDoors)
    : Vehicle(brand, model, pricePerDay), passengerCapacity(passengerCapacity), numberOfDoors(numberOfDoors) {

}

Car::~Car() {

}

void Car::displayCarDetails() const {
    displayCommonInfo();
    std::cout << "Passenger Capacity: " << passengerCapacity << std::endl;
    std::cout << "Number of Doors: " << numberOfDoors << std::endl;
}

double Car::calculateRentalCost(int days) const {
    return getPricePerDay() * days;
}
