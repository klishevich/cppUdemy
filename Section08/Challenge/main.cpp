#include <iostream>
using namespace std;

int main( )
{
    int cents {}, dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
    cout << "Enter an amount in cents: ";
    cin >> cents;
    dollars = cents / 100;
    cents %= 100;
    quarters = cents / 25;
    cents %= 25;
    dimes = cents / 10;
    cents %= 10;
    nickels = cents / 5;
    pennies = cents % 5;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    return 0;
}