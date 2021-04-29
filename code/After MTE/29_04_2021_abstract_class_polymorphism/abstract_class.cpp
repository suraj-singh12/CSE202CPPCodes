// To make the abstract class destructor work fine, make the destructor virtual (to prevent abnormal destructor call that may happen)
#include <iostream>
using namespace std;

// PureV class is an abstract class as it contains atleast one pure virtual function
class PureV
{
public:
    // both are pure virtual functions
    virtual void show() = 0;
    virtual void display() = 0;
    virtual ~PureV()
    {
        cout << "Destructing Base (PureV)\n";
    }
};

class Child : public PureV
{
public:
    void show()
    {
        cout << "show" << endl;
    }

    void display()
    {
        cout << "display\n";
    }
};

int main()
{
    // PureV obj1;      //not possible as Purev is an abstract class
    PureV *obj;     // pointer of an abstract class is possible
    Child obj2;

    obj = &obj2;

    obj->display();
    obj->show();
}
