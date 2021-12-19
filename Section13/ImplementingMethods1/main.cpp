#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    string name;
    double balance;
    
public:
    // declared inline
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }
    
    // will be declared outside the class declaration
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n) {
    name = n;
}

string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        return true;
    }
    return false;
}

int main( )
{
    Account mike_account;
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