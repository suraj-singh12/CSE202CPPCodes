/* This program works fine, as the base class's destructor is marked as virtual, 
 * so this resolves the problem of derived class's destructor not getting called
 */
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
    private:
        float *radius;
    public: 
        Circle(int r){
            cout << "ctor DERIVED class\n";
            int q = *p;

            radius = new float;
            *radius = r;
        }
        ~Circle(){
            cout << "------------------------------------------------\n";
            cout << "DERIVED (Circle) class's destructor\n";
            cout << "Destructing object with radius " << *radius << endl;
            cout << "------------------------------------------------\n";
            delete radius;
            // destruction of p is handled by base class, as after this the control is supposed to go to base class's destructor
        }
};

int main(){
    Shape *s;   Circle *c;
    c = new Circle(5);        // a circle object (without name) created in heap and c points to it

    s = c;                  // now s and c both point to same memory address (same circle object in heap)
    
    delete s;
    return 0;
}