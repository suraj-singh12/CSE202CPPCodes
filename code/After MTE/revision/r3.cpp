// enumerators

#include <iostream>
using namespace std;
int main()
{
    enum ms{    single, married    };
    enum ms person1,person2;
    person1 = single;
    person2 = married;
    cout << person1 << " " << person2 << endl;
    printf("%d %d\n",person1,person2);
    
    return 0;
}