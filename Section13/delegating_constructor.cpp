#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    // Player() {
    //     name = "Noname";
    //     health = 100;
    //     xp = 3;
    // }
    // Player(): name {"Noname"}, health {100}, xp {3} {}
    // DELEGATING CONSTRUCTOR works only in initialization lists!
    Player(): Player("Noname2", 100, 3) {}

    // Player(string _name): name {_name}, health {100}, xp {3} {}
    Player(string _name): Player(_name, 100, 3) {}

    Player(string _name, int _health, int _xp): name {_name}, health {_health}, xp {_xp} {}
    void set_name(string name_val) {
        name = name_val;
    }
    string get_name() {
        return name;
    }
};

int main( )
{
	Player noname;
	cout << noname.get_name() << endl;
    Player mike {"Mike"};
    cout << mike.get_name() << endl;
    Player john {"John"};
    cout << john.get_name() << endl;

    Player hero;
    return 0;
}