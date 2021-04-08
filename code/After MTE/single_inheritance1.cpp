#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    int wheels = 4;
    string handledirection = "right";
    int seats = 4;
    bool small = true;
};

class Truck : public Car
{ //--------------------Inheritence Syntax------------------------------
    //Now changing the values for the truck
public:
    bool small = false;
};
int main()
{
    Truck t1;
    cout << t1.wheels << " " << t1.handledirection << " " << t1.seats << " " << t1.small << endl;
    return 0;
}