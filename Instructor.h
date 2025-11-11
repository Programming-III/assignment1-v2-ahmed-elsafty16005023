#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Person {
private:
    string name;
    int id;

public:
    Person(string name, int id) {
        this->name = name;
        this->id = id;
    }
    Person() {
        name = "none";
        id = 0;
    }
    ~Person() {

    }

    string getName() {
        return name;
    }
    int getId() {
        return id;
    }

    void display();
};












#endif
