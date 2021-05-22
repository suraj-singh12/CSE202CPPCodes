// Program to demonstrate file i/o char by char

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string source, target;
    cout << "Source File : ";
    cin >> source;
    cout << "Target File : ";
    cin >> target;
    
    ifstream infile(source,ios::in);        //ios::in means open file in read mode
    if (!infile.is_open()){
        cout << "Error!! Could not open/find the input file\n";
        return -1;
    }
    ofstream outfile(target,ios::out|ios::trunc);   //ios::out means open this file in write mode, create if not exists
                                                    /* ios::trunc means truncate(erase the contents of file if file exists)
                                                     * then do any operation
                                                     */

    char str[80];
    while(infile)        // keep on iterating untill end of file
    {
        infile.getline(str,79,'\n');     // '\n' is called delimiter here
        // read 79 characters (79char + '\0' = 80 char) or read till '\n' is detected, which ever comes first
        cout << str << endl;
        outfile << str;     // send str content into outfile
        //or
        //outfile.write(str,sizeof(str));
    }
    
    /* or my style
    string mystr;
    while(infile){
        getline(infile,mystr);  // reads one full line (of any length, till the '\n' char is not encountered)
        cout << mystr << endl;
        outfile << mystr;
    }
    */

    infile.close();
    outfile.close();
    return 0;
}