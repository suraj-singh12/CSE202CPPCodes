#include <iostream>
using namespace std;

int main()
{
    int x = -1;
    try
    {
        if (x < 0)
            throw "10error";
    }
    // below work like switch case, execution of any one / or the default takes place 
    // depending on the type of error thrown
    catch (float x)
    {   cout << x << "is float";    }
    catch (char x)
    {   cout << x << "is char";     }
    catch (int x)
    {   cout << x << " is integer";     }
    catch (...)
    {   
        cout << "error wrong message passed\n"; // default catch block if no block is executed
    }
    cout << "After error";
    return 0;
}
