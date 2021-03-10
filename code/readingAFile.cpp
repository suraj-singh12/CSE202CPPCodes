#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream file;
    file.open("data_file.txt",ios::in);
    if(!file)
        cout << "Error!!, could not open the file";
    else
    {
        cout << "File opened successfully.\n";
        cout << "Reading the contents of the file: \n\n";
        
        string s;
        // reading file line by line
        // while(getline(file,s)){
        //     cout << s << endl;
        // }

        // reading file word by word
        while(!file.eof()){
        file >> s;
        cout << s <<' ';
        }

        //reading file character by character   (keep in mind, cin ignores white spaces, newlines and tabs)
        // char ch;
        // while(!file.eof()){
        //     file >> ch;
        //     cout << ch;
        // }
        file.close();
    }
    return 0;
}