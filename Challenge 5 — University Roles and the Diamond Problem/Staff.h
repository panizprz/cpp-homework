#pragma once

#include "Person.h"

class Staff : virtual public Person {
private:
    int employeeID;

public:
    Staff(const std::string&, const std::string&, int);
    ~Staff();

    void displayStaff() const;
};

