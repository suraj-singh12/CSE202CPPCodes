#include<iostream>
#define MAX 3
using namespace std;
int main()
{
    int A[MAX]={5,9,10};
    int *ptr=A;

    for(int i=0;i<MAX; i++){
        cout << "Addres: " << (ptr+i) << " " << "Value: " << *(ptr+i) << endl; 
    }
    cout << endl;
    return 0;
}