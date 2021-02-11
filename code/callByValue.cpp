// Function to demonstrate call by value

#include<iostream>
using namespace std;

void increment(int a){      //formal paramenter 'a'
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