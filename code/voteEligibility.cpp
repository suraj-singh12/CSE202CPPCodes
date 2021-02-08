// Program to check if a person is eligible to vote in India or not
// For a person to be eligible to vote, he/she should be atleast 18 years old

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "How old are you? ";
    cin >> age;
    if(age>=18)
        cout << "You are Eligible for voting.";
    else
        cout << "You NOT are Eligible for voting.";
    return 0;
}