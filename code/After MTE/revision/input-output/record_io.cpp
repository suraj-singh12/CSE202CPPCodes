#include <iostream>
#include <fstream>
using namespace std;

struct Employee{
    char name[20];
    int age;
    float sal;
};

int main()
{
    Employee e;
    char ch = 'y';

    ofstream outfile;
    outfile.open("EMP.DAT",ios::out|ios::binary);
    // ios::out ios::binary etc are called ios flags
    do{
        cout << endl << "Enter data : ";
        cin >> e.name >> e.age >> e.sal;
        outfile.write(reinterpret_cast<const char*>(&e),sizeof(e));     // writing complete object to the file in binary mode in one go
        // since this write fn does not know about this struct Employee e object, as we have created this struct today, it is not a part of language
        // so we are telling this write() fn how to interpret the address of this object
        // reinterpret_cast<const char*> tells the compiler to cast the addresss of this struct into an address of char *
        // i.e. think 
        //    struct Employee *       is              char * 
        // we are using <const char*> not <char*> because we don't want this write() function to manipulate the object data
        // but just read and write it into file.
        cout << "Add another (Y/N) ";
        cin >> ch;
        
    }while(ch=='y'||ch=='Y');
    outfile.close();

    cout << "\nReading the data from the file\n";
    ifstream infile;
    infile.open("EMP.DAT",ios::in|ios::binary);
    while ( infile.read(reinterpret_cast<char *>(&e),sizeof(e)) )
    {
        cout << e.name << '\t' << e.age << '\t' << e.sal << endl;
    }
    infile.close();

    return 0;
}