// Binary operator overloading concept
#include <iostream>
using namespace std;

class BoxVolume{
private:
    double length;
    double breadth;
    double height;
public:
    void setLength(double len){
        length = len;
    }
    void setBreadth(double bre){
        breadth = bre;
    }
    void setHeight(double h){
        height = h;
    }

    double getVolume(){
        return (length*breadth*height);
    }

    //overloading '+' operator
    // it is binary operator overloading
    BoxVolume operator +(const BoxVolume &b){
        BoxVolume box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
};

int main()
{
    BoxVolume box1,box2,box3;
    box1.setLength(6.0);
    box1.setBreadth(8.0);
    box1.setHeight(9.0);
    
    cout << "The volume of box 1 is: " << box1.getVolume() << endl;

    box2.setLength(16.0);
    box2.setBreadth(18.0);
    box2.setHeight(19.0);

    cout << "The volume of box 2 is: " << box2.getVolume() << endl;
    
    box3 = box1 + box2;
    // call made to '+' operator overloader

    cout << "The volume of box 3 is: " << box3.getVolume() << endl;

    return 0;
}