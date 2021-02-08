// Program to find the frequency of a character in a string 
#include <iostream> 
using namespace std;
int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin,s);

    char ch;
    cout << "Enter the character to be searched for: ";
    cin >> ch;

    int frequency = 0;
    for(int i = 0;i < s.size(); ++i){
        if(s[i] == ch)
            frequency++;
    }

    cout << "Character : " << ch << endl;
    cout << "Frequency : " << frequency << endl;
    return 0;
}