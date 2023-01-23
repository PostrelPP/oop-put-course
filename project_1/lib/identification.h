#ifndef IDENTIFICATION_H_INCLUDED
#define IDENTIFICATION_H_INCLUDED
using namespace std;

class Identification{
public:
    int pesel;
    string name;
    string skill;
    Identification(string name, int pesel, string skill)
{this->name = name; this->pesel = pesel; this->skill = skill;}
};

#endif // IDENTIFICATION_H_INCLUDED
