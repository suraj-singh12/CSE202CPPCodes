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

    char ch;
    while(!infile.eof())        // keep on iterating untill end of file is detected equivalent to while(infile)
    {
        infile.get(ch);     // it is by reference
        cout << ch;
        outfile.put(ch);    // it is by value
    }
    infile.close();
    outfile.close();
    return 0;
}