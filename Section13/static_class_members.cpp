#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
private:
    static int num_players;

public:
    static int get_num_players();

    string name;
    int health;
    int xp;
    Player(string n, int h, int e);
    void set_name(string name);
    string get_name() const;
    ~Player();
};

int Player::num_players = 0;

int Player::get_num_players() {
    return num_players;
};

Player::Player(string _n, int _h, int _xp) : name {_n}, health {_h}, xp {_xp} {
    ++num_players;
};

void Player::set_name(string name) {
    this->name = name;
};

string Player::get_name() const {
    return name;
};

Player::~Player() {
    --num_players;
}

int main( )
{
    cout << "Num players before " << Player::get_num_players() << endl;

    {
        const Player p = Player("Villain", 10, 5);

        // p.set_name("Good Guy");

        cout << "Player " << p.get_name() << " " << p.health << " " << p.xp << endl;

        cout << "Num players after " << Player::get_num_players() << endl;
    }

    cout << "Num players finally " << Player::get_num_players() << endl;

    return 0;
}