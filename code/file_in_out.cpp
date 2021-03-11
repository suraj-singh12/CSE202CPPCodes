#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    
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
        cout << "Data written in file successfully.\n\n";
    }
    
    file.open("data_file.txt",ios::in);
    cout << "\nOpening the file...\n";
    if(!file){
        cout << "Erro!!, could not read the file.";
    }
    else{
        cout << "The contents of the file are: \n";
        string s;
        while(getline(file,s)){
            cout << s;
        }
        file.close();
    }
    return 0;
}