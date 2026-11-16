#include "Person.h"

Person::Person(const std::string& name, const std::string& email)
    : name(name), email(email) {
}

Person::~Person() {
}

void Person::displayPerson() const {
    std::cout << "\nName: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;
}

std::string Person::getName() const {
    return name;
}

std::string Person::getEmail() const {
    return email;
}
