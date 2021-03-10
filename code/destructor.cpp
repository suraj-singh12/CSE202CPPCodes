#include <iostream>
using namespace std;

class Employee{
    public:
    Employee()
    {
        cout << "I'm constructor and I'm automatically called when an object of Employee class is created.\n";
    }
    ~Employee()
    {
        cout << "I'm destructor and I'm also automatically called when an object of Employee class goes out of scope.\n";
    }
};
int main()
{
    Employee E;
    return 0;
}