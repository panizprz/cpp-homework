#pragma once

#include "User.h"

class CourseStudent : public User
{
private:
    std::string courseTitle;
public:
    CourseStudent(const std::string&, const std::string&, const std::string&);
    ~CourseStudent();

    void displayCourse() const;

};

