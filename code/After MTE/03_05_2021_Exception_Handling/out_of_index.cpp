#include<iostream>
using namespace std;

int main()
{
    int A[5];
    for(int i=0;i<5;++i){
        A[i] = i+2;
    }
    int index = 0;
    try{
        while (true){
            if(index >=5)
            {    throw "\nError: Array out of bound accessing\n";   }
            cout << A[index] << " ";
            index++;
        }
    }
    catch (const char* err){
        cerr << err ;
    }
}