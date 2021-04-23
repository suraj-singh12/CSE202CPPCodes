// try catch ; memory allocation failure check

#include <iostream>
using namespace std;

int  main()
{
    while(1){
        // allocate huge amount of memory 
        long MEMORY_SIZE = 0x7fffffff;
        cout << "allocating " << MEMORY_SIZE/(8*1024*1024) << "  MB\n";
        // put memory allocation statement in try block
        try{
            char * ptr = new char[MEMORY_SIZE];
            // when memory allocation fails, below line will not be executed
            // and control will go in the catch block
            cout << "Memory is allocated successfully\n";

            // not freeing the allocated memory (memory leak) (intentional, so at one time, system will fail to allocate memory and the program shall report it(by jumping to catch block) and terminate)
            // the system may automatically free the memory then or you may need to reboot/restart the system to claim that memory
            // delete[] ptr;
        }
        catch(const bad_alloc &e){
            cout << "Memory allocation failed : " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}