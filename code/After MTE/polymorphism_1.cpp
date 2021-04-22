    #include <iostream>
    using namespace std;

    class S{
        public:
        int Sum(int a, int b,int c=0){
            return a+b+c;
        }
        float Sum(float a, float b,float c=0){
            return a+b+c;
        }
    };

    int main()
    {
        S s1;
        cout << s1.Sum(1,2) << endl;
        cout << s1.Sum(1,2,3) <<endl;
        cout << s1.Sum(5.0f,2.5f) << endl;
        cout << s1.Sum(1.3f,2.5f,6.3f) << endl;
        return 0;

    }