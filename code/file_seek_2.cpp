#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file("content.txt",ios::in|ios::out|ios::trunc);
    if(file){
        file << "Hello, I am creating a c++ file handling program "
            << "that illustrates the use of seekg() function in file. "
            << "The file pointer will point at a particular position in file "
            << "and start displaying till a desired no of words from the file are read."
            << " It will stop then.";
        
        file.seekg(7,ios::beg);
        int counter=0;
        string s;
        while(!file.eof() && counter<=20){
            file >> s;
            cout << s <<' ';
            counter++;
        }
        file.close();
    }
    else{
        cout << "Error!, failed to create the file.";
    }
}