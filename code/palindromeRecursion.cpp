/* Program to check whether a number is palindrome or not using recursion
 * A number is palindrome if 
 * on reversing the number we get the original number itself
 * eg: 12321 rev = 12321 
 * 43534 rev = 43534 (not Palindrome)
 * */
#include <iostream>
using namespace std;

int revNum=0;

int isPalindrome(int num){
    if(num==0)
        return 0;
    revNum = revNum*10 + num%10;
    return isPalindrome(num/10);
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    isPalindrome(number);

    if(number == revNum)
        cout << "Palindrome";
    else 
        cout << "Not Palindrome";
    cout << endl;
    return 0;
}