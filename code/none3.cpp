#include <iostream>
using namespace std;
class Area
{
    int length;
    int breadth;
public:
    void setDim()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    void getArea()
    {
        cout << "Area: " << (length*breadth) << " sq. units"<< endl;
    }
};
int main()
{
    Area rect;
    rect.setDim();
    rect.getArea();
    return 0;
}