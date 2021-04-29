#include <iostream>
using namespace std;

class Player{
protected:
    string Pname;
public:
    void getdata(){
        cout << "Enter Player name: ";
        cin >> Pname;
    }
    virtual void displaydata()=0;
};

class CricketPlayer: public Player{
    int runs;
public:
    void getRuns(){
        cout << "Enter runs: ";
        cin >> runs;
    }
    void displaydata(){
        cout << "Player : " << Pname << "\t Runs: " << runs << endl;
    }
};

class FootballPlayer: public Player{
    int goals;
public:
    void getGoals(){
        cout << "Enter goals: ";
        cin >> goals;
    }
    void displaydata(){
        cout << "Player : " << Pname << "\t Goals: " << goals << endl;
    }
};

int main(){
    CricketPlayer C;
    C.getdata();
    C.getRuns();
    C.displaydata();

    cout << endl;

    FootballPlayer F;
    F.getdata();
    F.getGoals();
    F.displaydata();
    return 0;
}