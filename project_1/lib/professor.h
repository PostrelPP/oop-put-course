#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
#include "identification.h"
using namespace std;

class Professor :
    public Identification{
public:
    string skill;
    Professor(string name, int pesel, string skill) :
        Identification(name, pesel, skill){};
};

#endif // PROFESSOR_H_INCLUDED
