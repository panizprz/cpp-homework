#include "Motorcycle.h"

Motorcycle::Motorcycle(const std::string& brand, const std::string& model, double pricePerDay, int engineCapacity, bool helmetIncluded)
    : Vehicle(brand, model, pricePerDay), engineCapacity(engineCapacity), helmetIncluded(helmetIncluded) {

}

Motorcycle::~Motorcycle() {

}

void Motorcycle::displayMotorcycleDetails() const {
    displayCommonInfo();
    std::cout << "Engine Capacity: " << engineCapacity << " cc" << std::endl;
    std::cout << "Helmet Included: " << (helmetIncluded ? "Yes" : "No") << std::endl;
}

double Motorcycle::calculateRentalCost(int days) const {
    return getPricePerDay() * days;
}
