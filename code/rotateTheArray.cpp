#include <iostream>
using namespace std;
void rotate(int *A,int n, int t){
    
    for(int i=0;i<t;++i)        //run t times
    {
        //rotating
        int temp=A[0];        
        for(int j=1;j<n;++j)        //shift all elements (from index 1 to n-1) to left by 1
        {
            A[j-1]=A[j];
        }
        A[n-1]=temp;                //put the first element at last
    }
}
int main()
{
    int n;
    cout << "Size of array? ";
    cin >> n;
    int A[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;++i)
        cin >> A[i];

    int times;
    cout << "How many times to rotate? ";
    cin >> times;

    rotate(A,n,times);

    cout << "\nRotated array is: \n";
    for(int i=0;i<5;++i){
        cout << A[i] << " ";
    }
    return 0;
}