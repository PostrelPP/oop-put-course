#ifndef DATABASE_H_INCLUDED
#define DATABASE_H_INCLUDED
#include <vector>
#include <bits/stdc++.h>
#include "identification.h"
#include "professor.h"
#include "student.h"
using namespace std;

class Database{
private:
    int capacity;
    string db_name;
    vector <Professor> professors;
    vector <Student> students;
public:
    Database(int capacity_, string db_name_, vector <Professor> &professors_, vector <Student> &students_):
        capacity{capacity_}, db_name{db_name_}, professors{professors_}, students{students_}{}
    void displayInformation();
    void displayPersonnel();
};

#endif // DATABASE_H_INCLUDED
