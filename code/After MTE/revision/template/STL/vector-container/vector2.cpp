#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    for(int i=1;i<=5;++i){
        v.push_back(i*5);
    }
    cout << "Elements (initially):\t ";
    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n\n";

    // Read elements
    cout << "v.front() : " << v.front() << endl;
    cout << "v.back() : " << v.back() << endl;
    cout << "v.at(2) : " << v.at(2) << endl;

    // v.begin() gives the address of first element, but v.front() gives the element value
    // similar follows for v.end() and v.back();        also begin() and end() are used for iterating by the iterator

    // updating elements
    v[2] = 20;
    vector<int>::iterator itr;
    itr = v.begin() + 2;
    *itr = 100;

    itr += 1;
    *itr = 99;

    cout << "\nElements (now) : \t";
    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;

    //Delete eleements
    itr = v.begin();
    itr += 2;
    v.erase(itr);       // deleting 3rd element
    v.pop_back();       // deleting last element
    v.clear();          // deleting all elements i.e. clear the vector

    cout << "\nAfter erasing all elements of v\n";
    // sise and capacity
    cout << "v.size() : " << v.size() << endl;       // tells the no of elements present in the vecotr (i.e. its size)
    cout << "v.max_size() : " << v.max_size() << endl;   // tells the maximum no of element that a vector can hold
    cout << "v.capacity() : " << v.capacity() << endl;   // tells the no of elements that the vector can store now, without resizing itself
     
    return 0;   
}