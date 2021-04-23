#include <iostream>
using namespace std;

class CAR
{
public:
    void show(){
        cout << "Car Class\n";
    }
};

class Car1: public CAR{

};

class Car2: public CAR{

};

class Truck: public Car1, public Car2{
    
};

int main()
{
    Truck T;
    T.Car1::show();
    T.Car2::show();
    return 0;
}