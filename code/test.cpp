#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int A[n];
    cout << "Enter " << n << " space seperated elements: \n";
    for(int i=0;i<n;++i)
        cin >> A[i];
    
    int prod = 1, sum = 0;
    for(int i=0;i<n;++i){
        prod *= A[i];
        sum += A[i];
    }

    cout << "Product of all the elements : " << prod << endl;
    cout << "Sum of all the elements : " << sum << endl;
    return 0;
}