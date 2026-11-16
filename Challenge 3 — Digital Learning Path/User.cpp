#include "User.h"

User::User(const std::string& name, const std::string& email) : name(name), email(email) {

}

User::~User() {

}

void User::displayUser() const {
    std::cout << "\nName: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;
}