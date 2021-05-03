#include <iostream>
using namespace std;

void handler(){
    try{
        throw 40;
    }
    catch(int x){
        cout << x << endl;
        throw;      // rethrowing
    }
}
int main()
{
    cout << "main strt";
    try{
        handler();
    }
    catch(int z){
        cout << z;
    }
    return 0;
}