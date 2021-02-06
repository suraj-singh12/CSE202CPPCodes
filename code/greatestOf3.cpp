// Program to find greatest of the three numbers
#include <iostream>
using namespace std;
int main()
{
    int number1, number2, number3;
    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;

    int greatest = 0;
    if(number1 > number2 && number1 > number3)
        greatest = number1;
    else if(number2 > number1 && number2 > number3)
        greatest = number2;
    else
        greatest = number3;
    cout << "The greatest number is : " << greatest << endl;
    return 0;
}
