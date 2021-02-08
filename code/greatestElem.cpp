// Program to find greatest element in an array

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int A[n];
    cout << "Enter " << n << " space seperated integers: \n";
    for(int i = 0; i < n; ++i)
        cin >> A[i];
    
    int greatest = A[0], index = 0;
    for(int i = 1;i < n; ++i)
    {
        if(A[i] > greatest){
            greatest = A[i];
            index = i;
        }
    }

    cout << "The greatest element is: " << greatest << " at position: " << index+1 << endl;
    return 0;
}