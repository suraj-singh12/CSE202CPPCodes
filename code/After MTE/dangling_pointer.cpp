#include <iostream>
using namespace std;
int main()
{
    int *t = new int;       // allocating memory in heap and pointing t to that memory
    *t = 50;
    cout << *t << endl;
    // free/de-allocating the memory allocated in heap
    delete t;

    /* now the memory allocated in heap is freed, but the pointer t still has its address. 
     * so it is pointing to a memory which is no longer existing (deleted)
     * so t is now called a dangling pointer
     * i.e. when a pointer is pointing to a memory location that has been deleted or is no longer existing then that pointer is called a dangling pointer
     * 
     * how to avoid this?
     * just set the pointer to NULL after deleting the memory
     * */
    
    t = NULL;
    // now t is not a dangling pointer

    return 0;
}