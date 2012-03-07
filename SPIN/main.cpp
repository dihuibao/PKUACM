#include <iostream>
#include <string>

using namespace std;

int wheel[12];

int main()
{
	string s;
	int l,i;
	memset(wheel,0,sizeof(int)*12);
	while(cin >> s){
		l = s.length();
		for(i=0;i<l;i++){
			wheel[i]+=s[i]-'0';
		}
	}
	for(i=0;i<l;i++){
		wheel[i]%=10;
		cout << wheel[i];
	}
	cout << endl;
	return 0;
}