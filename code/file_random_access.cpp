#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //very important to use trunc here when ios::in ios::out both specified
    fstream my_file("test1.txt",ios::in|ios::out|ios::trunc);
    //very important to verify that the file is created, otherwise a lot of chaos may happen...
    if(my_file){
        my_file << "Hello World";     // insert "Hello World!!" in my_file (test.txt)
        // setting pointer to 6th position in file from beggining
        my_file.seekg(6,ios::beg);

        char A[6];
        my_file.read(A,5);
        //A[5]=0;
        cout << A << endl;

        // string s;
        // my_file >> s;
        // cout << s;
        my_file.close();
    }
    else
        cout << "Error!!, could not create the file.";
    return 0;

}
