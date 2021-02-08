// Program to  reverse a string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin,s);
    int sSize = s.length();
    
    //reverse(s.begin(),s.end());
    
    string reverseStr = s;  //can't leave empty
    // reversing the string
    for(int i = 0; i < sSize; ++i){
        reverseStr[i] = s[sSize-1-i];
    }
    cout << "The reversed string is: \n";
    cout << reverseStr;
    return 0;
}