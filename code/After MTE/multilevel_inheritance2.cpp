#include <iostream>
using namespace std;

class A{
    public:
    int x = 5;
    string s = "string1";
};

class B: public A{
    public:
     B() 
     { 
         x = 10; 
     }
     string s2 = "string2";
};

class C: public B{
    public:
    C(){
        x = 20;
    }
    string s3 = "string3";
};

int main()
{
    C c1;
    cout << c1.x << " " << c1.s3 << " " << c1.s2 << " " << c1.s << endl;
}