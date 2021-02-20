#include<iostream>
using namespace std;
int main()
{
    int number=10;
    int *ptr1,**ptr2;
    ptr1=&number;
    ptr2=&ptr1;     //pointer to pointer

    cout << "---------------------------------------------------------------------------\n";
    cout << "Address of number: " << &number << "\tValue in number: " << number << endl;
    cout << "---------------------------------------------------------------------------\n";
    cout << "Address in ptr1: " << ptr1 << "\t\tValue in this address: " << *ptr1 << endl;
    cout << "---------------------------------------------------------------------------\n";
    cout << "Address in ptr2: " << ptr2 
        << "\nAddress in this address(is the address in p1): " << *ptr2 
        <<"\nValue in this address: " <<**ptr2 << endl;
    cout << "---------------------------------------------------------------------------\n";
    return 0;
}