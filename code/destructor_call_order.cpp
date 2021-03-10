#include <iostream>
using namespace std;
class A{
    int id;
    static int count;
public:
    A(){
        count++;
        id=count;
        cout << "constructor for id " << id << endl;
    }
    ~A(){
        cout << "destructor for id " << id << endl;
    }
};
int A::count=0;
int main()
{
    A a[3];
    A d4;
    return 0;
}
/* Explaination for the output: 
 * it follows 
 * last created->first destructed
 * approach
 * so the object that is created at last is destructed at first
 */