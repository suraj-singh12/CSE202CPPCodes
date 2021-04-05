/* class type to basic type casting using
 * constructor 
 * operator overloading
 */


#include <iostream>
using namespace std;

class Time{
    int hrs, min;
public:
    Time(int, int);     // by constructor
    operator int();     // by operator overloading
};

Time::Time(int h, int m)
{
    cout << "Class type to the basic type using constructor" << endl;
    hrs = h;
    min = m;
}
Time::operator int()
{
    cout << "Class type to the basic type using operator overloading" << endl;
    return ((hrs*60)+min);
}

int main()
{
    int h, m,duration;
    cout << "Enter hours, and minutes: ";
    cin >> h >> m;

    Time t(h,m);
    duration = t;       //overloaded int called automatically
                // duration = int(t) happening
    cout << "Total minutes are: " << duration << endl;

    duration = t.operator int();        //explicitly calling this overloaded int() (function)
    cout << "Total minutes are: " << duration << endl;

    return 0;

}