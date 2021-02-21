#include <iostream>
#include <vector>
using namespace std;

void print_menu(char &choice);
void print_elements(const vector<int> &numbers);
void add_element(vector<int> &numbers);
void calc_mean(const vector<int> &numbers);
void calc_smallest(const vector<int> &numbers);
void calc_largest(const vector<int> &numbers);
char get_selection();

int main( )
{
    vector<int> numbers {};
    char choice {};

    while (true) {
        print_menu(choice);
        choice = get_selection();

        if (choice == 'Q')
            break;
        if (choice == 'P')
            print_elements(numbers);
        if (choice == 'A')
            add_element(numbers);
        if (choice == 'M')
            calc_mean(numbers);
        if (choice == 'S')
            calc_smallest(numbers);
        if (choice == 'L')
            calc_largest(numbers);
        cout << endl;
    }
    
    return 0;
}


void print_menu(char &choice) {
    cout << "P - Print list" << endl;
    cout << "A - Add element" << endl;
    cout << "M - Calculate mean" << endl;
    cout << "S - Display the smallest" << endl;
    cout << "L - Display the largest" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
    cout << "Enter your choice: ";
}

char get_selection() {
    char selection {};
    cin >> selection;
    return toupper(selection);
}

void print_elements(const vector<int> &numbers) {
    if (numbers.size() == 0) {
        cout << "[]";
    } else {
        cout << "[";
        for (auto el: numbers) cout << el << ",";
        cout << "]";
    }
}

void add_element(vector<int> &numbers) {
    cout << "Enter element: ";
    int el;
    cin >> el;
    numbers.push_back(el);
}


void calc_mean(const vector<int> &numbers) {
    int sum {0};
    for (auto el: numbers)
        sum += el;
    double mean = (double)sum/numbers.size();
    cout << "Mean is: " << mean;
}

void calc_smallest(const vector<int> &numbers) {
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

void calc_largest(const vector<int> &numbers) {
    int largest {};
    if (numbers.size() == 0) {
        cout << "No data...";
    } else {
        largest = numbers[0];
    }
    for (auto el: numbers)
        if (el > largest)
            largest = el;
    cout << "The lergest is: " << largest;
}
