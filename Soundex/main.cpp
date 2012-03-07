#include <iostream>
#include <string>

using namespace std;

int mapping[26]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
int number[20];

int main()
{
	string s;
	int l,i,last;
	while(cin >> s){
		memset(number,0,20);
		l = s.length();
		last = 0;
		for(i=0;i<l;i++){
			number[i]=mapping[s[i]-'A'];
			if(number[i] && last != number[i]){
				cout << number[i];

			}
			last=number[i];
		}
		cout << endl;

	}
	return 0;
}