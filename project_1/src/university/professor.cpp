#include <iostream>
#include <vector>
#include <string>
#include "../../lib/professor.h"
using namespace std;

void addProfessor(vector <Professor> &professors){
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
    Professor p1(full_name, pesel, skill);
    professors.push_back(p1);
}
void removeProfessor(vector <Professor> &professors){
    int number;
    for(int i = 0; i < professors.size(); i++)
        cout << i << ". " << professors[i].name << endl;
    cout << "Remove professor with number: ";
    cin >> number;
    try{
        if ((number >= 0) && (number < professors.size())){
          professors.erase(professors.begin() + number);
          cout << "Successfully removed! \n\n ";
        }
        else{
        throw number;
        }
    }
    catch(int number){
        cerr << "Error. Wrong number! \n\n";
    }
}
