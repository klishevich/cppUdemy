#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    Player() {
        name = "Noname";
        health = 100;
        xp = 3;
    }
    Player(string _name, int _health, int _xp) {
        name = _name;
        health = _health;
        xp = _xp;
    }
    void set_name(string name_val) {
        name = name_val;
    }
    string get_name() {
        return name;
    }
};

int main( )
{
    Player mike {"Mike",100,13};
    mike.set_name("Mike");
    cout << mike.get_name() << endl;

    Player hero;
    return 0;
}