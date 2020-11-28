#include <iostream>

using namespace std;
// Function prototypes
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double);
void area_circle();
void volume_cylinder();

const double pi {3.141592654};

int main()
{
    area_circle();
    volume_cylinder();
    return 0;
}

void area_circle() {
    double radius{};
    cout << "Enter the circle radius: ";
    cin >> radius;
    cout << "The area is: " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius{};
    cout << "Enter the cylinder the radius: ";
    cin >> radius;
    double height{};
    cout << "Enter the height: ";
    cin >> height;
    cout << "The volume is: " << calc_volume_cylinder(radius, height) << endl; 
}

double calc_area_circle(double radius) {
    return radius * radius * pi;
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}