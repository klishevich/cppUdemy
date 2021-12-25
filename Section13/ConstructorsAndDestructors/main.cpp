#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string name_val) {
        name = name_val;
    }
    // Overloaded constructors
    Player() {
        cout << "No args constructor" << endl;
    }
    Player(string _name) {
        name = _name;
        cout << "Name arg constructor: " << _name << endl;
    }
    Player(string _name, int _health, int _xp) {
        name = _name;
        health = _health;
        xp = _xp;
        cout << "Name, health, xp args constructor" << endl;
    }
    ~Player() {
        cout << "Destructor" << endl;
    }
};

int main( )
{
    {
        Player slayer;
        slayer.set_name("Slayer");
        
    }
    
    {
        Player mike;
        mike.set_name("Mike");

        Player hero("Hero");
        // This also works
        // Player hero {"Hero"};

        Player villain("Villain", 100, 12);
        // This also works
        // Player villain {"Villain", 100, 12};
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *boss = new Player("Boss", 1000, 300);
    
    delete enemy;
    delete boss;
 
    cout << "Testing constructors and destructors" << endl;
    return 0;
}