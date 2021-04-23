#include <iostream>
using namespace std;

class Student{
    string name;
    int roll;
public:
    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    }
    void show(){
        cout << "Name : " << name << '\t';
        cout << "Roll no : " << roll << endl;
    }
    void set_name(string name){
        this->name = name;
    }
    void set_roll(int roll){
        this->roll = roll;
    }
};

int main()
{
    Student *s1 = new Student [5] {{"Suraj",21},{"Tarun",22},{"Michael",45},{"Fury",45},{"Roger",35}};
    for(int i=0;i<5;++i){
        s1[i].show();
    }
    delete[] s1;
    return 0;
}