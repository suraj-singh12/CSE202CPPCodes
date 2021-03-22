#include <iostream>
using namespace std;

class Distance{
private:
    int x;
    int y;

public:
    Distance(int x1,int y1)
    {
        x = x1;
        y = y1;
    }
    void display(){
        cout << "The values of x and y are: " 
             << x << " " << y << endl;
    }
    //operator overloading
    // we are overloading '--','++', '-' operator
    // it is unary operator overloading (i.e. only one operand it has, so nothing is passed as argument)
    Distance operator --(){
        x = x-1;
        y = y-1;
        return Distance(x,y);
    }
    Distance operator ++(){
        x = x+1;
        y = y+1;
        return Distance(x,y);
    }
    Distance operator -(){
        x = -x;
        y = -y;
        return Distance(x,y);
    }

};

int main(){
    Distance d1(-5,10), d2(10,-20);
    --d1;       //single object (operand) so unary 
    d1.display();

    --d2;
    d2.display();

    -d1;       //single object (operand) so unary 
    d1.display();

    -d2;
    d2.display();

    ++d1;       //single object (operand) so unary 
    d1.display();

    ++d2;
    d2.display();

    return 0;
}