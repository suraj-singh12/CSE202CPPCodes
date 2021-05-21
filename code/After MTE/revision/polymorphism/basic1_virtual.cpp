// program to show working of an array of upcasted pointers

#include <iostream>
using namespace std;

class Shape{
    public:
     virtual void draw(){               // this is a virtual function now
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

    p->draw();      // conflict between Shape::draw() and Circle::draw()        - automatically resolved to call `Circle::draw()`
    
    p = &r;     // called upcasting
    p->draw();      // conflict between Shape::draw() and Rectangle::draw()     - automatically resolved to call `Rectangle::draw()`

    /* But how's this happening ?
     * Because draw() of Shape class is a virtual function so compiler will first search any implementation of draw() in derived class
     * and since it finds derived class's own draw() function so it calls it.
     * NOTE: if derived class had no draw() fn of its own, then compiler would have called the BASE class's (Shape class's) draw() fn.
     */
    //---------------------------------------
    return 0;
}