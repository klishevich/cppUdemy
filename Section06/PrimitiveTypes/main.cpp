#include <iostream>

using namespace std;


int main( )
{
    char middle_initial {'A'}; // Single quotes!!!
    cout << "My middle initial is " << middle_initial << endl;
    
    unsigned short int exam_score {55}; // same as unsigned short int exam_score {55};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;
    
    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;
    
    long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;
    
    long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "Distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
    
    // FLOAT POINT
    
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;
    
    double pi {3.141592654};
    cout << "Pi is " << pi << endl;

    long double large_amount {2.7e120};
    cout << "Large number is " << large_amount << endl;    
    
    // BOOLEAN
    bool game_over {false};
    cout << "The value of gameOver is " << game_over << endl;
    
    // OVERFLOW
    short value1 {30000};
    short value2 {1000};
    int product {value1*value2};
    cout << "Product is " << product;
    
    return 0;
}