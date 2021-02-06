// Program to calculate factorial of a number using class
#include <iostream>
using namespace std;

class Factorial{
    private:
    int number;

    public:
    //function to calculate factorial of number
    int fact(int n){
        if(n==1)
            return 1;
        return n*fact(n-1);
    }
};

int main()
{
    Factorial obj1;
    cout << "The factorial is: " << obj1.fact(5);
    return 0;
}