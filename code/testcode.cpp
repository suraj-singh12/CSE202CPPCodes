#include<iostream>
using namespace std;

void increment(int a ){
    a++;
    cout << "Value in Function increment : " << a << endl;
}
int main()
{
    int x = 5;
    increment(x);
    cout << "Value in Function main: " << x << endl;
    return 0;
}