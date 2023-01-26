#include <iostream>
using namespace std;

class Laptop{
public:
    virtual int check() = 0;
};

class Battery: public Laptop{
private:
    int batteryLevel;
public:
    int check(){
        return batteryLevel;
    }
    Battery(int bl){
        batteryLevel = bl;
    }
    Battery charge(int bat){
        return Battery(batteryLevel = bat);
    }
};

int main(){
    Battery deadBattery(0);
    Battery laptopCharger = deadBattery.charge(20);
    int a = laptopCharger.check();
    cout << "You have a "<< a << "% of battery capacity." << endl;
    return 0;
}
