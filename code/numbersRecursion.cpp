#include <iostream>
using namespace std;

int naturalRecurse(int n){
    if(n>100)
        return 1;
    cout << n << " ";
    return naturalRecurse(n+1);

}
int main()
{
    naturalRecurse(1);
    return  0;
}