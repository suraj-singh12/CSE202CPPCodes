#include <iostream>
using namespace std;

int main()
{
    float *fptr = NULL;
    fptr = new float;

    *fptr = 45.59;
    cout << *fptr << endl;

    // very important to free the allocated memory to prevent memory leak
    delete fptr;
    // make fptr point to NULL (nowhere) so it is not a dangling pointer
    fptr = NULL;

    // *fptr = 50;      // will raise error
    // cout << *fptr << endl;       // will raise error
    return 0;
}