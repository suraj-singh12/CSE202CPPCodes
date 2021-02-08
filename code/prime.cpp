// Program to find whether a number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int number,flag=1;
    cout << "Enter a number: ";
    cin >> number;

    for(int i=2;i<number/2;++i)
        if(number%i==0){
            flag = 0;
            break;
        }
    
    if(flag==1)
        cout << number << " is Prime.\n";
    else
        cout << number << " is NOT Prime.\n";
    return 0;
}