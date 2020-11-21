#include <iostream>
#include <string>
using namespace std;

int main( )
{
    string s0;
    cout << "Enter a string: ";
    cin >> s0;
    cout << "Your string is " + s0 << endl;
    int pyramid_length = s0.length();
    cout << "Your string length " << pyramid_length << endl;
    
    for (int i {0}; i< pyramid_length; i++)
    {
        int padding = pyramid_length - 1 - i;
        for (int j {0}; j<padding; j++)
            cout << " ";
        int symbols = i + 1;
        for (int j {0}; j<symbols; j++)
            cout << s0.at(j);
        for (int j {symbols-2}; j>=0; j--)
            cout << s0.at(j);
        cout << endl;
    } 
    return 0;
}