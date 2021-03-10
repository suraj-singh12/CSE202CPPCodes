#include <iostream>
using namespace std;
class Sum{
    int a,b,c;
public:
    Sum(int x,int y=0,int z=0)
    {
        a=x;    b=y;    c=z;
    }
    void add()
    {
        cout << (a+b+c) << endl;
    }
};
int main()
{
    Sum s1(10,20,30);
    Sum s2(10,20);
    Sum s3(10);
    s1.add();
    s2.add();
    s3.add();
    return 0;
}