/* Write a function which will take pointer and display the number on screen. 
 * Take number from user and print it on screen using that function.
 * */
#include <iostream>
using namespace std;

void show(int *num)     //pointer 'num' is containing the address of actual parameter in it
{
    cout << "You entered the number : ";
    cout << *num << endl;       // printing the value inside the address in pointer variable 'num'
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    show(&number);      //sending the address of variable 'number' to show function
    return 0;
}