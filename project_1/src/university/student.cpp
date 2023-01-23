#include <iostream>
#include <vector>
#include <string>
#include "../../lib/student.h"
using namespace std;

void addStudent(vector<Student> &students){
    string full_name, name, surname, skill;
    int pesel;
    cout << endl << "Name: ";
    cin >> name;
    cout << endl << "Surname: ";
    cin >> surname;
    full_name = name + " " + surname;
    cout << endl << "PESEL: ";
    cin >> pesel;
    cout << endl << "Skill: ";
    cin >> skill;
    getline(cin, skill);
    Student s1(full_name, pesel, skill);
    students.push_back(s1);
}
void removeStudent(vector <Student> &students){
    int number;
    for(int i = 0; i < students.size(); i++)
        cout << i << ". " << students[i].name << endl;
    cout << "Remove student with number: ";
    cin >> number;
    try{
        if ((number >= 0) && (number < students.size())){
          students.erase(students.begin() + number);
          cout << "Successfully removed! \n\n";
        }
        else{
        throw number;
        }
    }
    catch(int number){
        cerr << "Error. Wrong number! \n\n";
    }
}
