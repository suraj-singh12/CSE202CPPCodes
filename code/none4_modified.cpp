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
        if(Arr[i]==0)
        {
            if(i>1 && Arr[i-1]!=0 && Arr[i-2]!=0)
            {
                int temp=Arr[i-1];
                Arr[i-1] = Arr[i];
                Arr[i]=temp;
            }
            else if( i<n-2 && Arr[i+1]!=0 && Arr[i+2]!=0)
            {
                int temp=Arr[i+1];
                Arr[i+1] = Arr[i];
                Arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;++i)
        cout << Arr[i] << " ";
    return 0;
}