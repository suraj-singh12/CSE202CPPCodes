#include <iostream>
using namespace std;

class A{
    public:
     string first_name = "Suraj";
};

class B{
    public:
     string middle_name = "";
};

class C{
    public:
     string last_name = "Singh";
};

class D: public A, public B, public C{

};

int main()
{
    D name;
    cout << name.first_name << " " << name.middle_name << name.last_name << endl;
}