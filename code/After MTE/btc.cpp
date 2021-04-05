// basic to class type casting using constructor

#include <iostream>
using namespace std;

class  Time{
private:
    int hrs, min;
public: 
    Time(int);
    void display();
};

Time::Time(int t){
    cout << "Basic type to the class type conversion\n";
    hrs = t/60;
    min = t%60;
}
void Time::display()
{
    cout << hrs <<  " hours" <<  endl;
    cout << min << " minutes" << endl;
}

int main()
{
    int duration;
    cout << "Enter the value in minutes: ";
    cin >> duration;

    Time t1 = duration;
    t1.display();
    return 0;
}