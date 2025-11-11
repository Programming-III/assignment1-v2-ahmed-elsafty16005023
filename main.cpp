#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

void Person::display() {
    cout << getName() << " (ID: " << getId() << ")" << endl;
}






// ==================== Student Class Implementation ====================

void Student::display() {
    cout << "Student Info:" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Year: " << yearLevel << endl;
    cout << "Major: " << major << endl;
}




// ==================== Instructor Class Implementation ====================

void Instructor::display() {
    cout << "Instructor Info:" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Department: " << department << endl;
    cout << "Experience: " << experienceYears << " years" << endl;
}




// ==================== Course Class Implementation ====================

void Course::addStudent(const Student&s) {
    if (currentStudents == maxStudents) {
        cout << "The maximum number of students to be enrolled in this course have been reached, you cannot be enrolled in this course" << endl;
        return;
    }

    students[currentStudents] = s;
    currentStudents++;
}

void Course::displayCourseInfo() {
    cout << "Course: " << courseCode << " -" << courseName;
    cout << "Max Students: " << maxStudents;
    cout << "Currently Enrolled: ";
    for (int i = 0; i < currentStudents; i++) {
        students[i].display();
    }
}






// ==================== Main Function ====================
int main() {
    Course* course = new Course("CS101", "Introduction to Programming", 3);
    Student* s1 = new Student("Omar Nabil", 2202, 2, "Informatics");
    Instructor* i1 = new Instructor("Dr. Lina Khaled", 1002, "Computer Science", 5);

    course->addStudent(*s1);

    course->displayCourseInfo();

    i1->display();

    s1->display();

    return 0;
}
