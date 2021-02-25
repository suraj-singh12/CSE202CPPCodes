#include <iostream>
#define n 3
using namespace std;

int main()
{
    int A[n][n],B[n][n];
    
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            cin >> A[i][j];
    
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            cin >> B[i][j];
    
    int sum[n][n];
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            sum[i][j]=A[i][j]+B[i][j];

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j)
            cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}