#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
   cout << sizeof(int) << " " << sizeof(long) <<  " " << sizeof(long long) << endl;
    cout << fixed << setprecision(0);
   /* pow(2, (sizeof()*8) -1 ) = 2^(total_bits-1);   
    * eg. total_bits used by a data_type = (total_bytes * 4) -1
    * [why do we subtract 1 in total_bits, because one bit is assigned for sign. So in actual we have (total_bits-1)bits
    * 
    * range of data type is defined as 
    *       -2^(total_bits-1)   <=   range  <= 2^(total_bits-1) - 1
    * here we are showing only the positive side range
    */
   
    cout << "Range: " << pow(2,sizeof(int)*8 - 1)-1 << " " << pow(2, sizeof(long)*8 - 1)-1 << " " << pow(2, sizeof(long long)*8 - 1)-1 << endl;
    /*
     * learn about manipulators here
     * https://www.geeksforgeeks.org/manipulators-in-c-with-examples/#:~:text=Manipulators%20are%20helping%20functions%20that,extraction%20(%3E%3E)%20operators.
     */
    return 0;
}
