#include <iostream>
using namespace std;


// creating hybrid inheritance (here : hierarichal + multiple)
class A
{
    public:
    void show(){
        cout << "Hello world! \n";
    }
};

class B:virtual public A{

};

class C: virtual public A{

};

/*
class B:public A{

};

class C:public A{

};
*/
class D:public B,public C{

};

int main()
{
    D d1;
    // d1.show();       // ambiguous call to show(), ie. which one ? show() in class C or show in class D ?
/*
    // method 1 to resolve is scope resolution operator (::)
    d1.C::show();
    d1.B::show();
*/
    // method 2 to resolve is using virtual classes
    d1.show();  // now directly calls parent class's show() as class B and class C don't have this function with them, as they inherit A(base/parent class) virtually
    return 0;
}