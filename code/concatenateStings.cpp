//C++ Program to Concatenate Two Strings
#include <iostream>
using namespace std;
int main()
{
    string s1,s2;
    cout << "Enter the string1: ";
    cin >> s1;
    cout << "Enter ths string 2: ";
    cin >> s2;
    string s3 = s1 + s2;
    cout << "\nConcatenated string is: " << s3 << endl;
    return 0;
}