#pragma once

#include "Student.h"
#include "Staff.h"

class TeachingAssistant : public Student, public Staff {
private:
    std::string course;
    int weeklyHours;

public:
    TeachingAssistant(const std::string&, const std::string&, int, int, const std::string&, int);
    ~TeachingAssistant();

    void displayTeachingAssistant() const;
};
