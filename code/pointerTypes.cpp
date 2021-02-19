#include <iostream>
using namespace std;

class Student{
    string name;
    int roll;
    
    public:
    int clas;
    Student(string name,int roll, int clas){
        this->name = name;      //use of this pointer
        this->roll=roll;
        this->clas=clas;
    }
    void display(){
        cout << name << " " << roll << " " << clas << '\n';
    }
};

int main()
{
    int *int_ptr;           //wild pointer
    int *int_ptr2=NULL;      //NULL pointer

    Student obj("Suraj",21,12);
    Student *s_ptr=&obj;        //class pointer
    
    obj.display();
    s_ptr->display();

    int Student::*clas_ptr=&Student::clas;      //pointer to class data member
    obj.*clas_ptr=14;
    cout << s_ptr->clas << endl;
    
    s_ptr->*clas_ptr=15;
    cout << s_ptr->clas << endl;
    
    void (Student::*showData)(void)=&Student::display;      //pointer to class member function
    (obj.*showData)();
    return 0;
}