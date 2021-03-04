#include <iostream>
using namespace std;

class Point{
private:
    int x,y;
public:
    Point(int i=0,int j=0): x(i),y(j) {};
    /* above is equivalent to below code:
     * Point(int i=0,int j=0){
     *      x=i;
     *      y=j
     * }
     * */
    void show()
    {
        cout << x << ' ' << y << endl;
    }
};
int main()
{
    Point t1(10,15);
    t1.show();
    return 0;
}