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
 * std::string::iterator itr; (iterator)
 * 
 * copy s2 into s string  
 * s.copy(s2,len,pos)
 * s.swap(s2);
 * s.compare(s1);  0 for equal | -1 for small | +1 for greater
 * s.find(substr)
 * s.find_first_of(substr)
 * s.find_last_of(substr)
 * s.rfind(substr)
 * 
 * 
 * give input: any random long string like fhgkjfdhkghskjhgjhd
 * and see the difference in things, it will give a clear picture of all functions result
 * */

#include <iostream>
#include <string>
using namespace std;

void block1();
void block2();
int main()
{
    block1();
    block2();
    return 0;
}
void block1()
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

    name.resize(3);
    cout << name <<endl;

    name.shrink_to_fit();       //shrinks to minimum capacity

    cout << name.capacity() <<endl;
    cout << name.size() <<endl;
    cout << name.length() <<endl;
}
void block2()
{
    string s = "learnandgrow";
    std::string::iterator itr; 
    for(itr=s.begin();itr!=s.end();itr++){
        cout << *itr << ' ';
    }
    cout << endl;

    for(itr= s.end()-1;itr!=s.begin()-1;itr--){
        cout << *itr << ' ';
    }
    cout << endl;

    for(itr=s.begin();itr!=s.end();++itr)
        cout << *itr << " ";
    cout << endl;

    for(auto x:s)
        cout << x << ' ';
    cout << endl;         
}
