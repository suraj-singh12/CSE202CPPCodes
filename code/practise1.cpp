#include <iostream>
using namespace std;

class A{
    private:
    int a=10;
    char c='a';
    public:
    void funA(){
        cout << "Hello, I am function of class A\n";
    }
    friend class B;
};

class B{
    private:
    int c;
    public:
    void PrintA(A obj1){
        cout << obj1.a << " " << obj1.c << " " << endl;
    }
};


int main()
{
    A obj1;
    B obj2;
    obj2.PrintA(obj1);
    return 0;
}