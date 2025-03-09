// #include <iostream>
#include "MyString.h"
#include "MyString.cpp"

int main( )
{
    // MyString empty;
    // MyString mike("Michael");
    // MyString stooge {mike};

    // empty.display();
    // mike.display();
    // stooge.display();

    MyString a {"Hello"};
    MyString c {"HelloC"};
    a.display();
    MyString b;
    b = a;
    b.display();
    b = "This is a test";
    b.display();
    a.display();
    return 0;
}