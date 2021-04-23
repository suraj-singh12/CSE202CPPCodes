#include <iostream>
using namespace std;
int main()
{
    int  *p = new int [2];
    p[0] = 5;

    delete[] p;
    
    p = new int [5];
    p[1]= 10;

    for(int i=0;i<2;++i)
        cout << *(p+i) << ' ';
    
    // free the memory allocated on heap
    delete[] p;
    // make p point to NULL, so it is not a dangling pointer
    p = NULL;
    return 0;
}