#pragma once

#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    std::string email;

public:
    Person(const std::string&, const std::string&);
    ~Person();

    void displayPerson() const;
    std::string getName() const;
    std::string getEmail() const;
};
