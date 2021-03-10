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
        //Writing data to file
        my_file << "Twinkle Twinkle Little Star\n";
        my_file << "How I Wonder What You Are\n";
        my_file << "Up Above The World So High\n";
        my_file << "Like A Diamond In The Sky\n";
        my_file.close();
    }
    return 0;

}