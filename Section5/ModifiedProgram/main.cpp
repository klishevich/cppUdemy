#include <iostream>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int favorite_number;
    cout << "Enter you favorite number between 1 and 100: ";
    cin >> favorite_number;
    cout << "Amazing!! That's my favorite number too! " << favorite_number << std::endl;
    return 0;
}