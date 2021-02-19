// to show the function call difference
#include <iostream>
using namespace std;

void swap(int a, int b);
//void swap(int &a,int &b);
void swap(int *a, int *b);

int main()
{
    int num1=10,num2=20;
    int *ptr1=&num1, *ptr2=&num2;

    cout << "Initial Values are: num1 = " << num1 << "\tnum2 = " << num2 << endl;

    cout << "---------------------------------------------\n";

    swap(num1,num2);
    cout << "In main(): Call by value's result\n";
    cout << "num1: " << num1 << "\tnum2: " << num2 << endl;
    cout << "---------------------------------------------\n";

    num1=10,num2=20;

    // swap(&num1,&num2);
    // cout << "In main() Call by reference's result\n";
    // cout << "num1: " << num1 << "\tnum2: " << num2 << endl;
    // cout <<"---------------------------------------------\n";

    num1=10,num2=20;

    swap(ptr1,ptr2);
    cout << "In main() Call by address's result\n";
    cout << "num1: " << num1 << "\tnum2: " << num2 << endl;
    cout << "---------------------------------------------\n";

    return 0;
}
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "In swap(): values are swapped.\n";
    cout << "num1: " << a << "\tnum2: " << b << endl;
}
// void swap(int &a,int &b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout << "In swap(): values are swapped.\n";
//     cout << "num1: " << a << "\tnum2: " << b << endl;
// }
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    cout << "In swap(): values are swapped.\n";
    cout << "num1: " << *a << "\tnum2: " << *b << endl;
}