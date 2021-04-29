#include <iostream>
using namespace std;

class Base{
public:
    virtual void show()     //late binding (if no other show is found in the child class then bind this else that)
    {        
        cout << "I am show() from base class\n";
    }
    void print(){
        cout << "I am print() from base class\n";
    }
};

class Child: public Base{
public:
    void show(){
        cout << "I am show() from child class\n";
    }
    void print(){
        cout << "I am print() from child class\n";
    }
};

int main()
{
    Base B;
    Child C,c2;

    Base *b1;
    b1 = &c2;
    b1->show();
    b1->print(); 

    return 0;
}