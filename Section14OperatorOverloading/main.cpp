// #include <iostream>
#include "MyString.h"
#include "MyString.cpp"

int main( )
{
    MyString empty;
    MyString mike("Michael");
    MyString stooge {mike};

    empty.display();
    mike.display();
    stooge.display();
    return 0;
}