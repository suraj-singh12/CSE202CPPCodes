/* Program to find whether a number is armstrong or not using recursion
 * number = 153      1^3 + 5^3 + 3^3 (sum of cubes of individual digits of that number gives same number) = 153
 * such type of numbers are called armstrong numbers
 * */
#include <iostream>
#include <math.h>
using namespace std;

int isArmstrong(int num, int newN){
    if(num==0)
        return newN;        //here the control goes back to main
    
    int temp=pow(num%10,3);
    newN += temp;
    
    return isArmstrong(num/10,newN);;
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int newNum = isArmstrong(number,0);
    if(newNum == number)
        cout << "Armstrong.\n";
    else 
        cout << "NOT Armstrong.\n";
    return 0;
}