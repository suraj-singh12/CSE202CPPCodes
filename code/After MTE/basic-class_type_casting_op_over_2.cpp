// basic to class type casting using constructor

#include <iostream>
using namespace std;

class Years{
    int days;
public:
    void operator=(int);
    void display();
};
void Years::operator= (int days)
{
    cout << "Basic type to class type using operator overloading\n";
    this->days = days;
}
void Years::display()
{
    cout << days/365 << " year(s)\n";
    cout << days%365 << " day(s)\n";
}

int main()
{
    int total_days;
    cout << "Enter the no of days: ";
    cin >> total_days;

    Years y;
    y = total_days;
    y.display();
    return 0;
}