//Challenge 5 — University Roles and the Diamond Problem
//Focus: Hybrid inheritance + virtual inheritance | 20 points

#include <iostream>
#include "TeachingAssistant.h"

int main() {
    TeachingAssistant assistant1(
        "Paniz",
        "panizprzeua@university.eua",
        1001,
        2005,
        "C++ Programming",
        12
    );

    std::cout << "TEACHING ASSISTANT INFORMATION:" << std::endl;

    assistant1.displayTeachingAssistant();

    std::cout << "\nDIRECT ACCESS:" << std::endl;
    std::cout << "Name: " << assistant1.getName() << std::endl;
    std::cout << "Email: " << assistant1.getEmail() << std::endl;

    return 0;
}
