/*
 * string functions:
 * getline()
 * push_back()
 * pop_back()
 * 
 * capacity()
 * size()   //size() and length() are same mathematically as sizeof(char)=1 and length total no of chars in str
 * length()
 * shrink_to_fit()
 * 
 * begin()
 * end()
 * rbegin()
 * rend()
 * iterator
 * 
 * give input: any random long string like fhgkjfdhkghskjhgjhd
 * and see the difference in things, it will give a clear picture of all functions result
 * */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string name="Suraj";
    // cout << name[0];
    
    string name;
    getline(cin,name);
    cout << name << endl;

    string initials="GC ";
    if(name=="Suraj Singh")
    {
        name.insert(0, initials);
        cout << name << endl;
    }

    name.push_back('@');
    cout << name << endl;

    name.pop_back();
    cout << name << endl;

    cout << name.capacity() <<endl;
    cout << name.size() <<endl;
    cout << name.length() <<endl;

    //name.resize(3);

    name.shrink_to_fit();       //shrinks to minimum capacity

    cout << name.capacity() <<endl;
    cout << name.size() <<endl;
    cout << name.length() <<endl;

    return 0;
}