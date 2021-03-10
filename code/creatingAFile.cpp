#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ofstream my_file;
    my_file.open("my_file.txt",ios::out);
    if(!my_file){
        cout << "File not created.\n";
    }
    else{
        cout << "File created successfully.\n";
        my_file << "line 1";        // written a text
        my_file.close();
    }
    return 0;

}