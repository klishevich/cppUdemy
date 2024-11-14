#include <iostream>
#include <string>
#include <vector>

using namespace std;

void func1(int &&num) {
    cout << "func 1 r_value: " << num << endl;
}

void func1(int &num) {
    cout << "func 1 l_value: " << num << endl;
}

class Move {
private:
    int* m_pData;
public:
    void set_data_value(int d) { *m_pData = d; }
    int get_data_value() { return *m_pData; }
    Move(int d); // Constructor
    Move(const Move& source); // Copy Constructor
    Move(Move&& source); // Move Constructor
    ~Move(); // Destructor
};

Move::Move(int d) {
    m_pData = new int;
    *m_pData = d;
    cout << "constructor " << *m_pData << endl;
}

Move::Move(const Move& source) {
    m_pData = new int;
    *m_pData = *source.m_pData;
    cout << "copy constructor " << *m_pData << endl;
}

// Move constructor
Move::Move(Move &&source): m_pData {source.m_pData} {
    cout << "move constructor " << *source.m_pData << endl;
    source.m_pData = nullptr;
}

Move::~Move() {
    cout << "destructor " << *m_pData << endl;
    delete m_pData;
    m_pData = nullptr;
}

int main( )
{
    // int x {100};
    // int &l_ref = x;
    // l_ref = 10;
    // cout << l_ref << endl;

    // int &&r_ref = 200;
    // r_ref = 300;
    // cout << r_ref << endl;

    // func1(300);
    // func1(x);

    // int &&l_ref = x;

    vector<Move> vec;
    vec.push_back(Move(10)); // copy constructor being called
    vec.push_back(Move(20)); // copy constructor being called
    // vec.push_back(Move(30)); // copy constructor being called

    return 0;
}