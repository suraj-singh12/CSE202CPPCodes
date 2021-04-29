#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		//initialised all to 0
		bool status_capital[5] {0};	// status of A,E,I,O,U
		bool status_small[5] {0}; 	//status of a,e,i,o,u

        string s;
		cin >> s;

		int i = s.length()-1;
		while(i>=0){
			switch(s[i]){
				case 'A': status_capital[0] = 1;
						 break;
				case 'a': status_small[0] = 1;
						 break;

				case 'E': status_capital[1] = 1;
						 break;
				case 'e': status_small[1] = 1;
						 break;

				case 'I': status_capital[2] = 1;
						 break;
				case 'i': status_small[2] = 1;
						 break;

				case 'O': status_capital[3] = 1;
						 break;
				case 'o': status_small[3] = 1;
						 break;

				case 'U': status_capital[4] = 1;
						 break;
				case 'u': status_small[4] = 1;
						 break;
			}
			i--;
		}
		int flag1 = 1, flag2 = 1;
		for(i=0;i<5;++i){
            cout << status_capital[i] << ' ';
			if(status_capital[i]==0)
			{	flag1 = 0; }
			if(status_small[i]==0)
			{	flag2 = 0;	}
		}

		if(flag1 == 0 && flag2 == 0)
			cout << "ugly string\n";
		else
			cout << "lovely string\n";
	}
	return 0;
}