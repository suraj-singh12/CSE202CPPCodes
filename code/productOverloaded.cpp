// Program to show function overloading 

#include <iostream>
using namespace std;

int prod(int a, int b){
    return a*b;
}
int prod(int a, int b, int c){
    return a*b*c;
}
int main()
{
    cout << prod(5,6) << endl;
    cout << prod(5,6,7) << endl;
    return 0;
}