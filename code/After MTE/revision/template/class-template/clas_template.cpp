#include <iostream>
using namespace std;
const int MAX = 10;

template <class T>
class Stack
{
    private:
        T stk[MAX];
        int top;
    public:
        Stack(){
            top = -1;
        }

        void push(T data){
            if(top == MAX - 1){
                cout << "Stack is FULL\n";
            }
            else{
                top++;
                stk[top] = data;
            }
        }
        void show(){
            if(top > -1){
                cout << "\nState of stack:\n";
                for(int i=top;i>=0;--i){
                    cout << "|\t" << stk[i] << "\t|" << endl;
                }
                cout << " ---------------\n";
            }
            else 
                cout << "\nStack is empty\n";
        }
};

int main()
{
    Stack <int> s1;     // stack of int type will be made by compiler using our generic stack
    s1.push(10);    s1.push(20);

    Stack <float> s2;   // stack of float type will be made by compiler using our generic stack
    s2.push(1.1);   s2.push(2.1);

    s1.show();  s2.show();
    return 0;
}

/* In this program only 2 stack are created by the compiler
 1. int type
 2. float type
 if we create an object of any other type say char, then a stack for char will also be made
 */