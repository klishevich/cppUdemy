#include <iostream>
using namespace std;

int main( )
{
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};
    
    cout << "Enter 3 integer separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;
    double average {0.0};
    average = static_cast<double>(total)/ count;
    
    cout << "Numbers were: " << num1 << ", "<< num2 << ", " << num3 << endl;
    cout << "The sum is: " << total << endl;
    cout << "The average is: " << average << endl;
    // cout << std::noboolalpha; // default 1
    cout << std::boolalpha; // true
    cout << true << endl;
    return 0;
}