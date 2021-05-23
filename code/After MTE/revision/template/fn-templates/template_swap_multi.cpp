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

template <typename T, typename U> 
T add(T &a , U &b)
{
    T sum = a+b;
    return sum;
}

int main()
{
    int a = 10, b = 20;
    float c = 14.5, d = 15.5;
    long e = 16, f = 87;
    cout << "------------------------\n";

    /* when we compile this program, as soon compiler reaches add(a,b); it reaches the function template of add() fn
     * and since a,b are int, so creates a specific add() function for integer based references
     * when it reaches add(c,d); it goes to template and creates a specific fn for floats references
     * similarily for add(e,f); 
     * 
     * Compiler is able to do so, just because the source code is availble to it in form of a function template
     * so it becomes source code level reuse
     * 
     * We provide:  Generic version of function
     * Compiler creates: 3 specific versions
     * */
    cout << e << "+" << a << " = " << add(e,a) << endl;     // specific add(long, int) made
    cout << c << "+" << b << " = " << add(c,b) << endl;     // specific add(float, int) made
    cout << e << "+" << f << " = " << add(d,f) << endl;     // specific add(float, long) made
    // compiler can create any number of versions but only when required
    // right now only 3 versions of add() were required, as three different types of calls were made to add()
    // so compiler made 3 versions only
    return 0;
}