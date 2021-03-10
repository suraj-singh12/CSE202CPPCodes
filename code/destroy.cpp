#include <iostream>
using namespace std;

struct A{
    int n1;
    char ch[40];
    int n2;
};

void hello(){
    cout << "Hellow\n";
}
int main()
{
    cout << sizeof(A) << '\n';
    void (*ptr)(void)=&hello;
    (*ptr)();

    int a=5;
    void *ptr2=&a;
    cout << sizeof(ptr2);

    int i=5;
    cout<<"\n" << i << ++i << ++i;
}