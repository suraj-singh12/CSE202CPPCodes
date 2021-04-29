/* A pure virtual function is a virtual function in C++ for which we need not to write any function definition and 
 * only we have to declare it. It is declared by assigning 0 in the declaration.

 * An abstract class is a class in C++ which have at least one pure virtual function.

 * Abstract class can have normal functions and variables along with a pure virtual function.

 * Abstract class cannot be instantiated, but pointers and references of Abstract class type can be created.

 * Abstract classes are mainly used for Upcasting, so that its derived classes can use its interface.

 * If an Abstract Class has derived class, they must implement all pure virtual functions, or else they will become Abstract too.

 * We can’t create object of abstract class as we reserve a slot for a pure virtual function in Vtable, 
 * but we don’t put any address, so Vtable will remain incomplete.
 
 // To make the abstract class destructor work fine, make the destructor virtual (to prevent abnormal destructor call that may happen)
 */

#include <iostream>
using namespace std;

//class A is an abstract class
// any class that contains atleast one 'pure virtual' function, then it becomes abstract class
class A
{
public:
    // below all are pure virtual functions (as they are not defined) but declared to 0 with virtual
    virtual void Show() = 0; // decelaration
    virtual void print() = 0;
    virtual void sum() = 0;
    virtual void add() = 0;
    virtual ~A(){
        cout << "Destructing base(A)\n";
    }
};

class B : public A
{
public:
    void Show()
    {
        cout << "I am show ";
    }

    void print()
    {
        cout << "I am a print";
    }
};
int main()
{
    return 0;
}