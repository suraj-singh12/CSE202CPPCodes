#include <iostream>
using namespace std;

void shiftTheZeroes(int *A, int n)
{
    // 4 5 0 6 0 7
    int count=0;
    for(int i=0;i<n;++i){
        if(A[i]!=0)
            A[count++] = A[i];
    }
    while(count<n){
        A[count++]=0;
    }
}
int main()
{
    int n;
    cout << "Size of array? ";
    cin >> n;
    int A[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    shiftTheZeroes(A, n);

    cout << "\nProcessed array is: \n";
    for (int i = 0; i < n; ++i)
    {
        cout << A[i] << " ";
    }
    return 0;
}