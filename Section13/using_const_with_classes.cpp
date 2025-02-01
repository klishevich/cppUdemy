#include <iostream>
#include <string>
#include <vector>

using namespace std;

void func1(int &&num) {
    cout << "func 1 r_value: " << num << endl;
}

void func1(int &num) {
    cout << "func 1 l_value: " << num << endl;
}

class Player {
public:
    string name;
    int health;
    int exp;
    void set_name(string name) { this->name = name; };
    string get_name() const { return name; };
    Player(string n, int h, int e) {name = n; health = h; exp = e; };
};


int main( )
{
    const Player p = Player("Villain", 10, 5);

    // p.set_name("Good Guy");

    cout << "Player " << p.get_name() << " " << p.health << " " << p.exp << endl;

    return 0;
}