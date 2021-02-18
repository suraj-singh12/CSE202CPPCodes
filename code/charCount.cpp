// C++ Program to Find the Number of Vowels, Consonants, Digits and White Spaces in a String.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin,s);
    string sCopy = s;

    // converting all characters to lowercase
    transform(s.begin(),s.end(),s.begin(),::tolower);

    int i=0,vowels=0,consonants=0,digits=0,whiteSpaces=0;
    while(s[i]!='\0'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            vowels++;
        else if(s[i]>='a' && s[i]<='z')
            consonants++;
        else if(s[i]>='0' && s[i]<='9')
            digits++;
        else if(s[i]==' ')
            whiteSpaces++;
        ++i;
    }
    cout << "String: \"" << sCopy << "\" contains \n"
         << vowels << " vowels\n"
         << consonants << " consonants\n"
         << digits << " digits\n"
         << whiteSpaces << " white spaces\n";
    
    return 0;
}