#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "identification.h"
using namespace std;

class Student :
public Identification{
public:
    string skill;
    Student(string name, int pesel, string skill) :
        Identification(name, pesel, skill){}
    Student() = default;
};

#endif // STUDENT_H_INCLUDED
