#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
   cout << sizeof(int) << " " << sizeof(long) <<  " " << sizeof(long long) << endl;
    cout << fixed << setprecision(0);
    cout << "Range: " << pow(2,sizeof(int)*8 - 1) << " " << pow(2, sizeof(long)*8 - 1) << " " << pow(2, sizeof(long long)*8 - 1) << endl;
    /*
     * learn about manipulators here
     * https://www.geeksforgeeks.org/manipulators-in-c-with-examples/#:~:text=Manipulators%20are%20helping%20functions%20that,extraction%20(%3E%3E)%20operators.
     */
    return 0;
}