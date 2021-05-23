/*
 *      Exceptional Handling Mechanism
 *  C++ Style
 *      * Manages error in OO (Object oriented) manner
 *      * represent error in the form of an object
 *  Use / Define an exception class
 *      * Use - Library has readymade exception classes
 *      * Define - Inherit it if necessary
 *  When an exception occurs
 *      * Create an exception object
 *      * Throw exception object using throw
 *      * Catch the thrown exception object using catch
 *      * Put suspect code in try block
 * */

#include <iostream>
#include <cstring>
using namespace std;

class myex
{
    public:
        char str[100];
        myex(const char *s)     // intentionally made as const char *S, because "something" is a constant string
                                // for more information visit here: https://www.learncpp.com/cpp-tutorial/pointers-and-const/
        {
            strcpy(str,s);
        }
};
const int MAX = 5;
template <class T>
class Stack
{
    private:
        T stk[MAX];
        int top;
    public:
        Stack()
        {
            top = -1;
        }

        void push(T data)
        {
            if(top==MAX-1){
                throw myex("Stack Full");
            }
            else{
                top++;
                stk[top] = data;
            }
        }

        T pop()
        {
            if (top == -1){
                throw myex("Stack empty");
            }
            else{
                T n = stk[top];
                top--;
                return n;
            }
        }
};

int main()
{
    Stack <int> s1;
    try{
        s1.push(10);    s1.push(20);
        s1.push(30);    s1.push(40);
        s1.push(50);    s1.push(60);
        s1.push(70);    s1.push(80);
    }
    catch (myex e){
        cout << e.str << endl;
        // throw e;             // rethrow (will go to default exceptional handler now)
    }
    // NOTE: we can create multiple catch blocks for different types of exceptions that we know we may get.
    // and at last we can define a default exceptional handler too.

    // NOTE: We can rethrow the error from here also, 
    // then default exceptional handler will take over and put the error message

}

