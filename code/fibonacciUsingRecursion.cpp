#include <iostream>
using namespace std;

int fibonacci(int n){
        if(n==0||n==1)
            return n;
        return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int limit;   int i=0;
    cout << "Enter the number of terms of fibonacci: ";
    cin >> limit;
    
    while(i < limit){
        cout << fibonacci(i) << " ";
        i++;
   }
   return 0;
}