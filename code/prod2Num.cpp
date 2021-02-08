// Program to calculate product of two numbers using functions
#include <iostream>
using namespace std;

int prod(int num1, int num2){
    return num1*num2;
}

int main()
{
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;
    int product = prod(number1,number2);
    cout << number1 << " * " <<number2 << " = " << product << endl;
    return 0;
}