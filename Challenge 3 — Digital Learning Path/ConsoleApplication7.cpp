//Challenge 3 — Digital Learning Path
//Focus: Multilevel inheritance | 15 points

#include <iostream>
#include "CertifiedStudent.h"

int main() {
    CertifiedStudent student1("Paniz", "paniz.prz@email.com", "Python Programming", 1001, 85);
    CertifiedStudent student2("Alex", "alex@email.com", "C++ Programming", 1002, 45);

    std::cout << "Student 1:" << std::endl;
    student1.displayUser();
    student1.displayCourse();
    student1.displayCertificate();

    std::cout << "\nStudent 2:" << std::endl;
    student2.displayUser();
    student2.displayCourse();
    student2.displayCertificate();

    return 0;
}
