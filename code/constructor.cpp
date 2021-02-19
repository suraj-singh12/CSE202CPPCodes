#include <iostream>
using namespace std;

class Student{
    string name;
    int roll;
    public:
    Student(string name,int roll){
        this->name=name;
        this->roll=roll;
        cout << "Name is : " << this->name << "\t Roll no: " << this->roll;
    }
};

int main()
{
    Student s1("Suraj",21);
    return 0;
}