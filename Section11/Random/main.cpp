#include <iostream>
using namespace std;

int main( )
{
    int random_number {};
    size_t count {10}; // number of random numbers to generate
    int min {1};
    int max {6};
    cout << "RAND_MAX in my system is: " << RAND_MAX << endl;
//    srand(time(nullptr));
    
    for (size_t i {1}; i<=count; i++)
    {
        random_number = rand() % max + min; // generate random number [min, max]
        cout << random_number << endl;
    }
    
    cout << endl;
    return 0;
}