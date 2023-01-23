#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Interface{
    vector<string> options;
public:
    Interface(vector<string> options){this -> options = options;}
    int display(){
        int option;
        cout<<"Select the option:" << endl;
        for(int i = 0; i < options.size(); i++){
            cout << i << ". "<<options[i] << endl;
        }
        cout << options.size() << ": " << "Exit" << endl;
        cout << "Your option: ";
        cin >> option;
        cout << endl;
        return option;
    }
};

#endif // INTERFACE_H_INCLUDED
