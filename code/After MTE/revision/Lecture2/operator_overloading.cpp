#include <iostream>
using namespace std;

class Complex{
private:
    float real;
    float imag;
public:
    Complex(float r=0,float i=0){
        real = r;
        imag = i;
    }
    Complex operator+(Complex const &c){
        Complex c1;
        c1.real = real + c.real;
        c1.imag = imag + c.imag;
        return c1;
    }
    Complex operator-(Complex const &c){
        Complex c1;
        c1.real = real - c.real;
        c1.imag = imag - c.imag;
        return c1;
    }
    void show(){
        if(imag>0)
            cout << real << "+" << imag  << "i" << endl;
        else
            cout << real << imag << "i" << endl;
    }
};

void variety(){
    Complex a(1.0,1.0);
    Complex b(2.0,2.0);
    Complex c;
    float d = 1.1;

    c = a + b;
    //or 
    // c = a.operator+(b);
    c.show();

    c = a + d;
    // or 
    // c = a.operator+(d);
    // Note: Compiler will promote d to an object of Complex as soon it reaches as a parameter to the overloaded + operator
    // compiler will do so, by using constructor like this
    // Complex(float r = 1.1, float i = 0);
    // see the value of d is sent as argument for r, and i remains default
    // so the complex object becomes : 1.1 + 0i
    c.show();

    //c = d + a;  // wrong
    
    // because there is no function for addition of a complex object to float, in float's class
    // d.operator+(a complex object) // nothing of this type exists
}
int main(){
    float r1,i1,r2,i2;
    
    cin >> r1 >> i1;
    cin >> r2 >> i2;
    
    Complex obj1(r1,i1);
    Complex obj2(r2,i2);
    obj1.show();
    obj2.show();

    Complex obj3 = obj1 + obj2;
    Complex obj4 = obj1.operator+(obj2);
    //(obj1 + obj2) is equivalent to obj1.operator+(obj2);
    obj3.show();
    obj4.show();

    Complex obj5 = obj1 - obj2;
    Complex obj6 = obj1.operator-(obj2);
    //(obj1 - obj2) is equivalent to obj1.operator-(obj2);
    obj5.show();
    obj6.show();

    cout << endl;
    variety();
    return 0;
}