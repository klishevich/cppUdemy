#include <iostream>

using namespace std;
int age {18}; // Global variable

int main( )
{
    int age {21}; // Local variable, first compiler looks locally
    cout << age << endl;
    return 0;
}