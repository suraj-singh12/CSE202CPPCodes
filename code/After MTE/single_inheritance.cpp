#include <iostream>
using namespace std;

class Car{      // parent class or base class
    public:
     int seat = 2;
     int window = 4;
     string speed = "very high";
     int wheels = 4;
};

// Truck - child class or derived class or sub class of Car
class Truck: public Car
{
    public:
        string no = "UPxxXXXX";
};

int main()
{
    Truck t;
    cout << t.no << " " << t.seat << " " << t.speed << " " << t.wheels << " " << t.window << endl;    
    
    Car c1;
    //cout<<t1.capacity; // i have maked the object of parent class and i have tried to access the child class which is not possible
    
    return 0;
}