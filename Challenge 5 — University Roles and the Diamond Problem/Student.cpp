#include "Student.h"

Student::Student(const std::string& name, const std::string& email, int studentID)
    : Person(name, email), studentID(studentID) {
}

Student::~Student() {
}

void Student::displayStudent() const {
    std::cout << "\nStudent ID: " << studentID << std::endl;
}
