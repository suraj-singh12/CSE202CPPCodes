#include <iostream>
#include <string>
using namespace std;

class FriendA{
    private:
    string userName = "Michael";
    string password = "99"; 
    
    public:
    friend class FriendB;
    // now class FriendB can access private and protected data members of FriendA class
    
    friend void displayFun(FriendA obj);
    // This function is not the part of the class
    // it's a normal function which is friend of this class 
};

class FriendB{
    public:
    void display(FriendA obj){
        cout << obj.userName << endl;
        cout << obj.password << endl;
    }
};


void displayFun(FriendA obj){
    cout << obj.userName << endl;
    cout << obj.password << endl;
}

int main()
{
    FriendA objA;
    FriendB objB;
    objB.display(objA);
    displayFun(objA);
    return 0;
}