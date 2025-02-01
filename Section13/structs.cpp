#include <iostream>
#include <string>
#include <vector>

using namespace std;

// the default access is public
// Some general guidelines for using structs
// 1. Use structs for passive data with public access
// 2. Do not declare methods in struct
struct Person {
    string name;
    string get_name();
};

int main( )
{
    Person p;
    p.name = "Mike";
    cout << "Name " << p.name << endl;

    return 0;
}