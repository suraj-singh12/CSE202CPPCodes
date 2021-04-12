#include <iostream>
using namespace std;

class A{
private:
    int x = 10;
protected:
    int y = 20;
public:
    int z = 30;
};

class B: private A{
    // x is inaccessible
    // y is private
    // z is private
};

class C: protected A{
    // x is inaccessible
    // y is protected
    // z is protected
};

class D: public A{
    // x is inaccessible
    // y is private
    // z is public
};

int main()
{
    B b1;
    // cout << b1.x;        // inaccessible to class B
    // cout << b1.y;       // y is private
    // cout << b1.z;       // z is private
    
    C c1;
    // cout << c1.x;        // inaccessible to class B
    // cout << c1.y;       // y is protected
    // cout << c1.z;       // z is protected

    D d1;

    // cout << d1.x;        // inaccessible to class B
    // cout << d1.y;       // y is protected
    cout << d1.z;       // z is public
    
    cout << endl;
    return 0;
}