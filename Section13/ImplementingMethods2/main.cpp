#include <iostream>
#include <string>
#include "account.h"
#include "MyAccount.h"

using namespace std;

int main( )
{
    MyAccount mike_account;
    mike_account.set_name("Mike's account");
    mike_account.set_balance(1000);
    
    if (mike_account.deposit(200))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit not OK" << endl;

    if (mike_account.withdraw(500))
        cout << "Withdraw OK" << endl;
    else
        cout << "Withdraw not OK" << endl;

    cout << "Current balance " << mike_account.get_balance() << endl;

    if (mike_account.withdraw(1500))
        cout << "Withdraw 2 OK" << endl;
    else
        cout << "Withdraw 2 not OK" << endl; 
    
    cout << "Current balance " << mike_account.get_balance() << endl;
    return 0;
}