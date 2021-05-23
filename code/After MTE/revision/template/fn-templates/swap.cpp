#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap(float &a, float &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap(long &a, long &b){
    int temp = a;
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

    swap(a,b);
    swap(c,d);
    swap(e,f);

    cout << "------------------------\n";
    cout << "After swap\n";
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    cout << e << " " << f << endl;
    return 0;
}
/*
 * Everything looks good, we have also used fn overloading to keep fn names same, these are polymorphic functions, 
 * and it is compile time polymorphism as the call to these functions is resolved by the compiler at compilation stage (early binding).
 * But this is not the best solution, because we still need to define 3 swap functinons
 * 
 * suppose some errors are there in swap function, now you will need to rectify them and update the code
 * but there are 3 copies, you will have to make changes manually in all three fns 
 * NOW, suppose these were functions with 50-100s of lines
 * and not 3, but may be 10 - 12 or more
 * then it will definitely become a very tideous job to make changes in them and also in maintaining them.
 * here comes function template to simplify things, where we need to make only one generic function, and 
 * compiler will make the specific fns itself based on generic one and this makes code more manageable and easy to update
 * as we only need to declare once 
 * check template_swap.cpp
 * */