// Define a function that returns the product of two numbers
#include <iostream>
using namespace std;

int product(int num1,int num2){
    return num1*num2;
}
int main()
{
    int number1,number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;
    cout << "\nProduct of the numbers " << number1 << " " << number2 
         << " is " << product(number1, number2) << endl;
    return 0;
}