// doesn't work right
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Arr[n];
    for(int i=0;i<n;++i)
        cin >> Arr[i];
    
    for(int i=0;i<n-1;++i)
    {
        if(Arr[i+1]==0)
        {
            int temp=Arr[i];
            Arr[i]=Arr[i+1];
            Arr[i+1]=temp;
            i++;
        }
    }
    for(int i=0;i<n;++i)
        cout << Arr[i] << " ";
    return 0;
}