#include <iostream>
#include <vector>
using namespace std;

class Point{
    private:
        int x, y;
    public: 
        Point(int xx=0, int yy = 0){
            x = xx; 
            y = yy;
        }

        friend ostream & operator << (ostream & o, Point &p);
        // overloaded `<<` operator function, 
        // marked as friend so that it can use the private data members of the this class
        // ostream &o               (we are recieving cout object by reference)
        // ostream & operator <<        ( we are returning ostream cout object by reference; this will allow cascading of << in cout)

        // ww are doing this so as to enable cout to print our objects because, it only knows how to print predefined data types 
        // but how to print Point type object is what it does not know.
        // So we are overloading it, and will tell it how to print our object when we say cout << vp1;       (where vp1 is a Point class object)

};
// teaching cout how to print our Point class object when we do cout << vp1;     (where vp1 is a Point type object)
ostream & operator << (ostream &o, Point &p){
    o << "(" << p.x << "," << p.y << ")" << endl;
        // o is basically cout recieved by reference using ostream &o
    return o;
}

int main()
{
    vector <Point> vp1;         // vector of "Point" type ( benefit of vector being a template class)
    for(int i=0;i<5;++i){
        vp1.push_back(Point(i+1,i+1));      // =  vp1.push(Point_object);
    }

    for(auto pt:vp1)                // iterating through all Point objects in vp1 vector and printing them
    {    cout << pt;    }
    
    cout << "Front: ";
    cout << vp1.front();
    cout << "Back: ";
    cout << vp1.back();

    vector<Point>::reverse_iterator ritr;
    for(ritr = vp1.rbegin(); ritr!= vp1.rend(); ++ritr){
        cout << *ritr;
    }
    
    cout << "sizeof vp1: " << vp1.size() << endl;

    vector <Point> vp2;
    vp2.assign(vp1.begin(),vp1.begin() + 3);    // copy 0->3 elements from vp1 into vp2. Mathematically, copy elements in the index set [0,3)   
    for (auto pt : vp2){
        cout << pt;
    }



}