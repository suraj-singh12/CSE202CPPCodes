#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> v1;
    v1.push_back("Suraj");
    v1.push_back("Michael");
    v1.push_back("Fury");
    v1.push_back("Alen");

    v1.pop_back();

    cout << v1[1] << endl;

    for (auto name:v1){
        cout << name << "\n";
    }
    return 0;
}