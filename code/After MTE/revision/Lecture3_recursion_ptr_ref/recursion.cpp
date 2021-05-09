// An infinite recursive function

#include<iostream>
using namespace std;

void fun();
int main(){
    fun();
}

void fun(){
    cout << "Hi" << endl;
    fun();      // calling itself again (recursive call)
                // and this process of repeated recursive calls is called recursion
}