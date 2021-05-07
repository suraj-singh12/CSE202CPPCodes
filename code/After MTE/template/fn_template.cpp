// Read more about templates from ppts 

#include <iostream>
using namespace std;

// Function template
template<typename T>

T myMax(T x, T y){
    if(x>y)
        return x;
    else
        return y;
}
int main(){
    cout << myMax<int>(3,5) << endl;
    cout << myMax<float>(3.2,7.8) << endl;
    cout << myMax<char>('g','e') << endl;
    cout << myMax<string>("hello","world") << endl;

    return 0;
}