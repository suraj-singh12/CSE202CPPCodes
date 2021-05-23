#include <iostream>
using namespace std;

/* syntax of function template
    template <typename T>
    template <class T>

    here
        both of the syntax are same
        template is a keyword 
        typename/class is a keyword which is a generic type-name, not a specific 
        T is any normal variable name of generic type typename
 */ 

template <class T>
void myswap(T &a , T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    float c = 14.5, d = 15.5;
    long e = 16, f = 87;
    cout << "------------------------\n";
    cout << "Before swap\n";
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    cout << e << " " << f << endl;

    /* when we compile this program, as soon compiler reaches myswap(a,b); it reaches the function template of myswap() fn
     * and since a,b are int, so creates a specific myswap() function for integer based references
     * when it reaches myswap(c,d); it goes to template and creates a specific fn for floats references
     * similarily for myswap(e,f); 
     * 
     * Compiler is able to do so, just because the source code is availble to it in form of a function template
     * so it becomes source code level reuse
     * 
     * We provide:  Generic version of function
     * Compiler creates: 3 specific versions
     * */
    myswap(a,b);
    myswap(c,d);
    myswap(e,f);

    cout << "------------------------\n";
    cout << "After swap\n";
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    cout << e << " " << f << endl;
    return 0;
    // check template_swap_multi.cpp
}