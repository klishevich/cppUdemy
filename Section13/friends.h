#include <string>

using namespace std;

class Player {
private:
    friend void display_player(Player &p);
    string name;
    int health;
    int xp;
public:
    Player(string _name = "Noname3", int _health = 100, int _xp = 3);
    void get_name();
};

class OtherClass {
public:
    void display_player(Player &p);
};

void display_player(Player &p) {
    p.get_name();
}