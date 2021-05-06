/*
 * push_back()
 * push_front()
 * pop_back()
 * pop_front()
 * empty()
 * size()
 * capacity()
 * at() is not present in linked list
 * */

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(10);   // 10
    li.push_front(20);  // 20 10
    li.push_back(11);   // 20 10 11
    li.push_front(21);  // 21 20 10 11

    for(auto i = li.begin(); i!=li.end(); ++i){
        cout << *i << " ";
    }
    cout << endl;

    li.pop_back();  // 21 20 10
    li.pop_front(); // 20 10

    for(auto x: li){
        cout << x << " ";
    }
    cout << endl;
    
    cout << "The list is : " << (li.empty()?"Empty":"Not empty");
    cout << endl;
    return 0;
}