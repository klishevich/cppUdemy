#include <iostream>
using namespace std;

int main( )
{
    cout << "Ender the width of the room: ";
    int room_width {0};
    cin >> room_width;
    cout << "Ender the length of the room: ";
    int room_length {0};
    cin >> room_length;
    int room_area = room_width * room_length;
    cout << "The area is " << room_area << " square meters" << endl;
    return 0;
}