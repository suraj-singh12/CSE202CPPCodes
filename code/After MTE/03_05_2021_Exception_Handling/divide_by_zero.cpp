// A simple program to show exception handling using try, throw, catch
#include <iostream>
using namespace std;

/*
int main()
{
    float n1,n2;
    cout << "Enter the numbers for division : \n";
    cin >> n1 >> n2;
    try{
        if(n2==0.0)
            throw "division by zero error!\n";
        cout << n1 << '/' << n2 << " is: " << n1/n2 << endl;
    }
    catch (const char* err){
        cerr << err;
    }
    return 0;
}
*/
/*
// Enter n2 as 0 and see the output
#include <iostream>
using namespace std;

int main()
{
    float n1,n2;    // note: float type values
    cout << "Enter the numbers for division : \n";
    cin >> n1 >> n2;
    cout << n1 << '/' << n2 << " is: " << n1/n2 << endl;
    return 0;
}
*/


// Enter n2 as 0 and see the output
#include <iostream>
using namespace std;

int main()
{
    int n1,n2;      // note: float type values
    cout << "Enter the numbers for division : \n";
    cin >> n1 >> n2;
    cout << n1 << '/' << n2 << " is: " << n1/n2 << endl;
    return 0;
}
