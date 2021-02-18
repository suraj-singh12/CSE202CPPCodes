#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    char c='c';
    void *ptr;

    ptr = &a;
    cout << *(int *)ptr << endl;
    
    ptr = &c;
    cout << *(char *)ptr;
    return 0;
}