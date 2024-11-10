#include <iostream>
#include <vector>
using namespace std;

int main( )
{
    vector<int> numbers {};
    while (true) {
        cout << "P - Print list" << endl;
        cout << "A - Add element" << endl;
        cout << "M - Calculate mean" << endl;
        cout << "S - Display the smallest" << endl;
        cout << "L - Display the largest" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        
        char choice {};
        cin >> choice;
//        cout << endl;
//        cout << "Your choice: " << choice;
        
        if (choice == 'Q')
            break;
        if (choice == 'P') {
            if (numbers.size() == 0) {
                cout << "[]";
            } else {
                cout << "[";
                for (auto el: numbers)
                    cout << el << ",";
                cout << "]";
            }
        }
        if (choice == 'A') {
            cout << "Enter element: ";
            int el;
            cin >> el;
            numbers.push_back(el);
        }
        if (choice == 'M') {
            int sum {0};
            for (auto el: numbers)
                sum += el;
            double mean = (double)sum/numbers.size();
            cout << "Mean is: " << mean;
        }
        if (choice == 'S') {
            int small {};
            if (numbers.size() == 0) {
                cout << "No data...";
            } else {
                small = numbers[0];
            }
            for (auto el: numbers)
                if (el < small)
                    small = el;
            cout << "The smallest is: " << small;
        }
        cout << endl;
    }
    
    return 0;
}