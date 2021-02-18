#include <iostream>
using namespace std;

int recurseName(string name){
    static int n=1;
    if(n>5)
        return 0;       // return 0 as a sign, that the fn ran successful
    cout << name << endl;
    n++;
    return recurseName(name);

}
int main()
{
    recurseName("Suraj Singh");
    return  0;
}