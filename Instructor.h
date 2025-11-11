#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor : public Person {
private:
    string department;
    int experienceYears;

public:
    Instructor(string name, int id, string department, int experienceYears) : Person(name,id) {
        this->department = department;
        this->experienceYears = experienceYears;
    }
    Instructor() {

    }
    ~Instructor() {

    }
    void display();
};












#endif
