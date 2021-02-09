/* Program to find whether a number is armstrong or not
 * number = 153      1^3 + 5^3 + 3^3 (sum of cubes of individual digits of that number gives same number) = 153
 * such type of numbers are called armstrong numbers
 * */
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    int newNum = 0, lastDigit = 0, copyNum = number;
    while(copyNum){
        lastDigit = copyNum%10;
        newNum = newNum + pow(lastDigit,3);
        copyNum/=10;
    }
    if(newNum == number){
        cout << "Armstrong" << endl;
    }
    else
        cout << "NOT Armstrong." << endl;
    return 0;
}