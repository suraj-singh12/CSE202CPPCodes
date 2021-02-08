// Program to calculate circumference and area of a circle using fuctions
#include <iostream>
#include <iomanip>
# define pi 3.14159
using namespace std;

float circleArea(float radius){
    return pi * radius * radius;
}
float circleCircumference(float radius){
    return 2 * pi * radius;
}

int main()
{
    float radius;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    cout << fixed;
    cout << "\nArea \t\t: " << setprecision(2) << circleArea(radius) << " sq. units." << endl;
    cout << "Circumference\t: " << setprecision(2) << circleCircumference(radius) << " units." << endl;
    return 0;
}