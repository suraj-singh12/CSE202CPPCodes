#include <iostream>
#include <limits>   // for using numeric limits
using namespace std;
int main()
{
    string s;

    cin >> s;
    cout << "cin stored : \t" << s << endl << endl;

    // clearing the buffer
    cin.ignore(numeric_limits<streamsize>::max(),'\n');     // C++ style
    //while(getchar()!='\n');       // C style
    
    getline(cin,s);
    cout << "getline(cin,s) : \t" << s << endl;

    s = "Hello " + s;
    cout << "Added \'Hello\' : \t" << s << endl;

    s.push_back('a');
    cout << "Pushed back \'a\' : \t" << s << endl;

    s.pop_back();
    
    cout << "Popped last element : \t" << s << endl;
    cout << "capacity : \t" << s.capacity() << endl;

    s.shrink_to_fit();

    cout << "Capacity after shrink_to_fit() : \t" << s.capacity() << endl;
    
    s.resize(11);
    cout << "After resizing s to 11 : \t" << s << endl;
    s.shrink_to_fit();

    cout << "Capacity after shrink to fit() : \t" << s.capacity() << endl;

    char ch_arr[15];
    s.copy(ch_arr,5,0);

    printf("ch_arr contains: %s\n",ch_arr);

    string s2 = "doing task";
    cout << "s2 : \t\t" << s2 << endl;

    s.swap(s2);
    cout << "swapping s and s2 : \n";
    cout << "s : \t" << s << "\t s2 :\t" << s2 << endl;

    cout << "\n\n";
    cout << s.front() << '\t' << s.back() << '\t' << s.substr(1,5) << '\t' 
         << s.length() << '\t' << s.append("hello") << s.append(s2,0,5) << '\t' << endl 
         << s.find("Hello") << endl;
    cout << s << endl;
    
    s.replace(0,3,"Hii");
    cout << s << endl;
    return 0;
}