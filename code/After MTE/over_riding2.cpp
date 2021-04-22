#include <iostream>
using namespace std;

class Base{
public:
    void show(){
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
    Child C;

    B.show();
    B.print();

    cout << endl;

    
    C.show();
    C.print();
    C.Base::show();
    C.Base::print();

    return 0;
}