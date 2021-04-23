// dynamic memory allocation (allocating memory on heap)
// memory is allocated at runtime not on compile time
// for this purpose 'new' keyword is used

#include <iostream>
using namespace std;
int main()
{
    // allocating memory for 1 integer (on heap) and setting pointer p to point to it
    int *p = new int;
    *p = 10;
    cout << *p << endl;

    // allocating memory for 10 integers (on heap) and setting pointer p to point to the base of this array
    int *p2 = new int [10];
    for(int i=0;i<10;++i){
        p2[i] = i+5;
    }
    for(int i=0;i<10;++i){
        cout << *(p2+i) << ' ';
    }
    cout << endl;

    //  delete/free the memory allocated on heap for 1 int (pointed to by p)
    delete p;
    //  delete/free the memory allocated on heap for 10 ints (pointed to by p2)
    delete []p2;

    return 0;
}