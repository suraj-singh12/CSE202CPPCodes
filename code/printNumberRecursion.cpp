// Program to print all natural numbers between 21 to 55 (inclusive) using recursion
#include <iostream>
using namespace std;

int recursivePrint(int L,int H){
    if(L>H)
        return 0;
    cout << L << " ";
    return recursivePrint(++L,H);
}
int main()
{
    recursivePrint(21,55);
    cout << endl;
    return 0;
}