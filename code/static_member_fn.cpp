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
    }
    static void total_objects()     //can only access static members
    {
        cout << count << " objects of student class has been created till now" << endl;
    }
};
int Student::count=0;
int main()
{
    Student s("Suraj",21);
    Student s2("Suraj Singh",25);
    
    // static member functions also does not depend on object of class (just like static data members). 
    // We are allowed to invoke a static member function using the object and the ‘.’ operator but 
    // it is recommended to invoke the static members using the class name and the scope resolution operator.
    s.total_objects();
    Student::total_objects();
    return 0;
}
