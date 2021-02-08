#include<iostream>
using namespace std;

int sum(int n1,int n2){
    return (n1+n2);
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << sum(num1,num2);
    return 0;
}