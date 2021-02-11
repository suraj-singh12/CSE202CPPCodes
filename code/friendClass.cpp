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
};

class FriendB{
    public:
    void display(FriendA obj){
        cout << obj.userName << endl;
        cout << obj.password << endl;
    }
};
int main()
{
    FriendA objA;
    FriendB objB;
    objB.display(objA);
    return 0;
}