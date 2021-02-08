/* Program to check whether a number is palindrome or not
 * A number is palindrome if 
 * on reversing the number we get the original number itself
 * eg: 12321 rev = 12321 
 * 43534 rev = 43534 (not Palindrome)
 * */
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    int lastDigit=0,reverse=0,numberCopy=number;
    while(numberCopy){
        lastDigit = numberCopy%10;
        reverse = reverse*10+lastDigit;
        numberCopy = numberCopy/10;
    }

    if(reverse==number)
        cout << number << " is Palindrome.\n";
    else
        cout << number << " is NOT Palindrome.\n";
    
    return 0;
}
