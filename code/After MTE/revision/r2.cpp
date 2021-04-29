// return binary of a natural number
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num = 2048;
    vector<int> v;
    while(num>0){
        int temp = num%2;
        v.push_back(temp);
        num/=2;
    }
    int front_zeroes = 0;
    if (v.size() < 8)
        front_zeroes =  8 - v.size();
    else if (v.size() < 16)
        front_zeroes =  16 - v.size();
    else if (v.size() < 32)
        front_zeroes =  32 - v.size();
    int j = 0;
    while(front_zeroes--){
        cout << 0 ;
        j++;
        if(j%4 == 0)
            cout << " ";
    }
    
    
    for(int i= v.size()-1;i>=0;--i){
        cout << v[i];
        j++;
        if(j%4 == 0)
            cout << " ";
    }
    cout << endl;
    return 0;
}