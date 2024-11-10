#include <iostream>
using namespace std;

int main( )
{
    cout << "Hello" << endl;
    cout << "\nEnter the number of rooms?"<< endl;
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    const double price_per_room {32.5};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of room: " << number_of_rooms << endl;
    cout << "Price per room: $30 " << endl;
    cout << "Cost: $" <<  price_per_room*number_of_rooms << endl;
    cout << "Tax: $" <<  price_per_room*number_of_rooms*sales_tax << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: $" << (price_per_room*number_of_rooms) +(price_per_room*number_of_rooms*sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    return 0;
}