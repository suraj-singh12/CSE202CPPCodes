/*
 * Types of Inheritance in C++
 * Single Inheritance.
 * Multiple Inheritance.
 * Multilevel Inheritance.
 * Hierarchical Inheritance.
 * Hybrid Inheritance (also known as Virtual Inheritance)
 */

#include <iostream>
using namespace std;

class Animal{
    public:
     int leg = 2;
     int eye = 2;
     bool fly = true;
};

class Cat : public Animal{
    public:
     Cat(){
         fly = false;
     }
};

int  main()
{
    Cat c1; 
    cout << "Legs: " << c1.leg << "\t\tEyes: " << c1.eye << "\t\tCan Fly? " << (c1.fly?"Yes":"No") << endl;
    return 0;
}