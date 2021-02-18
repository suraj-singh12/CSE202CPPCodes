#include <iostream>
using namespace std;

int main()
{
    int limit;
    cout << "Enter the number of terms of fibonacci: ";
    cin >> limit;
    
    int next = 0 ;
    int first = 0, second = 1;

    cout << first << " " << second << " ";
    while(limit--){
        next = first + second;
        first = second;
        second = next;
        cout << next << " ";
   }
   return 0;
}