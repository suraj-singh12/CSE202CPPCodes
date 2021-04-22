#include <iostream>
#include <fstream>
using namespace std;

class Telephone{
    string name;
    int t_phone;
public:
    void set_name(string s){
        name = s;
    }
    void set_telephone(int n){
        t_phone = n;
    }
};

int main()
{
    ofstream file("telephone.txt",ios::out|ios::trunc);
        if(file){
        char response;
        do{
            cout << "Enter name: ";
            string name;
            cin >> name;
            //adding five spaces
            for(int i=name.length();i<=name.length()+5;++i){
                name[i] = ' ';
            }

            cout << "Enter telephone: ";
            int phone;
            cin >> phone;
            
            Telephone t;
            t.set_name(name);
            t.set_telephone(phone);

            file.write((char*)&t,sizeof(t));        //writing file object in telephone.txt

            cout << "Want to enter more?(y/n)";
            cin >> response;
        }while(response == 'y' || response == 'Y');
        file.close();
        }
    return 0;
}