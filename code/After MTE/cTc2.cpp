#include <iostream>
using namespace std;

class Computer{
public:
    float price;
};

class Mobile{
    string m_name;
    float m_price;
public:
    void display(){
        cout << m_name << ' ' << m_price << '\n';
    }
    void set_name(string n){
        m_name = n;
    }
    void operator=(Computer c);
};
void Mobile::operator=(Computer c){
    m_price = c.price;
}

int main()
{
    Computer c1;
    c1.price = 30000;

    Mobile m1;
    m1.set_name("Nokia");
    m1 = c1;
    
    m1.display();
    return 0;
}