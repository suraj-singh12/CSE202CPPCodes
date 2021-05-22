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
        virtual ~Shape(){
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
    
    delete s;   /* this deletes the object pointed to by s, from heap
                 * but see, the derived class's destructor is also called here 
                 * and the order of dtor call is also correct (opposite to the order of ctor call)
                 * so proper destruction of the object will happen
                 * PROBLEM RESOLVED
                 * */
    return 0;
}
