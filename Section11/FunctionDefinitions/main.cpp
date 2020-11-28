#include <iostream>
//double calc_area_circle(double radius); // prototype OR
double calc_area_circle(double); // prototype

using namespace std;

const double pi {3.141592654};



void area_circle() {
    double radius{};
    cout << "Enter the circle radius: ";
    cin >> radius;
    cout << "The area is: " << calc_area_circle(radius) << endl;
}

double calc_area_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

void volume_cylinder() {
    double radius{};
    cout << "Enter the cylinder the radius: ";
    cin >> radius;
    double height{};
    cout << "Enter the height: ";
    cin >> height;
    cout << "The volume is: " << calc_area_cylinder(radius, height) << endl; 
}

int main()
{
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_area_circle(double radius) {
    return radius * radius * pi;
}