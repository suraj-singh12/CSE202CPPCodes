#include <iostream>
using namespace std;
class Sum{
    const int x,y,z;
public:
    Sum(int a,int b,int c):x(a),y(b),z(c){};
    
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
    Sum s(10,20,10);
    s.sum();
}
