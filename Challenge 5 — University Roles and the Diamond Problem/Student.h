#pragma once

#include "Person.h"

class Student : virtual public Person {
private:
    int studentID;

public:
    Student(const std::string&, const std::string&, int);
    ~Student();

    void displayStudent() const;
};
