#include <iostream>
using namespace std;

class Parent
{
public:
    Parent(int x)
    {
        cout << x << endl;
        cout << "Constructor of Parent class.\n";
        cout << "--------------------------------\n";
    }    
    ~Parent()
    {
        cout << "Destructor of Parent class\n";
        cout << "--------------------------------\n";
    }
};

class Child:public Parent
{
public:
    Child(int y): Parent(10*y)
    {
        cout << y << endl;
        cout << "Constructor of Child class.\n";
        cout << "--------------------------------\n";
    }
    ~Child()
    {
        cout << "Destructor of Child class.\n";
        cout << "--------------------------------\n";
    }
};

class Son:public Child
{
public:
    Son(int z):Child(5*z)
    {
        cout << z << endl;
        cout << "Constructor of Son class.\n";
        cout << "--------------------------------\n";
    }
    ~Son()
    {
        cout << "Destructor of Son class.\n";
        cout << "--------------------------------\n";
    }
};

int main()
{
    Son s(50);
    return 0;
}