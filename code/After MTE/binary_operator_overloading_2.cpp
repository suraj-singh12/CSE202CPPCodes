// Binary operator overloading concept
// here box is 2 dimensional
#include <iostream>
using namespace std;

class BoxArea{
private:
    double length;
    double breadth;
public:
    void setLength(double len){
        length = len;
    }
    void setBreadth(double bre){
        breadth = bre;
    }

    double getArea(){
        return (length*breadth);
    }

    //overloading '+' operator
    // it is binary operator overloading
    BoxArea operator +(const BoxArea
     &b){
        BoxArea box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        return box;
    }
    BoxArea operator -(const BoxArea &b){
        BoxArea box;
        box.length = abs(this->length - b.length);
        box.breadth = abs(this->breadth - b.breadth);
        return box;
    }
    BoxArea operator /(const BoxArea &b){
        BoxArea box;
        box.length = this->length / b.length;
        box.breadth = this->breadth / b.breadth;
        return box;
    }
    
    BoxArea operator *(const BoxArea &b){
        BoxArea box;
        box.length = this->length * b.length;
        box.breadth = this->breadth * b.breadth;
        return box;
    }

};

int main()
{
    BoxArea box1,box2,box3,box4,box5,box6;
    box1.setLength(6.0);
    box1.setBreadth(8.0);
    
    cout << "The area of box 1 is: " << box1.getArea() << endl;

    box2.setLength(16.0);
    box2.setBreadth(18.0);

    cout << "The area of box 2 is: " << box2.getArea() << endl;
    
    box3 = box1 + box2;
    // call made to '+' operator overloader
    
    box4 = box1 - box2;
    // call made to '-' operator overloader
    
    box5 = box1 / box2;
    // call made to '/' operator overloader

    box6 = box1 * box2;
    // call made to '*' operator overloader
    cout << "The area of box 3 is: " << box3.getArea() << endl;
    cout << "The area of box 4 is: " << box4.getArea() << endl;
    cout << "The area of box 5 is: " << box5.getArea() << endl;
    cout << "The area of box 6 is: " << box6.getArea() << endl;


    return 0;
}