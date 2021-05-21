// before proceeding to this program, ensure you have gone through program `basic1.cpp'
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
    Circle c1,c2,c3,c4,c5;
    Rectangle r1,r2,r3,r4,r5;
    Shape *p[10] = {&c1,&c2,&c3,&c4,&c5,&r1,&r2,&r3,&r4,&r5};
    /* Note: *p[] : is an array of pointers
     * NOTE: (a pointer of base class storing the memory address of an object of derived class is called an upcasted pointer)
     * and since every pointer is an upcasted pointer 
     * so the above is an array of upcasted pointers
     * */
    
    for(int i=0;i<10;++i){
        p[i]->draw();
    }
    return 0;
}
