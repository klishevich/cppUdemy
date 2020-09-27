#include <iostream>

using namespace std;

int main( )
{
    int num1 {10}; // initialization not assignment!!!
    int num2 {20};
    
    num1 = 123; // num1 equals 100
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    return 0;
}