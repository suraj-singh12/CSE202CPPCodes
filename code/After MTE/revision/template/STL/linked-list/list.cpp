#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> ls;
    ls.push_back(12);
    ls.push_front(34);
    ls.push_back(19);
    ls.push_front(44);
    ls.push_back(31);
    ls.push_front(2);
    ls.push_back(29);
    ls.push_front(-8);

    cout << "list (initially): \n";
    for(auto num : ls){
        cout << num << " ";
    }
    cout << endl;

    cout << "\nls.front() : " << ls.front() << endl;
    cout << "ls.back() : " << ls.back() << endl;

    ls.pop_back();
    ls.pop_back();
    ls.pop_front();
    ls.pop_front();

    cout << "\nlist (after popping 2 from front, 2 from end \n";
    for(auto num : ls){
        cout << num << " ";
    }
    cout << endl;

    // inserting elements
    list<int>::iterator litr;
    litr = ls.end();
    litr--;
    ls.insert(litr,-20);        // inserting -20 at 2nd last position
    cout << "\nlist now (after inserting -20 at second last positon) : \n";
    for(auto num : ls){
        cout << num << " ";
    }
    cout << endl;

    ls.sort();
    cout << "\nSorted list : " << endl;
    for(auto num : ls){
        cout << num << " ";
    }
    cout << endl;

    ls.sort(greater<int> ());   //sorting in reverse order
    cout << "Reverse sorted list : " << endl;
    for(auto num : ls){
        cout << num << " ";
    }
    cout << endl;

    ls.clear();
    return 0;
}