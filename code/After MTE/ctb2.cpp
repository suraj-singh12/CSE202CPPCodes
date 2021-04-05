/* class type to basic type casting using
 * constructor 
 * operator overloading
 */


#include <iostream>
using namespace std;

class Years{
    int yrs, days;
public:
    Years(int, int);     // by constructor
    operator int();     // by operator overloading
};

Years::Years(int y, int d)
{
    cout << "Class type to the basic type using constructor" << endl;
    yrs = y;
    days = d;
}
Years::operator int()
{
    cout << "Class type to the basic type using operator overloading" << endl;
    return ((yrs*365)+days);
}

int main()
{
    int y, d,total_days;
    cout << "Enter years, and days: ";
    cin >> y >> d;

    Years t(y,d);
    total_days = t;       //overloaded int called automatically
                // duration = int(t) happening
    cout << "Total days are: " << total_days << endl;

    total_days = t.operator int();        //explicitly calling this overloaded int() (function)
    cout << "Total days are: " << total_days << endl;

    return 0;

}