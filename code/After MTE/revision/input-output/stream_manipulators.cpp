#include <iostream>     
// zero argument manipulators like hex, dec, showpos etc are public static variables within iostream class
#include <stdio.h>
#include <iomanip>      
// manipulators with arguments >=1 , like setw(n) are declared in iomanip file
using namespace std;

int main()
{
    int i= 752;

    //block 1 ----------------------------------
    printf("%o %d %x\n",i,i,i);

    printf("%#o %d %#x\n\n",i,i,i);
    // -----------------------------------------

    // block 2 ----------------------------------
    cout << oct << i 
         << " " << dec << i 
         << " " << hex << i << endl;
    
    cout << showbase << oct << i 
         << " " << dec << i 
         << " " << hex << i << endl;

    cout << uppercase << showbase << oct << i 
         << " " << dec << i 
         << " " << hex << i << endl;
    // ------------------------------------------

    /* The block 1 and block 2 are equivalent; both print a given integer in hexadecimal, octal and decimal form
     * also note the effect of showbase and # in %#x
     * in block 2: 
     *      hex, oct, dec, showbase are all called 'manipulators'
     * and
     * %x, %o, and %d, %#x, %#o are 'format specifiers'; used in C
     * */

    cout << endl;
    // NOTE: the zero argument manipulators(like hex, oct, shopos etc) stick to the stream; see
    cout << "see hex has sticked to cout stream\n";
    cout << 213 << endl;

    cout << "now overriding hex with dec \n";
    cout << dec << 213 << endl;

    cout << "Now without any manipulator\n";
    cout << 213 << endl;

    //---------------------------------------------------------------------------
    cout << internal << showpos << setw(10) << i << endl;
    // setw(10) means set a width of 10 columns (and write the number in those)
    // showpos means show positive sign if number is positive
    // internal means adjust the remaining spaces of setw(10) in between + and number
    
    cout << internal << noshowpos << setw(10) << i << endl;
    cout << "|" << internal << setw(5) << i << "|" << endl;
    //----------------------------------------------------------------------------

    char str[] = "Dream. Then make it happen!";
    cout << '|';
    cout << setw(40) << str;        // fill this width of 40 columns from right to left
    cout << '|' << endl;

    cout << '|';
    cout << left << setw(40) << str;        // fill this width of 40 columns from left to right
    cout << '|' << endl;

    // Note: User can also define its own custom manipulators
    return 0;
}