#include <iostream>

using namespace std;

int main( )
{
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vovel is: " << vowels[4] << endl;
//    cin >> vowels[5]; out of bounds

    double hi_temps [] {40.1, 38.4, 35.0, 30.1};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
    hi_temps[0] = 42.2;
    cout << "The first high temperature is now: " << hi_temps[0] << endl;
    
//    int test_scores[5] {}; // all zeros
    int test_scores[5] {100, 90};
    cout << "\nFirst: " << test_scores[0] << endl;
    cout << "Second: " << test_scores[1] << endl;
    cout << "Third: " << test_scores[2] << endl;
    cout << "Fourth: " << test_scores[3] << endl;
    cout << "Fifth: " << test_scores[4] << endl;
    
    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    cout << "\nFirst: " << test_scores[0] << endl;
    cout << "Second: " << test_scores[1] << endl;
    cout << "Third: " << test_scores[2] << endl;
    cout << "Fourth: " << test_scores[3] << endl;
    cout << "Fifth: " << test_scores[4] << endl;
    
    cout << "\nNotice what the value of the array name is: " << test_scores << endl; // memory address of the storage location

    return 0;
}