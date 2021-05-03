#include <iostream>
using namespace std;
int main()
{
    try{
        throw 'a';
    }
    catch (int x){
        cout << "error: " << x;
    }
    catch(...){
        cout << "Wrong error message passed\n";
    }
    return 0;
}