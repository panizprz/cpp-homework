#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(const std::string& name, const std::string& email, int studentID, int employeeID, const std::string& course, int weeklyHours)
    : Person(name, email),
    Student(name, email, studentID),
    Staff(name, email, employeeID),
    course(course),
    weeklyHours(weeklyHours) {
}

TeachingAssistant::~TeachingAssistant() {
}

void TeachingAssistant::displayTeachingAssistant() const {
    displayPerson();
    displayStudent();
    displayStaff();

    std::cout << "\nCourse: " << course << std::endl;
    std::cout << "Weekly Assistance Hours: " << weeklyHours << std::endl;

    std::cout << "Shared Name: " << getName() << std::endl;
    std::cout << "Shared Email: " << getEmail() << std::endl;
}

// Without virtual inheritance, TeachingAssistant would contain two Person sub objects, making direct access to Person members ambiguous.