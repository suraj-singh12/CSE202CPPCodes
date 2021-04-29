#include <iostream>
using namespace std;

class Sample{
    private:
        int i; 
        float f;
    public:
        void set_data(int ii, float ff){
            i = ii;
            f = ff;
        }
        void show_data(){
            cout << i << " " << f << endl;
        }
};

int main()
{
    Sample s1;
    s1.set_data(10,3.14);

    Sample s2;
    s2.set_data(20,5.43);

    s1.show_data();
    s2.show_data();

    return 0;
}