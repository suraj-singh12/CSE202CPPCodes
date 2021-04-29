#include <iostream>
using namespace std;

class A{
public:
    int sum(int a,int b){
        cout << "Sum from base\n";
        return (a+b);
    }
    virtual int product(int a,int b){
        cout << "Product from base\n";
        return (a*b);
    }
};

class B: public A{
public:
    virtual int sum(int a,int b){
        cout << "Sum from child\n";
        return (a+b);
    }
    int product(int a,int b){
        cout << "Product from child\n";
        return (a*b);
    }
};


int main()
{
    B b;
    A *ptr = &b;
    cout << ptr->sum(5,6)<< endl;
    cout << ptr->product(5,6) << endl;
    return 0;
}