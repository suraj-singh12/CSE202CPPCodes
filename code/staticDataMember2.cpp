#include <iostream>
using namespace std;
class Student{
    public:
    int rollNo;
    static int sysID;
};
int Student::sysID = 0;

int main()
{
    Student student1;
    student1.rollNo = 12333;
    student1.sysID = 546543434;

    Student student2;
    student2.rollNo = 352457;
    
    cout << student1.rollNo << " ";
    cout << student1.sysID << " " << endl;

    cout << student2.rollNo << " ";
    cout << student2.sysID << endl;
    return 0;
}
