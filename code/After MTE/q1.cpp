#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream infile("phone_no.txt");
    while(infile){
        string name;
        int phone;
        while(!infile.eof()){
            infile >> name;
            infile >> phone;
            cout << setw(10) << left << name;       // name left justified
            cout << setw(10) << right << phone;     // phone right justified
            cout << endl;
        }
        infile.close();
    }
}