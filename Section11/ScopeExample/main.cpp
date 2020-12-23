#include <iostream>

using namespace std;

void static_local_example() {
    static int num {5000}; // retains it value between calls
    cout << "\nLocal statuc num is: " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "\nLocal statuc num is: " << num << " in static_local_example - end" << endl;
}

int main( )
{
    int num {100}; // local to main
    int num1 {500};
    
    cout << "Local num is: " << num << " in main" << endl;
    
    
    {
        int num {200};
        cout << "Local num is: " << num << " in inner block of main" << endl;
        cout << "Inner block of main can see out = num1 is: " << num1 << endl;
    }
    
    cout << "Local num is: " << num << " in main" << endl;
    
    static_local_example();
    static_local_example();
    return 0;
}