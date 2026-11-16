
#include "CertifiedStudent.h"

CertifiedStudent::CertifiedStudent(const std::string& name, const std::string& email, const std::string& courseTitle, int certificateID, int finalScore)
    : CourseStudent(name, email, courseTitle), certificateID(certificateID), finalScore(finalScore) {

}

CertifiedStudent::~CertifiedStudent() {

}

void CertifiedStudent::displayCertificate() const {
    std::cout << "Certificate ID: " << certificateID << std::endl;
    std::cout << "Final Score: " << finalScore << std::endl;

    if (finalScore >= 60) {
        std::cout << "Status: Passed" << std::endl;
    }
    else {
        std::cout << "Status: Failed" << std::endl;
    }
}
