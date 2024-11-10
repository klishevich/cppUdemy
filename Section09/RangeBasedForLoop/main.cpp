#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main( )
{
//    vector<double> temperatures {19.4, 23.5, 22.0, 24.9};
//    double average_temp {};
//    double total {};
//    
//    for (auto temp: temperatures)
//        total += temp;
//        
//    if (temperatures.size() != 0) {
//        average_temp = total / temperatures.size();
//    }
//
//    cout << fixed << setprecision(1);
//    cout << "Averate temp is: " << average_temp;
   
 
//    for (auto val: {1,2,3,4,5})
//        cout << val << endl;

    // c string
    for (auto c: "this is a test") {
        if (c!=' ') {
            cout << c;
        }
    }

    cout << endl;

    return 0;
}

//    bool doLoop = true;
//    while (doLoop) {
//        if (count < vec.size()) {
//            if (vec[count] != -99) {
//                count++;
//            } else {
//                doLoop = false;
//            }
//        } else {
//            doLoop = false;
//        }
//    }