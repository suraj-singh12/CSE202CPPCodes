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
    
    delete s;   /* this deletes the object pointed to by s, from heap memory (by just calling BASE dtor, which just deletes *p)
                 * and this leads to partial destruction of the object of circle class
                 * see,
                    
                     ~Circle(){
                        cout << "DERIVED (Circle) class's destructor\n";
                        cout << "Destructing object with radius " << *radius << endl;
                        delete radius;
                        // destruction of p is handled by base class, as after this the control is supposed to go to base class's destructor
                    }
                 * the destructor of Circle class was telling a meaningful thing, that is which object it is deleting (i.e. by radius)
                 * and then deleting the radius
                 * (in complex programs a destructor might do a lot meaningful work or processing like this 
                 * which ensures a proper destruction of its object
                 * but, when it is not called, the object is not destroyed properly and a lot many critical problems may occur during program run)
                 * like here, 
                 * in this program, memory leak happens, as radius is assigned memory in heap but is never deleted (due to dtor not getting called)
                 * 
                 * now go to resolved_E_no_v_dtor.cpp 
                 * */
    return 0;
}