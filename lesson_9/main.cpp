#include <iostream>
#include <assert.h>
#include <memory>
using namespace std;

class Game{
public:
    virtual string result() = 0;
};


class FakeFootballGame: public Game{
public:
    string result() override{
        return "2 - 0";
    }
};

int main(){
    auto game = unique_ptr<Game>( new FakeFootballGame );

    assert(game->result() == "2 - 0");
    cout << "Well nice!" << endl;
    assert(game->result() == "3 - 5");
    cout << "Well nice!" << endl;
    return 0;
}
