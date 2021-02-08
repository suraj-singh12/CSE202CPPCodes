/* Program to demonstrate fuction overloading
 * In order to overload fuctions they must have :
 * different - type, number or sequence of parameters
 * 
 * NOTE: return type of fuction does not play any role in overloading of fuctions
 * example: int myfun(int a)
 *          float myfun(int a)
 * are not overloaded functions, they are same. so error will be thrown by compiler
 * */

#include <iostream>
using namespace std;

int sum(int a, int b){
    return (a+b);
}
int sum(int a, int b, int c){
    return (a+b+c);
}
float sum(float a, float b){
    return (a+b);
}
float sum(int a, float b){
    return (a+b);
}

float sum(float a, int b){
    return (a+b);
}

int main()
{
    cout << sum(5,6) << endl;
    cout << sum(5,6,7) << endl;
    cout << sum(5.6f,7.4f) << endl;
    cout << sum(5,7.6f) << endl;
    cout << sum(5.7f,6) << endl;
    return 0;
}
