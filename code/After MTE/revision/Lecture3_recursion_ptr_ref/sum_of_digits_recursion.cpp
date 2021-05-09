// check recursion.png in the same directory
#include <iostream>
using namespace std;

int rsum(int n){
    int d,s;
    if(n!=0){
        d = n%10;
        n = n/10;
        s = d + rsum(n);
    }
    else 
        return 0;
    return s;
}
/* // compact version 
int rsum(int n){
    if(n<1){
        return n;
    }
    return ((n%10) + rsum(n/10));
}
*/
int main()
{
    int num, sum;
    cout << "Enter a number to get the sum of its digits: ";
    cin >> num;
    sum = rsum(num);
    cout << sum << endl;
    return 0;
}