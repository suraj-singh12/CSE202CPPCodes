#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    cout << "Value of i = " << i << endl; 
    cout << "Address of i = " << &i << endl;
    cout << "Value of i = " << *(&i) << endl;

    /*---------------------------------------------------------------*/
    int &j = i;     // j is a reference of i
                    // so address of j would be same as i
    cout << endl;
    cout << "j is a reference of i\n";
    cout << "Address of j = " << &j << endl;
    cout << "Value of j = " << j << endl;
    cout << "Value of j = " << *(&j) << endl;
    /*---------------------------------------------------------------*/

    int *k = &i;
    cout << endl;
    cout << "k is pointer, pointing to int i\n";
    cout << "Address of k = " << &k << endl;
    cout << "Address pointed to by = " << k << endl;
    cout << "Address of k = " << *(&k) << endl;
    cout << "Value in the address pointed to by ptr k (i.e. value of i) = " << *k << endl;

    int  **l = &k;
    cout << endl;
    cout << "l is pointer, pointing to k\n";
    cout << "Address of l = " << &l << endl;
    cout << "Address pointed to by l = " << l << endl;       // is the address in l (i.e. address of k)
    cout << "Address pointed to by l = " << *(&l) << endl;
    cout << "Double dereferencing l(pointer to pointer) gives the value of i: " << **l << endl;
    // &l - address of l
    // l - value of l (i.e. address of the pointer it is pointing to)
    // *l - value in the address pointed to by l ( i.e. value in k (i.e. address of i))
    // **l - value in the address pointed to by k (i.e. l->k->i, print i)
    return 0;
}
/*
 -> Address, Reference, Memory location, Cell number are all same
 -> & - Address of operator
 -> * - value at address or indirection operator
 -> & * - pointer operators

 -> Addresses are in binary
 -> cout converts binary address to hex automatically
 -> 32-bit machine - 32-bit address = 8 Hex digits  (8*4 = 32-bits)
 -> 64-bit machine - 64-bit address = 16 Hex digits (16*4 = 64-bits)

 -> 0x7ffc89127eac (but this address is of only 12 hex digits)
 -> (12 * 4 = 48-bit address) how?
 -> 0x7ffc89127eac is 0x00007ffc89127eac in actual
 -> so it is not 48-bit address, but 64-bit.

 -> As leading zeroes are not printed

*/
 