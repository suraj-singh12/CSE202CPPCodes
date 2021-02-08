// Program to demonstrate inline functions
#include <bits/stdc++.h>
using namespace std;

inline int square(int n){
    return n*n;
}
int main()
{
    int num = 5;
    cout << "Square of " << num << " is " << square(num);        //here the definition of square fn is placed by compiler
                                    // no fuction call is made
                                    // this is now equivalent to :
    // cout << "Square of " << num << " is " << n*n;
    cout <<"\n" << setbase(16) << 100;
    return 0;
}