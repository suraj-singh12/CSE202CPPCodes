#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int len;
    char str1[10] = "Hello";
    char str2[10] = "World";
    strcat(str1, str2);
    
    // This way answer coming different. Why?
    len = strlen(str1);
    cout << len << endl;
    // cout << strlen(str1) << endl;

    /* This way it works right, both give same 10 as answer
    cout << strlen(str1) << endl;
    len = strlen(str1);
    cout << len << endl;
    */
    return 0;
}

// #include <iostream>
// #include <cstring>
// using namespace std;

// #define size(a) sizeof(a)/sizeof(a[0])

// int main()
// {
//     char str1[] = "H";
//     char str2[] = "World123456789";
    
//     cout << size(str1) << endl;
//     cout << size(str2) << endl;
//     cout << strlen(str1) << endl;
//     cout << strlen(str2) << endl;
    
//     strcat(str1, str2);
    
//     cout << size(str1) << endl;
//     cout << size(str2) << endl;
//     cout << strlen(str1) << endl;
//     cout << strlen(str2) << endl;
    
//     return 0;
// }