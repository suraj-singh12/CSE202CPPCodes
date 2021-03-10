#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file;
    
    file.open("data_file.txt",ios::out);
    if(!file){
        cout << "Error!!, could not create a file.";
    }
    else{
        cout << "Enter Data: \n";
        string s;
        getline(cin,s);
        file << s;
        file.close();
        cout << "Data written in file successfully.\n";
    }
    return 0;
}