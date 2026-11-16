#pragma once

#include "CourseStudent.h"

class CertifiedStudent : public CourseStudent
{
private:
    int certificateID;
    int finalScore;
public:
    CertifiedStudent(const std::string&, const std::string&, const std::string&, int, int);
    ~CertifiedStudent();

    void displayCertificate() const;
};
