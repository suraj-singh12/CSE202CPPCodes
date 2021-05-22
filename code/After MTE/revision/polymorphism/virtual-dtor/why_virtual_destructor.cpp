#include <iostream>
using namespace std;

class Shape{
    protected:
        int *p;
    public:
        Shape(){
            cout << "ctor BASE class\n";
            p = new int;
            *p = 20;
        }
        ~Shape(){
            cout << "BASE (Shape) class's destructor\n";
            delete p;
            p = NULL;
        }
};

class Circle : public Shape{
    public: 
        Circle(){
            cout << "ctor DERIVED class\n";
            int q = *p;
        }
        ~Circle(){
            cout << "DERIVED (Circle) class's destructor\n";
            cout << *p;
        }
};

int main(){
    Shape *s;   Circle *c;
    c = new Circle;        // a circle object (without name) created in heap and c points to it

    s = c;                  // now s and c both point to same memory address (same circle object in heap)
    
    delete s;   /* this deletes the object pointed to by s, from heap memory
                 * to do so it will trigger its own class's destructor (destructor of Shape class), job done, program exit on return 0; looks all good. Right?

                 * BUT here is the problem, 
                 * the object created on heap was of Circle class,
                 * but on destruction of this object, the circle class's destructor is never called (as object s calls its own (BASE) class's destructor and the object is deleted from heap)
                 * i.e. the object was created normally by the constructor of its own class (Circle class's constructor)
                 * but is not destructed by its own class
                 * but we know that any object that is created for a class, it's constructor is always called
                 * and for its destruction its destructor is always called
                 * here, it's destructor is never called and it is destructed also, this isn't good
                 * it may create big issues in complex programs 
                 * because this does not lets the proper destruction of the object to happen
                 * 
                 * 
                 * here the object contains only one data member i.e. pointer *p derived from the base class
                 * and this is destructed by the base class, so nothing remains left out but what if derived class had more data members
                 * which were initialised (may be in heap) by its ctor
                 * they will also need to get deleted during object destruction, 
                 * and this task would be done by destructor of derived class
                 * but in such scenario, it is not called
                 * then the object is partially destructed, and it will lead to critical issues during program run 
                 * (implementation of above discussed program can be found in 'E_no_v_dtor.cpp' (=Error due to no virtual destructor) file can be seen
                 * go to this file only after reading this full and after going through virtual_dtor.cpp)
                 * 
                 * 
                 * so to avoid this problem, where the derived class's object is destructed without getting it's destructor called, we declare the base class destructor as virtual.
                 * like this -
                 *                      virtual ~Shape(){
                                            delete p;
                                            p = NULL;
                                        }
                 * see implementation in 'virtual_dtor.cpp'
                 * 
                 * EXECUTE this program and program 'virtual_dtor.cpp' and see the difference.
                 * */


    return 0;
}
