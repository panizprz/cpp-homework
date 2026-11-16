#include "Staff.h"

Staff::Staff(const std::string& name, const std::string& email, int employeeID)
    : Person(name, email), employeeID(employeeID) {
}

Staff::~Staff() {
}

void Staff::displayStaff() const {
    std::cout << "\nEmployee ID: " << employeeID << std::endl;
}
