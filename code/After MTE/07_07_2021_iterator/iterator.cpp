#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    vector<int>::iterator itr;
    for(itr = v.begin();itr != v.end();++itr){
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}