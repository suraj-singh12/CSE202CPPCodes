#include <iostream>
using namespace std;

class A{
public:
    int x=10;
    int y=20;
};

class B: public A{
public:
    int sum(){
        return x+y;
    }
};

class C: public A{
public:
    int prod(){
        return x*y;
    }
};

int main()
{
    B b;
    cout << b.sum() << endl;
    C c;
    cout << c.prod() << endl;
}