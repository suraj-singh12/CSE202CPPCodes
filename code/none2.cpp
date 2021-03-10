/*
// Part A
#include <iostream>
using namespace std;

inline int square(int n){
    return n*n;
}
int main(){ 
    int num=5;
    cout << "The square of " << num << " is ";
    cout << square(num) << endl;
    return 0;
}
*/
//Part B
#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll;
    static int count;
public:
    Student(string n,int r)
    {
        name = n;
        roll = r;
        count++;
        // counter();
    }
    // static void counter()
    // {
    //     count++;
    //     // cannot access name and roll (non-static members)
    // }
    static void total_objects()
    {
        cout << count << " objects of student class has been created till now" << endl;
        //non-static member function total_objects() can access both static and non-static members
        //so it can acess name, roll and count all...
    }
};
int Student::count=0;
int main()
{
    Student s("Suraj",21);
    Student s2("Suraj Singh",25);
    s.total_objects();
    Student::total_objects();
    return 0;
}