#include <iostream>
using namespace std;

class Sample{
    public:
    int number;
};
int main()
{
    Sample obj;
    obj.number = 10;
    cout << "Initial value of Number: " << obj.number << endl;

    Sample *ptr = &obj;
    ptr->number = 50;
    cout << "Modified by pointer: " << obj.number << endl;
    cout << "Showing using pointer: " << ptr->number << endl;
    
    return 0;
}