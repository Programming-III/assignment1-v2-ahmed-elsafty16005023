#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student : public Person {
private:
    int yearLevel;
    string major;

public:
    Student(string name, int id, int yearLevel, string major) : Person(name, id) {
        this->yearLevel = yearLevel;
        this->major = major;
    }
    Student() {

    }
    ~Student() {

    }
    void display();
};













#endif
