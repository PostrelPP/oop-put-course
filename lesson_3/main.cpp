#include <iostream>
using namespace std;

class Adder{

   private:
      string backpack;
   public:
      Adder(string i = ""){
         backpack = i;
      }

      void addItem(string item){
         backpack += " " + item;
      }

      string getList(){
         return backpack;
      }
};

int main(){
   Adder stuff;

   stuff.addItem("Phone");
   stuff.addItem("Map");
   stuff.addItem("Lunch");

   cout << "Items in backpack:" << stuff.getList() << endl;
   return 0;
}
