// polymorphism
#include <iostream>
using namespace std;

class Shape{
    public:
     void draw(){
         cout << "Shape\n";
     }
};

class Circle : public Shape{
    public:
     void draw(){
         cout << "Circle\n";
     }
};

class Rectangle : public Shape{
    public:
     void draw(){   
         cout << "Rectangle\n";
     }
};

int main()
{
    Shape *p;
    Circle c;
    Rectangle r;
    //--------------------------------------
    p = &c;                 // called upcasting
    /* pointer of BASE class can point to an object of its DERIVED class 
     * (or in other words pointer of the BASE class can store the address of an object of it's derived class)
     * Here C++ does not raise any error, it's perfectly valid.
     * */
    //--------------------------------------

    p->draw();      // conflict between Shape::draw() and Circle::draw()        - automatically resolved to call Shape::draw()
    
    p = &r;     // called upcasting
    p->draw();      // conflict between Shape::draw() and Rectangle::draw()     - automatically resolved to call Shape::draw()

    /* But how's this happening ?
     * Since Pointer p is of type Shape (Shape class (BASE CLASS)) so it automatically calls Shape class's(BASE class's) draw() from the derived class 
     * but in both p->draw() if we want the derived class's draw() to get called, not of the BASE class's
     * then how do we do it ?
     => The answer is : MAKE THE BASE CLASS'S draw() Fn A VIRTUAL FUNCTION

     check the basic1_virtual.cpp file
     */
    //---------------------------------------
    return 0;
}