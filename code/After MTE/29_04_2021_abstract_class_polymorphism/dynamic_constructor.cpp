#include <iostream>
using namespace std;

class Base{
    int *number;
    public:
    Base(int n){            // dynamic constructor
        cout << "Constructing...";
        number = new int;
        *number = n;
    }

    void display(){
        cout << "Your number: " << *number << endl;
    }
    
    ~Base(){
        cout << "Destructing...";
        delete number;      // freeing the memory allocated to pointer number on heap
    }
};

int main()
{
    Base b(10);
    b.display();
    return 0;
}