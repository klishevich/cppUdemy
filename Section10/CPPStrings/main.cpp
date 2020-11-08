#include <iostream>
#include <iomanip>
#include <string> // important!

using namespace std;

int main( )
{
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; // Apple
    string s6 {s1, 0, 3}; // App
    string s7 (10, 'X'); // XXXXXXXXXX
    
    cout << s0 << endl;
    cout << s0.length() << endl;
    
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1==s5) << endl;
    cout << s4 << " > " << s5<< ": "<< (s4>s5) << endl;
    
    // Assignment
    s1 = "Watermelon";
    s2 = s1; // creates a copy
    cout << "s1 is now: " << s1 << endl;
    cout << "s2 is now: "<< s2 << endl;
    
    s3[0] = 'C';
    cout << "s3 change first letter to 'C': " << s3 << endl;
    s3.at(0) = 'P';
    cout << "s3 change first letter to 'P': " << s3 << endl;
    
    // Concatination
    s3 = "Watermelon";
    s3 = s5 + " and " + s2 + " juice";
    cout  << "s3 is now: " << s3 << endl;
    
    // compiler error
    // s3 = "nice " + " cold" + s5 + "juice"; 
    
    // for loop
    s1 = "Apple";
    for (size_t i {0}; i< s1.length(); ++i)
        cout << s1.at(i);
    cout << endl;
    
    // range-based for loop
    for (char c: s1)
        cout << c << " ";
    cout << endl;
    
    // Substring
    s1 = "This is a test";
    cout << s1.substr(0,4) << endl;
    cout << s1.substr(5,2) << endl;
    cout << s1.substr(10,4) << endl;

    // Erase
    s1 = "this is a test";
    s1.erase(0,5);
    cout << "s1 is now: " << s1 << endl;

    // getline
//    string full_name {};
//    cout << "Enter your name: ";
//    getline(cin, full_name);
//    
//    cout << "Your full name is: " << full_name;
    
    // Find
    s1 = "The secret word is Boo";
    string word;
    
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;
    
    
    return 0;
}