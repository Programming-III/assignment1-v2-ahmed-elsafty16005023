#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course{
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;

public:
    Course(string courseCode, string courseName, int maxStudents) {
        this->courseCode = courseCode;
        this->courseName = courseName;
        this->maxStudents = maxStudents;
        this->students = new Student[maxStudents];
        this->currentStudents = 0;
    }
    Course() {
        this->courseCode = "0";
        this->courseName = "NAN";
        this->maxStudents = 0;
    }

    ~Course() {
        delete [] students;
    }

    int getMaxStudents() {
        return maxStudents;
    }
    void addStudent(const Student& s);
    void displayCourseInfo();
};














#endif
