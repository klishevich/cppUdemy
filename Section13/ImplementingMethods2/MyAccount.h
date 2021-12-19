#ifndef _MYACCOUNT_H_
#define _MYACCOUNT_H_
#include <string>

class MyAccount
{
private:
    std::string name;
    double balance;
    
public:
    // declared inline
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }
    
    // will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // _MYACCOUNT_H_
