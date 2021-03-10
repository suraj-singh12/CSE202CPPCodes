#include <iostream>
using namespace std;
class Sum{
    const int x,y,z;
public:
    Sum(int &a,int &b,int &c):x(a),y(b),z(c){};
    
    // below constructor will not work as x,y,z are 'non-static const' data members
    // Sum(int a,int b, int c){
    //     x=a;
    //     y=b;
    //     z=c;
    // }
    void sum()
    {
        cout << x+y+z << endl;
    }
};
int main()
{
    int a=10,b=20,c=10;
    Sum s(a,b,c);
    s.sum();
}