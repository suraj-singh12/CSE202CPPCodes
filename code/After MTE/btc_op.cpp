// basic to class type casting using "operator overloading"

#include <iostream>
using namespace std;

class Time{
    int hrs, min;
public:
    void display();
    void operator= (int);
};
void Time::display()
{
    cout << hrs << " hrs\t";
    cout << min << " min\n";
}
void Time::operator= (int t)        // overloaded = operator
{
    cout << "Basic type to class type using Operator overloading\n";
    hrs = t/60;
    min = t%60;
}

int main()
{
    int t;
    cout << "Enter time (in minutes): ";
    cin >> t;

    Time T1;
    T1 = t;     // operator= called
    T1.display();
    return 0;
}