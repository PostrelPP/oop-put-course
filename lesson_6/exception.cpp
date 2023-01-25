#include <iostream>
#include <vector>
using namespace std;

class Breakfast{
private:
    vector<string> drink = {"Tea", "Beer", "Juice", "Coca-Cola",
        "Energy Drink", "Coffee"};
public:
    void pool(){
        int i;
        cout << "Choose a drink: " << endl;

        for ( i = 0; i < drink.size() ; i++)
            cout << i << ": " << drink[i] << "   ";
        cout << "\nEnter a number: ";
        cin >> i;
        try{
            if (drink[i] != "Tea" && drink[i] != "Coffee" && drink[i] != "Juice" )
                throw logic_error("Not the healthiest drink for breakfast. You choose: " + drink[i]);
            cout << "Good choose for breakfast! You will drink: " << drink[i] << endl;
        }
        catch (logic_error &e){
            cerr << e.what() << endl;
        }
    }
};

int main(){
    Breakfast d;
    d.pool();
    return 0;
}
