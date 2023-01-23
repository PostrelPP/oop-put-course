#include <iostream>
#include <vector>
#include <string>
#include "../../lib/database.h"
using namespace std;

void Database::displayInformation(){
        cout << "Subject: " << db_name << endl;
        cout << "Professors: ";
        for(Professor &p : professors){
            cout << p.name << ", ";
        }
        cout << "\nStudents: ";
        for(Student &s : students){
            cout << s.name << ", ";
        }
        cout << endl;
    }
void Database::displayPersonnel(){
        cout << "Professors: " << professors.size() << endl;
        cout << "Students: " << students.size() << endl;
        cout << db_name << " capacity: " << capacity << endl;
        cout << "Free slots: " << capacity - professors.size() - students.size() << endl;
    }
