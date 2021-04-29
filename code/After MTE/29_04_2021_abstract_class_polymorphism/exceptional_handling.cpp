// try, catch, throw

#include <iostream>
using namespace std;
int divide(int a,int b){
    if(b==0)
        throw "Error, denominator can't be zero!!\n";
    return (a/b); 
}

int main()
{
    int num,denom;
    cin >> num >> denom;
    try{    
        cout << divide(num,denom);
    }
    catch(const char* error){
        cerr << error;
    }
    cout << endl;
    return 0;
}