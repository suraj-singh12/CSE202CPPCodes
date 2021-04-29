#include <iostream>
using namespace std;
enum color {red,green,blue};
class Car
{
private:
    color c_color;
    string *c_name;     // will use dynamic memory allocation for car name
public:
    Car(color clr, string name){
        c_name = new string;    // allocating memory on heap for car name
        *c_name = name;

        c_color = clr;
    }
    Car(const Car &c){      // copy constructor
        c_color = c.c_color;
        
        c_name = new string;    // allocating memory on heap for car name
        *c_name = *c.c_name;
    }
    void show(){
        cout << *c_name << " " << c_color << endl;
    }
    ~Car()
    {   delete c_name;  }
};

int main()
{
    color color1 = red;
    Car c1(color1,"Lamborghini Veneno");
    c1.show();
    
    Car c2(c1);
    c2.show();

    return 0;
}