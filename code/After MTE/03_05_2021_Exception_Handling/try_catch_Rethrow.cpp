#include <iostream>
using namespace std;
int main()
{
    try{
        try{
            throw 20;
        }
        catch(int err_code){
            cout << "I am inner catch block with error code: " << err_code << "\n";
            // rethrowing
            throw;  // throwing same err_code by default
            // throw 50; // in case you want to throw some different error 
        }
    }
    catch(int err_cd){
        cout << "I am outer catch block with error code: " << err_cd << "\n";
    }
    return 0;
}