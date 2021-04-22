#include <iostream>
using namespace std;

class A{
    int num1;
    float num2;
public:
    A(int a=0, float b=0){
        num1 = a;
        num2 = b;
    }
    A operator+(A const &obj){
        A obj1;
        obj1.num1 = this->num1 + obj.num1;
        obj1.num2 = this->num2 + obj.num2;
        return obj1;
    }
    A operator-(A const &obj){
        A obj1;
        obj1.num1 = this->num1 - obj.num1;
        obj1.num2 = this->num2 - obj.num2;
        return obj1;
    }
    void show()
    {
        cout << num1 << " " << num2 << endl;
    }
};

int main()
{
    A obj1(12,5.6f);
    A obj2(11,10.7);
    obj2.show();
    
    obj2 = obj2 + obj1;
    obj2.show();
    
    obj2 = obj2 - obj1;
    obj2.show();
    return 0;
}