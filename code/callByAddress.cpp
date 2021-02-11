// Function to demonstrate call by reference

#include<iostream>
using namespace std;

/* variable 'a' is a pointer, pointing to the actual parameter 'x'
 * i.e. 'a' contains the address of 'x' 
 * no new copy has been made instead the pointer directly works on 'x'
 * all changes done on 'a' in increment fn will be reflected on 'x' in main fn
 * */

void increment(int *a){      //pointer'a'

    // incrementing the value the pointer is pointing to (i.e. 'x')
    (*a)++;     
    // printing value in the memory address, that is stored in a
    cout << "Value in Function increment : " << *a << endl; 
}
int main()
{
    int x = 5;
    increment(&x);   //sending the address of x
    cout << "Value in Function main: " << x << endl;
    return 0;
}