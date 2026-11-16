#include "CourseStudent.h"

CourseStudent::CourseStudent(const std::string& name, const std::string& email, const std::string& courseTitle)
    : User(name, email), courseTitle(courseTitle) {

}

CourseStudent::~CourseStudent() {

}

void CourseStudent::displayCourse() const {
    std::cout << "Course: " << courseTitle << std::endl;
}