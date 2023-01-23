#include <iostream>
#include <vector>
#include "../lib/Interface.h"
#include "../lib/identification.h"
#include "../lib/student.h"
#include "../lib/database.h"
#include "../src/university/professor.cpp"
#include "../src/university/student.cpp"
#include "../src/university/database.cpp"
using namespace std;

int main(){
    vector <Student> s_mathematics;
    vector <Student> s_physics;
    vector <Student> s_psychology;
    vector <Professor> p_mathematics;
    vector <Professor> p_physics;
    vector <Professor> p_psychology;

    Student s1("Magnus Carlsen", 225973, "High chess skill");
    Student s2("Marcin Sowa", 300428, "Ball hit calculation");
    Student s3("Sergei Mavrodi", 422451, "Mastery of the lie");
    Student s4("Jordan Belfort", 480072, "Master of marketing");
    s_mathematics.push_back(s1);
    s_physics.push_back(s2);
    s_psychology.push_back(s3);
    s_psychology.push_back(s4);

    Professor p1("Zdzislaw Krygowski", 100001, "Mathematics");
    Professor p2("Stephen Hawking", 200001, "Physics");
    Professor p3("Alison Gopnik", 300001, "Psychology");
    p_mathematics.push_back(p1);
    p_physics.push_back(p2);
    p_psychology.push_back(p3);

    int choice = 0;
    vector <string> mainOptions = {"Full information about university", "Add Student",
        "Remove Student", "Add Professor", "Remove Professor"};
    Interface main(mainOptions);
    while (choice != mainOptions.size()){
        choice = main.display();
    switch(choice){
        case 0:
        {
            Database mathematics(10, "Mathematics", p_mathematics, s_mathematics);
            Database physics(10, "Physics", p_physics, s_physics);
            Database psychology(10, "Psychology", p_psychology, s_psychology);
            mathematics.displayPersonnel();
            mathematics.displayInformation();
            cout << endl;
            physics.displayPersonnel();
            physics.displayInformation();
            cout << endl;
            psychology.displayPersonnel();
            psychology.displayInformation();

            cout << endl;
            break;
        }
        case 1:
        {
            vector <string> options = {"Add Student to mathematics",
                "Add Student to physics","Add Student to psychology"};
            Interface o1(options);
            int choice_s = o1.display();
            switch (choice_s) {
                case 0:
                    addStudent(s_mathematics);
                    break;
                case 1:
                    addStudent(s_physics);
                    break;
                case 2:
                    addStudent(s_psychology);
                    break;
                default:
                    break;
            }
            break;
        }
        case 2:
        {
            vector <string> options = {"Remove Student from mathematics",
            "Remove Student from physics","Remove Student from psychology"};
            Interface o2(options);
            int choice_s = o2.display();
            switch (choice_s) {
                case 0:
                    removeStudent(s_mathematics);
                    break;
                case 1:
                    removeStudent(s_physics);
                    break;
                case 2:
                    removeStudent(s_psychology);
                    break;
                default:
                    break;
            }
            break;
        }
        case 3:
        {
            vector <string> options = {"Add Professor to mathematics",
                "Add Professor to physics", "Add Professor to psychology"};
            Interface o3(options);
            int choice_p = o3.display();
            switch (choice_p){
                case 0:
                    addProfessor(p_mathematics);
                    break;
                case 1:
                    addProfessor(p_physics);
                    break;
                case 2:
                    addProfessor(p_psychology);
                    break;
                default:
                    break;
            }
            break;
        }
        case 4:
        {
            vector <string> options = {"Remove Professor from mathematics",
                "Remove Professor from physics", "Remove Professor from psychology"};
            Interface o4(options);
            int choice_p = o4.display();
            switch (choice_p) {
                case 0:
                    removeProfessor(p_mathematics);
                    break;
                case 1:
                    removeProfessor(p_physics);
                    break;
                case 2:
                    removeProfessor(p_psychology);
                    break;
                default:
                    break;
            }
        }
        default:
        {
            break;
        }
    }}
    return 0;
}
