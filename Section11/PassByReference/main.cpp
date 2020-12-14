#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int &num);
void pass_by_value2(string &s);
void pass_by_value3(vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_value1(int &num) {
    num = 1000;
}

void pass_by_value2(string &s) {
    s = "Changed";
}

void pass_by_value3(vector<string> &v) {
    cout << "pass_by_value3 stooges before: ";
    print_vector(v);
     v.clear(); // delete all elements;
    cout << "pass_by_value3 stooges after: ";
    print_vector(v);
    
}

void print_vector(const vector<string> &v) {
    for (auto s: v)
        cout << s << " ";
    cout << endl;
}

int main( )
{
    int num {10};
    int another_num {20};
    cout << "num before: " << num << endl;
    pass_by_value1(num);
    cout << "num after: " << num << endl;

    cout << "\nathother_num before: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after: " << another_num << endl;
    
    string name {"Michael"};
    cout << "\nname before: " << name << endl;
    pass_by_value2(name);
    cout << "\nname after: " << name << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after: ";
    print_vector(stooges);
    
    return 0;
}