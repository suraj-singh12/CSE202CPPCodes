#include <iostream>
using namespace std;

class Add{
    public:
        int sum(int a,int b){
            return (a+b);
        }
};

class Difference{
    public:
        int diff(int a, int b){
            return (a-b);
        }
};

class Multiply{
    public:
        int multiply(int a, int b){
            return (a*b);
        }
};

class Arithmetic_operations : public Add, public Difference, public Multiply{

};

int main()
{
    int x = 10, y = 20;
    Arithmetic_operations c;
    cout << "Sum : " << c.sum(x,y) << "\tDifference : " << c.diff(x,y) << "\tProduct: " << c.multiply(x,y) << endl;
    return 0;
}