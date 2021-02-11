// Function to demonstrate call by reference

#include<iostream>
using namespace std;

/* variable 'a' is a reference to the actual parameter
 * i.e. it is working on same 'x' of main 
 * no new copy has been made
 * all changes done on 'a' in increment fn will be reflected on 'x' in main fn
 * */

void increment(int &a){      //formal paramenter 'a'
    a++;
    cout << "Value in Function increment : " << a << endl;
}
int main()
{
    int x = 5;
    increment(x);   //actual parameter 'x'
    cout << "Value in Function main: " << x << endl;
    return 0;
}