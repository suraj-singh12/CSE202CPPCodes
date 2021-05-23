#include <iostream>
using namespace std;

template <class T>
class Base
{
    private:
     T data;
    public:
     void set(const T &val)     // always, try to recieve objects by reference, it saves from making a whole copy of it. 
                                // if you want it to not get altered, then take it as a const reference. 
                                // so this reference can't modify the value of original var
                                // learn more about it here :  https://www.learncpp.com/cpp-tutorial/pointers-and-const/
     {
         data = val;
     }
};

template <class T>
class Derived : public Base<T>      // this tells compiler, that the class we are inheriting is a template class
{
    public:
     void set(const T &v){
         Base<T>::set(v);
         cout << v << endl;
     }
};

int main()
{
    Derived <int> i;
    i.set(10);

    Derived <float> f;
    f.set(3.14);

    return 0;
}