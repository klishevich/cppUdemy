#include "friends.h"
#include <iostream>


Player::Player(string _name, int _health, int _xp) : name {_name}, health {_health}, xp {_xp} {}
void Player::get_name() {
    cout << this ->name << endl;
}

void OtherClass::display_player(Player &p) {
    p.get_name();
}

int main( )
{
    Player mike {"MIKE!!!"};
    OtherClass c1;
    c1.display_player(mike);

    Player john {"JOHN"};
    display_player(john);
    return 0;
}