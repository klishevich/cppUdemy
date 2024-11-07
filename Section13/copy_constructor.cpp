#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    Player(string _name = "Noname3", int _health = 100, int _xp = 3);
    Player(const Player& source);

    void set_name(string name_val) {
        name = name_val;
    }

    string get_name() {
        return name + " " + to_string(health) + " " + to_string(xp);
    }
};

Player::Player(string _name, int _health, int _xp) : name {_name}, health {_health}, xp {_xp} {}

Player::Player(const Player& source): name {source.name + "_copy"}, health {source.health}, xp {source.xp} {}

int main( )
{
	Player noname;
	cout << noname.get_name() << endl;
    Player mike {"Mike"};
    cout << mike.get_name() << endl;
    Player john {mike};
    cout << john.get_name() << endl;

    Player hero;
    return 0;
}