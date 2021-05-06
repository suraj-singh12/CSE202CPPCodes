/*
 * push_back()
 * pop_back()
 * size()
 * capacity()
 * at()
 * clear()
 * empty()
 * */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(13);

    v1.pop_back();
    v1.pop_back();

    for(auto i = v1.begin();i != v1.end(); ++i)
    {
        cout << *i << " ";
    }
    return 0;   
}