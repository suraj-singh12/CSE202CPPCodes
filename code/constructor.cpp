#include <iostream>
using namespace std;

class Student{
    string name;
    int roll;
    public:
    Student();
    Student(string name,int roll)       // parametrized constructor
    {
        this->name=name;
        this->roll=roll;
        cout << "Name is : " << this->name << "\t Roll no: " << this->roll;
    }
    Student(const Student &s)
    {
        name = s.name;
        roll = s.roll;
        cout << "\n\nCopy constructor did the job:-\n";
        cout << "Name is : " << this->name << "\t Roll no: " << this->roll;
    }
};

int main()
{
    Student s1("Suraj",21);
    Student s2=s1;
    Student s3;
    s3=s1;
    return 0;
}
/*
class CSE
{
    string faculty_name;
    public:
    CSE(string f)
    {
        faculty_name=f;
    }
};
int main()
{
    CSE f1("Vikas Dubey");
    return 0;
}
*/