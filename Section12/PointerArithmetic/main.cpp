#include <iostream>

using namespace std;

int main( )
{
//    int scores[] {100,95,89,68,-1};
//    int *score_ptr {scores};
//    
//    while (*score_ptr != -1) {
//        cout << *score_ptr++ << endl;
//    }
    
    char name[] {"Frank"};
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    char_ptr1 = &name[0];
    char_ptr2 = &name[3];
    
    cout << "in the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
    
    cout << endl;
    
    return 0;
}