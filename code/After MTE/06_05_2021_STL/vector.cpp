/*
 * push_back()  // used to insert an element at the end
 * pop_back()   // remove an element from the last
 * size()   // size of the vector
 * capacity()   // total capacity as of now, of the vector (can expand later automatically)
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

    cout << "Elements : ";
    for(auto i = v1.begin();i != v1.end(); ++i)
    {
        cout << *i << " ";
    }
    
    cout << "\nSize of v1: " << v1.size() << endl;
    cout << "Capacity: " << v1.capacity() << endl;
    cout << "At index 1: " << v1.at(1) << endl;
    cout << "Is empty: " << v1.empty() << endl;     // works like is_empty()?       0 means No, 1 means Yes
    v1.clear();
    cout << "Size after clear() : " << v1.size() << endl;


    return 0;   
}