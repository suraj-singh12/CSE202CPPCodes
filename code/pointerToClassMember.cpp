#include <iostream>
using namespace std;

class Sample{
    public:
    int number=10;
    int num2;

    void showData(){
        cout << "Show called: " << number << endl;
    }
};
int main()
{
    Sample obj;
    obj.number = 10;
    cout << "Initial value of Number: " << obj.number << endl;

    //ptr is a pointer to 'number' only
    int Sample::*ptr = &Sample::number;
    obj.*ptr=50;

    cout << "Modified by pointer: " << obj.number << endl;
    cout << "Showing using pointer: " << obj.*ptr << endl;
    
    // ptr2 is a pointer to 'obj' object of class Sample
    Sample *ptr2=&obj;
    ptr2->*ptr=60;

    obj.showData();
    ptr2->showData();

    return 0;
}