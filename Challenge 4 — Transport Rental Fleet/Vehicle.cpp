
#include "Vehicle.h"

Vehicle::Vehicle(const std::string& brand, const std::string& model, double pricePerDay)
    : brand(brand), model(model), pricePerDay(pricePerDay) {

}

Vehicle::~Vehicle() {

}

double Vehicle::getPricePerDay() const {
    return pricePerDay;
}

void Vehicle::displayCommonInfo() const {
    std::cout << "\nBrand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Price per day: $" << pricePerDay << std::endl;
}
