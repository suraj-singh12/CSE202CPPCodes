/* NOTE: 
 * The size of an empty class is 1 byte.

 * Functions does not contribute to the size of the class only data members contribute
 * BUT 
 * Virtual function play a role in deciding the size of a class (remember this)
 * */

#include <iostream>
using namespace std;

class C1{

};

class D1{
    public:
    virtual void f(){

    }
};

int main()
{
    C1 objc1,objc2;
    cout << "sizeof(objc1) : " << sizeof(objc1) << " byte" << endl;     // 1 byte
    cout << "sizeof(objc2) : " << sizeof(objc2) << " byte" << endl;     // 1 byte
    //----------------------------------------------------

    //----------------------------------------------------
    // NOTE : Class D1 has virtual function inside it
    D1 objd1,objd2;
    cout << "sizeof(objd1) : " << sizeof(objd1) << " byte" << endl;     // 8 bytes 
    cout << "sizeof(objd2) : " << sizeof(objd2) << " byte" << endl;     // 8 bytes
    //----------------------------------------------------
    /* Every object 'of the class containing a virtual function in it' has a VPTR(virtual table pointer) within it. 
     * (EVERY object of such class has VPTR within it, keep in memory)
     * and since a pointer is 8 bytes in size so the size of the object of the class D1 comes out to be 8 bytes.
     */
    return 0;
}

/* NOTE:
 => VTABLE
 * VTable is there on a per class basis, for every class, when the class contains a virtual function in it,
   if the class does not have a virtual function, no VTable would be created for it.
 * VTable contains addresses of only virtual functions
 => VPTR
  * one VPTR per object
  * present only if the class contains a virtual function in it.
  * VPTR always points to VTABLE of its class
  
  * Example : (in previous codes) 
              class Circle's object's VPTR points to class circle's VTABLE
              Rectangle object's VPTR points to REctangle class's VTable


  * NOTE: VTable and VPTR will only exist when a virtual function is present in the class.
          A class with no virtual function will not have any VTable or VPTR.
  */