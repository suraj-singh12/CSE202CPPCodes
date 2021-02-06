// Swap two numbers without using third variable
#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    cout << "Enter the two numbers: ";
    cin >> number1 >> number2;

    //say number1 = 10, number2 = 5
    number1 = number1 + number2;        //n1 = 10+5 = 15
    number2 = number1 - number2;        //n2 = 15-5 = 10
    number1 = number1 - number2;        //n1 = 15-10 = 5
    //now number1 = 5, number2 = 10
    
    cout << number1 << number2 << endl;
    return 0;
}
