#include "MyAccount.h"

void MyAccount::set_name(std::string n) {
    name = n;
}

std::string MyAccount::get_name() {
    return name;
}

bool MyAccount::deposit(double amount) {
    balance += amount;
    return true;
}

bool MyAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        return true;
    }
    return false;
}