#include <iostream>
using namespace std;

int main()
{

    try
    {
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
        cout << "error wrong message\n"; // default catch block if no block is executed
    }

    return 0;
}
