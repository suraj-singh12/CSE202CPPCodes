#include <iostream>
using namespace std;
int main()
{
    int i= 10;
    int &j = i;

    cout << i << " " << j << endl;

    j = 50;
    cout << i << " " << j << endl;

    return 0;
}
/* Reference is a const pointer
 * A reference is automatically dereferenced, j becomes *j automatically
 * hence when we use a reference j, we reach a referrent i
 * changing a reference changes reference (i.e. doing j = 50, makes i = 50)
 * */