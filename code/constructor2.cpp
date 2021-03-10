//constructor
//parametrised constructor
//copy constructor

#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;
    int roll;
    int standard;

public:
    Student(string name, int roll, int standard)
    {
        this->name = name;
        this->roll = roll;
        this->standard = standard;

        cout << "I am constructor and \nI am called automatically when the object of class is created.";
        cout << "\nI've set this name to the object name : " << this->name << endl;
        cout << "And your number is: " << rand() << endl;
    }
};
int main()
{
    Student s("Pratap", 21, 12);
    return 0;
}