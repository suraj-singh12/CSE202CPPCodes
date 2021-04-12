#include <iostream>
using namespace std;

class A
{
public:
    void Show()
    {
        cout << " I am a parent class " << endl;
    }
};

class B : public A
{

public:
    void Show()
    { // show is done overriding
        cout << "I am a child class " << endl;
    }
};

int main()
{
    B obj;
    obj.Show();
    obj.A::Show();
    return 0;
}