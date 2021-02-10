/*  program which will ask the user to enter his/her marks (out of 100). 
 * Define a function that will display grades according to the marks entered 
 * Criteria:
 * Marks    Grade
 * 91-100   AA
 * 81-90    AB
 * 71-80    BB
 * 61-70    BC
 * 51-60    CD
 * 41-50    DD
 * <=40     FAIL
 * */
#include <iostream>
using namespace std;

void MarksToGrades(int );

int main()
{
    int marksOfStudent;
    cout << "Enter the marks: ";
    cin >> marksOfStudent;
    MarksToGrades(marksOfStudent);
    return 0;
}

void MarksToGrades(int marks)
{
    if(marks <= 100){
        if(marks > 90)
            cout << "AA" << endl;
        else if(marks > 80)
            cout << "AB" << endl;
        else if(marks > 70)
            cout << "BB" << endl;
        else if(marks > 60)
            cout << "BC" << endl;
        else if(marks > 50)
            cout << "CD" << endl;
        else if(marks > 40)
            cout << "DD" << endl;
        else
            cout << "FAIL" << endl;
    }
    else
        cout << "Error!! Invalid marks value !!" << endl;
}