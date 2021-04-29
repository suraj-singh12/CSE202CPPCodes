#include <iostream>
using namespace std;

class Sample{
    public:
        int i; 
        float f;
};

int main()
{
    Sample s1 = {10,3.14};
    cout << s1.i << " " << s1.f << endl;

    Sample s2 = {20,5.43};
    cout << s2.i << " " << s2.f << endl;

    return 0;
}