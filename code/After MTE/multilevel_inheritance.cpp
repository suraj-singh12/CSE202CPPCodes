#include <iostream>
#include <string>
using namespace std;

class Bicycle{
public:
    int wheel = 2;
    string speed = "less";
    string autonomous = "NO";
    int seat = 1;
    string WheelShape = "round";
};

class Car : public Bicycle{
    public:
     Car(){
         //just Updating these features only (rest taken as default)
         wheel = 4;
         autonomous = "yes";
         seat = 4;
         speed = "fast";
     }
};

class Truck: public Car{
    public : 
     Truck(){
         wheel = 6;
     }
};

int main()
{
    Truck t1;
    cout << t1.seat << " " << t1.speed << " "  
         << t1.wheel << " " << t1.WheelShape << endl;
    return 0;
}