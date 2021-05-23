// see clas_template.cpp file in class-template

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    vector <int> v1;        // vector is a template class of Standard Template Library(STL)
                            // internally vector makes use of arrays
    for(int i=0;i<=5;++i){
        v1.push_back(i*5);
    }

    vector <int>::iterator itr1;     // iterator is a class within vector template class, i.e. it is a nested class
                // this is a random access iterator

    for(itr1 = v1.begin(); itr1 != v1.end(); ++itr1)    // v1.end() will leave the iterator 1 step ahead of the last element. so be break the loop as soon it reaches there. 
    {    cout << *itr1 << " ";    }       // itr1 is an object of `vector<int>::iterator` class, but it has a pointer within it, 
                                // so when we say *itr1, that pointer is used to show us the values of the vector on which iterator is iterating
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    vector <int> v2 {10,20,30,40,50};
                        // this way also a vector can be initialised when we have elements beforehand.
    for(auto itr2 = v2.begin(); itr2 != v2.end(); ++itr2)      // auto means telling compiler to chose an appropriate iterator to iterate over this container automatically
                            //so depending upon the type of container (here vector, integer type), a suitable iterator is returned by the compiler to be used here
    {    cout << *itr2 << " ";           } 
    cout << endl;
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    vector <int> v3 {10,20,30,40,50};
    for(auto num : v3)      // iterate over all the elements if the vector by using the suitable iterator
    {   cout << num << " ";     }

    return 0;
    
    // learn more operations in vector_cont2.cpp
}