#include <iostream>
using namespace std;

class Name{
    public:
    static string formalName;
    string nickName;

    static void show(){
        cout << formalName << endl;
    }
};
string Name::formalName = "";

int main()
{
    cout << "\n------------Formal Name is static------------\n\n";
    Name myName;
    myName.formalName = "Suraj Singh";
    myName.nickName = "Suraj";
    Name yourName;
    yourName.nickName = "SUN";

    cout << myName.formalName << endl;
    cout << myName.nickName << endl;
    cout << yourName.formalName << endl;
    cout << yourName.nickName << endl;
    
    cout << endl;
    myName.show();
    yourName.show();
    return 0;
}